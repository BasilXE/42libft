/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 22:37:52 by basayoub          #+#    #+#             */
/*   Updated: 2026/09/27 23:35:40 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (p[i] != '\0' && n > 0)
	{
		if (c == p[i])
		{
			return (p + i);
		}
		i++;
		n--;
	}
	return (NULL);
}
/*int main()
{
    char sr[] = {'t','p','u','y','e','g','d'};
    char f = 'y';
    int sz = 4;
    char *p = memchr(sr,f,sz);
    printf("the real : %s", p);
    char *r = ft_memchr(sr,f,sz);
    printf("\nthe func : %s",r);
}*/
