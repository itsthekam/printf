/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-malt <kel-malt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:23:54 by kel-malt          #+#    #+#             */
/*   Updated: 2023/12/18 13:22:41 by kel-malt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int			to_write;
	long int	nn;

	nn = n;
	if (nn < 0)
	{
		write(fd, "-", 1);
		nn = -nn;
	}
	if (nn > 9)
	{
		to_write = (nn % 10) + '0';
		nn = nn / 10;
		ft_putnbr_fd(nn, fd);
		write(fd, &to_write, 1);
	}
	else
	{
		to_write = nn + '0';
		write(fd, &to_write, 1);
	}
}

// int main()
// {
// 	ft_putnbr_fd(-15, 1);
// }