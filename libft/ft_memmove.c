/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-malt <kel-malt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:27:58 by kel-malt          #+#    #+#             */
/*   Updated: 2023/12/05 16:13:12 by kel-malt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*csrc;
	char		*cdest;
	size_t		i;

	i = 0;
	csrc = (char *)src;
	cdest = (char *)dest;
	if (csrc <= cdest)
	{
		while (n > 0)
		{
		cdest[n - 1] = csrc[n - 1];
		n--;
		}
		return (dest);
	}
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dest);
}
