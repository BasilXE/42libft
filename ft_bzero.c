/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 18:35:50 by basayoub          #+#    #+#             */
/*   Updated: 2026/09/28 18:13:01 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t len)
{
	unsigned char		*p;
	size_t				i;

	p = (unsigned char *)str;
	i = 0;
	while (i < len)
	{
		p[i] = 0;
		i++;
	}
}
/*#include <string.h>
int	main()
{
	char	y[] = "123456789hi every onnneeeee";
	ft_bzero(y,5);
	for(size_t i = 0 ; i < sizeof(y); i++)
	{
		printf("\nthe ascii = %d ", y[i]);
	}
	
}*/
