/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-malt <kel-malt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:16:49 by kel-malt          #+#    #+#             */
/*   Updated: 2023/12/13 17:50:51 by kel-malt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	numlen(int n)
{
	int	len;

	len = 0;
	if (!n)
		return (1);
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void	ft_fill(char *ret, int n, int len, int sign)
{
	ret[len] = 0;
	if (n == 0)
		ret[0] = '0';
	if (sign < 0)
		ret[0] = '-';
	while (n)
	{
		ret[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*ret;
	int		sign;

	sign = 1;
	len = numlen(n);
	if (n == -2147483648)
	{
		ret = ft_strdup("-2147483648");
		return (ret);
	}
	if (n < 0)
	{
		sign = -1;
		n = -n;
		len++;
	}
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	ft_fill(ret, n, len, sign);
	return (ret);
}

// #include <limits.h>
// int main()
// {
// 	char *str = ft_itoa(0);
// 	// printf("%s\n", str);
// 	free(str);
// 	return (0);
// }