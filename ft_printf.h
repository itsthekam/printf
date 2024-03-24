/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-malt <kel-malt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:49:52 by kel-malt          #+#    #+#             */
/*   Updated: 2024/03/22 17:34:20 by kel-malt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *text, ...);

void	ft_put_char(char content, int	*len);
void	ft_put_dec(int content, int *len);
void	ft_put_hex_lower(unsigned long content, int *len);
void	ft_put_hex_upper(unsigned long content, int *len);
void	ft_put_ptr(void *content, int *len);
void	ft_put_str(char *content, int *len);
void	ft_put_unsignedint(unsigned int content, int *len);

#endif