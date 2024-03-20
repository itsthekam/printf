/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-malt <kel-malt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:16:48 by kel-malt          #+#    #+#             */
/*   Updated: 2024/01/03 15:10:31 by kel-malt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_free(char **ret)
{
	int	i;

	i = 0;
	while (ret[i])
	{
		free(ret[i]);
		i++;
	}
	free(ret);
	return (0);
}

int	space_check(const char *str, int letter, char c)
{
	if (c == str[letter])
		return (1);
	return (0);
}

static char	*ft_strdup_split(char **ret, const char *str, int start_i,
			int end_i)
{
	char	*newstr;
	int		i;

	i = 0;
	newstr = malloc(sizeof(char) * (end_i - start_i + 1));
	if (!newstr)
	{
		ft_free(ret);
		return (0);
	}
	while (start_i < end_i)
	{
		newstr[i] = str[start_i];
		start_i++;
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

static char	**fill_list(const char *str, char c, char **ret, int i)
{
	int	j;
	int	wordlen;

	j = 0;
	while (str[i])
	{
		wordlen = 0;
		while (space_check(str, i, c) && str[i])
			i++;
		while (!space_check(str, i, c) && str[i])
		{
			wordlen++;
			i++;
		}
		if (wordlen)
		{
			ret[j] = ft_strdup_split(ret, str, i - wordlen, i);
			if (!ret[j])
				return (ft_free(ret));
			j++;
		}
	}
	ret[j] = NULL;
	return (ret);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		words;
	char	**ret;

	i = 1;
	words = 0;
	if (!space_check(s, 0, c))
		words++;
	while (s[i])
	{
		if (!space_check(s, i, c) && space_check(s, i - 1, c))
			words++;
		i++;
	}
	ret = malloc(sizeof(char *) * (words + 1));
	if (!ret)
		return (0);
	ret = fill_list(s, c, ret, 0);
	return (ret);
}

// int	main(int ac, char **av)
// {
// 	char	**ret;
// 	int	i;

// 	i = 0;
// 	(void) ac;
// 	ret = ft_split(av[1], av[2][0]);
// 	while (ret[i])
// 		printf("%s\n", ret[i++]);
// }
