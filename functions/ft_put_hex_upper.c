/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex_upper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-malt <kel-malt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:36:14 by kel-malt          #+#    #+#             */
/*   Updated: 2024/03/25 12:01:48 by kel-malt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_put_hex_upper(unsigned int content, int *len)
{
	if (content >= 16)
	{
		ft_put_hex_upper(content / 16, len);
		ft_put_hex_upper(content % 16, len);
	}
	else if (content < 10)
		ft_put_char(content + '0', len);
	else
		ft_put_char(content + '7', len);
}
