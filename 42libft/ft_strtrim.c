/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 17:54:32 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/03 16:39:47 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ftstart(const char *s1, const char *set, int i)
{
	int	f;
	int	j;

	while (s1[i] != '\0')
	{
		j = 0;
		f = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				f = 1;
				break ;
			}
			j++;
		}
		if (f == 0)
		{
			break ;
		}
		i++;
	}
	return (i);
}

int	ftend(const char *s1, const char *set, int i)
{
	int	f;
	int	j;

	i = i - 1;
	f = 0;
	while (i >= 0)
	{
		j = 0;
		f = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
				f = 1;
				break ;
			}
			j++;
		}
		if (f == 0)
		{
			break ;
		}
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int			i;
	int			e;
	int			k;
	char		*str;

	i = ft_strlen(s1);
	str = malloc(i + 1);
	if (!str)
		return (NULL);
	i = 0;
	i = ftstart (s1, set, i);
	k = ft_strlen (s1);
	e = ftend (s1, set, k);
	k = 0;
	while (i <= e)
	{
		str[k] = s1[i];
		k++;
		i++;
	}
	return (str);
}
/*int main()
{
	const char *s = "1234561278912";
	const char *st = "1237";
	printf("\nthe one : %s", ft_strtrim(s,st));
}*/