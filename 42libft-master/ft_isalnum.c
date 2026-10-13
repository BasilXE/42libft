/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:06:08 by basayoub          #+#    #+#             */
/*   Updated: 2026/09/22 13:16:03 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int aln)
{
	if ((aln > 47 && aln < 58) || (aln > 64 && aln < 91)
		|| (aln > 96 && aln < 123))
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int main()
{
    char l;
    l = 'd';
    printf("the true : %d", isalnum(l));
    printf("\nthe fun : %d", ft_isalnum(l));
}*/
