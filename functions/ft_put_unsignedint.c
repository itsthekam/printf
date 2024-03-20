/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsignedint.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-malt <kel-malt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:36:22 by kel-malt          #+#    #+#             */
/*   Updated: 2024/03/15 16:58:39 by kel-malt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_put_unsignedint(unsigned int content, int *len)
{
	if (content >= 10)
		ft_put_dec(content / 10, len);
	ft_put_char(content % 10 + '0', len);
}
