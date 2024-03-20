/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-malt <kel-malt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:44:04 by kel-malt          #+#    #+#             */
/*   Updated: 2023/12/13 15:17:12 by kel-malt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		len2;
	char		*ret;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	len2 = ft_strlen(s + start);
	if (len2 < len)
		len = len2;
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, s + start, len + 1);
	return (ret);
}

// int	main()
// {
// 	char	*ret = malloc(100);

// 	ret = ft_substr("je suis kamil", 4, 3);
// 	printf("%s\n", ret);
// 	return (0);
// }

// int	main(int ac, char **av)
// {
// 	char	*ret = malloc(100);

// 	if (ac != 4)
// 	{
// 		printf("%s\n", "non valid argument");
// 		return (0);
// 	}
// 	ret = ft_substr(av[1], (unsigned int)av[2][0], (size_t)av[3][0]);
// 	printf("%s\n", ret);
// 	return (0);
// }
