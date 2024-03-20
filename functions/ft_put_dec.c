/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_dec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-malt <kel-malt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:36:10 by kel-malt          #+#    #+#             */
/*   Updated: 2024/02/19 12:53:52 by kel-malt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_put_dec(int content, int *len)
{
	if (content == -2147483648)
	{
		ft_put_str("-2147483648", len);
		return ;
	}
	if (content < 0)
	{
		content = -content;
		ft_put_char('-', len);
	}
	if (content >= 10)
		ft_put_dec(content / 10, len);
	ft_put_char(content % 10 + '0', len);
}
