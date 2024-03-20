/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-malt <kel-malt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:32:08 by kel-malt          #+#    #+#             */
/*   Updated: 2023/12/13 17:28:11 by kel-malt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void	*s, size_t n)
{
	size_t		i;
	char		*temp;

	if (!n)
		return ;
	i = 0;
	temp = (char *)s;
	while (i < n)
		temp[i++] = 0;
}

// int	main()
// {
// 	void	*s1 = malloc(100);
// 	void	*s2 = malloc(100);

// 	ft_bzero(s1, 3);
// 	bzero(s2, 3);
// 	printf("%s\n", (char *)s1);
// 	printf("%s\n", (char *)s2);
// }