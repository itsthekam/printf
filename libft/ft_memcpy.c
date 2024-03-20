/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-malt <kel-malt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:36:57 by kel-malt          #+#    #+#             */
/*   Updated: 2023/12/18 13:19:21 by kel-malt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void	*src, size_t n)
{
	size_t		i;
	char		*srctemp;
	char		*desttemp;

	i = 0;
	srctemp = (char *)src;
	desttemp = (char *)dest;
	if (src <= dest)
	{
		while (n > 0)
		{
			desttemp[n - 1] = (unsigned char) srctemp[n - 1];
			n--;
		}
	}
	while (i < n)
	{
		desttemp[i] = (unsigned char)srctemp[i];
		i++;
	}
	return (dest);
}
