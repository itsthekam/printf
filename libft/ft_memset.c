/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-malt <kel-malt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:30:07 by kel-malt          #+#    #+#             */
/*   Updated: 2023/12/04 20:56:55 by kel-malt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t		i;
	char		*temp;

	i = 0;
	temp = (char *)s;
	while (i < n)
		temp[i++] = (unsigned char)c;
	return (s);
}

// int	main()
// {
// 	void	*s1 = malloc(100);
// 	void	*s2 = malloc(100);

// 	printf("%s\n", (char *)ft_memset(s1, 'A', 3));
// 	printf("%s\n", (char *)memset(s2, 'A', 3));
// }