/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-malt <kel-malt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:39:38 by kel-malt          #+#    #+#             */
/*   Updated: 2023/12/04 21:01:52 by kel-malt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

// int	main(void)
// {
// 	char	*s = malloc(20);

// 	s = "kamil";
// 	printf("%lu\n", ft_strlen(s));
// 	printf("%lu\n", strlen(s));
// }
