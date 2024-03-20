/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-malt <kel-malt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:33:58 by kel-malt          #+#    #+#             */
/*   Updated: 2023/12/13 15:10:08 by kel-malt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*ret;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	ret = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, s1, len1 + 1);
	ft_strlcat(ret + len1, s2, len2 + 1);
	return (ret);
}

// int main(int ac, char **av)
// {
// 	if (ac != 3)
// 	{
// 		printf("%s", "ac not valid");
// 		return (0);
// 	}
// 	printf("%s\n",ft_strjoin(av[1], av[2]));
// 	return (0);
// }