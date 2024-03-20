/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:26:58 by kel-malt          #+#    #+#             */
/*   Updated: 2023/12/29 14:36:33 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;

	if (nmemb && size && (nmemb * size < size || nmemb * size < nmemb))
		return (NULL);
	ret = malloc(nmemb * size);
	if (!ret)
		return (NULL);
	else
		ft_bzero(ret, nmemb * size);
	return (ret);
}

// int main(int argc, char const *argv[])
// {
// 	char *str;

// 	str = ft_calloc(-5, -5);
// 	if(!str)
// 		return (0);
// 	free(str);
// 	// printf("%s\n", str);
// 	return 0;
// }
