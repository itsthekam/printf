/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-malt <kel-malt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:28:44 by kel-malt          #+#    #+#             */
/*   Updated: 2023/12/09 16:32:22 by kel-malt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (size == 0)
		return (i);
	while ((j < i) && j < (size - 1))
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}

// int	main()
// {
// 	char	*fdst = malloc(100);
// 	char	*mydst = malloc(100);
// 	size_t	retval;

// 	retval = strlcpy(fdst, "bonsoir", 8);
// 	printf("%zu\n", retval);
// 	printf("%zu\n", ft_strlcpy(mydst, "bonsoir", 8));
// }