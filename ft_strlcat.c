/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 15:54:36 by basayoub          #+#    #+#             */
/*   Updated: 2026/09/27 15:55:42 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	int				m;

	m = 0;
	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0' && size > (j + i + 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
		dest[i + j] = '\0';
	while (src[m] != '\0')
		m++;
	if (i == size)
		return (size + m);
	return (i + m);
}
/*#include <unistd.h>
#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	char	d[20] = "lklk";
	char	d1[] = "klkl";
	char	s[] = "jhjh";
	int	k = 6;
	printf("%u\n",ft_strlcat(d,s,k));
	printf("%s\n",d);
	printf("%zu\n",strlcat(d1,s,k));	
}*/
