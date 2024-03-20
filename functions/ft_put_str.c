/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-malt <kel-malt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:36:20 by kel-malt          #+#    #+#             */
/*   Updated: 2024/03/15 16:58:30 by kel-malt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_put_str(char *content, int *len)
{
	int	i;

	i = 0;
	if (content[0] == 0)
		ft_put_str("(null)", len);
	while (content[i])
		ft_put_char(content[i++], len);
}
