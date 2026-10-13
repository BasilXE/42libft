/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:49:57 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/03 15:35:16 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	return (j);
}
/*int main()
{
	const char *p = "123456";
	printf(": %d",ft_strlen(p));
}*/