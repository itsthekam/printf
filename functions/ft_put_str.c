/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-malt <kel-malt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:36:20 by kel-malt          #+#    #+#             */
/*   Updated: 2024/03/20 13:36:43 by kel-malt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_put_str(char *content, int *len)
{
	int	i;

	i = 0;
	if (!content)
		ft_put_str("(null)", len);
	else
	{
		while (content[i])
		ft_put_char(content[i++], len);
	}
}
