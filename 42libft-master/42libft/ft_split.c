/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 16:52:06 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/06 17:22:38 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**plt(const char *s, char **splits, char c)
{
	int	i;
	int	j;
	int	k;

	j = 0;
	i = 0;
	k = 0;
	while (s[j] != '\0')
	{
		if (s[j] != c )
		{
			
			splits[i][k] = s[j];
			k++;
		}
		else if (s[j] == c && s[j + 1] != c)
		{
			splits[i][k] = '\0';
			i++;
			k = 0;
		}
		j++;
	}
	splits[j] = NULL;
	return (splits);
}

int	counter(const char *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	if (s == NULL)
		return ('\0');
	while (s[i] != '\0')
	{
		if (s[i] != c && ( s[i - 1] == c || i == 0))
			count++;
		i++;
	}
	return (count);
}

char	**aloc(char **splits, int i)
{
	if (!splits[i])
	{
		while (i > 0)
		{
			i--;
			free(splits[i]);
		}
		free(splits);
		return (NULL);
	}
	return (splits);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	int		count;
	int		i;
	char	**splits;

	j = 0;
	i = 0;
	count = counter(s, c);
	splits = malloc(sizeof(char *) * (count + 2));
	if (!splits)
		return (NULL);
	while (s[j] != '\0')
	{
		if (s[j] != c && (j == 0 || s[j - 1] == c))
		{
			splits[i] = malloc(i);
			aloc(splits, i);
			i++;
		}
		j++;
	}
	splits[i] = malloc(j);
	aloc(splits, i);
	return (plt(s, splits, c));
}

int	main()
{
	char		l = '-';
	const char	*sp = "-hello---world---";
	char		**new;

	new = ft_split(sp, l);
	int	i = 0;

	while (new[i])
	{
		printf("%s\n", new[i]);
		i++;
	}
}
