/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 12:47:56 by basayoub          #+#    #+#             */
/*   Updated: 2026/09/22 13:04:34 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int dig)
{
	if (dig >= '0' && dig <= '9')
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int main()
{
    int l;
    l = '8';
    printf("the true : %d", isdigit(l));
    printf("\n the fun : %d", ft_isdigit(l));
}*/
