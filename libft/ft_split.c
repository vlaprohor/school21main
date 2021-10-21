/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclark <pclark@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:44:15 by pclark            #+#    #+#             */
/*   Updated: 2021/10/14 19:58:40 by pclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			continue ;
		while (*s != c && *s != '\0')
			s++;
		i++;
	}
	return (i);
}

static char	*ft_str(const char *s, int *k, char c)
{
	char	*res;
	int		i;

	while (s[*k] != '\0' && s[*k] == c)
		(*k)++;
	i = 0;
	while (s[*k] != '\0' && s[*k] != c)
	{
		(*k)++;
		i++;
	}
	*k = *k - i;
	res = malloc(sizeof(char) * (i + 1));
	if (!res)
		return (0);
	i = 0;
	while (s[*k] != '\0' && s[*k] != c)
		res[i++] = s[(*k)++];
	res[i] = '\0';
	if (s[*k] != '\0')
		(*k)++;
	return (res);
}

static void	ft_fill(char **res, const char *s, char c)
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	while (s[i] != '\0')
	{
		res[t] = ft_str(s, &i, c);
		if (!ft_strncmp(res[t], "\0", 1))
			free (res[t]);
		if (res[t] == 0)
		{
			while (t >= 0)
				free (res[t--]);
			free (res);
			return ;
		}
		t++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;

	if (s == 0)
		return (0);
	i = ft_count(s, c);
	res = malloc(sizeof(char *) * (i + 1));
	if (!res)
		return (0);
	if (i > 0)
		ft_fill(res, s, c);
	res[i] = 0;
	return (res);
}
