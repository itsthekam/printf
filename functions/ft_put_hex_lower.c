/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex_lower.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-malt <kel-malt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:36:12 by kel-malt          #+#    #+#             */
/*   Updated: 2024/03/21 13:20:04 by kel-malt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_put_hex_lower(unsigned long content, int *len)
{
	if (content >= 16)
	{
		ft_put_hex_lower(content / 16, len);
		ft_put_hex_lower(content % 16, len);
	}
	else if (content < 10)
		ft_put_char(content + '0', len);
	else
		ft_put_char(content + 'W', len);
}
