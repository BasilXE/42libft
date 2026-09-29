/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 15:01:32 by basayoub          #+#    #+#             */
/*   Updated: 2026/09/27 15:49:01 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char		*s;
	unsigned char			*d;
	int						i;

	i = 0;
	s = src;
	d = dest;
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (d);
}
/*
int main()
{
    char de[] =  "hi fares swead";
    char sc[] = "basil";
    memmove(de,sc,7);
    printf("the real : %s" ,de);
    char d[] =  "hi fares swead";
    char s[] = "basil";
    ft_memmove(d,s,7);
    printf("\nthe func : %s" , d);
}*/
