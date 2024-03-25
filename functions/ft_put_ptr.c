/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-malt <kel-malt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:36:18 by kel-malt          #+#    #+#             */
/*   Updated: 2024/03/25 12:02:32 by kel-malt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_put_hex_ptr(unsigned long content, int *len)
{
	if (content >= 16)
	{
		ft_put_hex_ptr(content / 16, len);
		ft_put_hex_ptr(content % 16, len);
	}
	else if (content < 10)
		ft_put_char(content + '0', len);
	else
		ft_put_char(content + 'W', len);
}

void	ft_put_ptr(void *content, int *len)
{
	if (!content)
		(ft_put_str("(nil)", len));
	else
	{
		ft_put_str("0x", len);
		ft_put_hex_ptr((unsigned long)content, len);
	}
}
