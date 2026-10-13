/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 17:04:39 by basayoub          #+#    #+#             */
/*   Updated: 2026/09/27 22:28:04 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (c == s[i])
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
    char *j = "gfsd$bfAkj";
    printf("the func : %s ",ft_strchr(j,3));
    printf("\nthe real : %s", strchr(j,3));
    
}*/
