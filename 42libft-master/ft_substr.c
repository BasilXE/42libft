/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 16:43:17 by basayoub          #+#    #+#             */
/*   Updated: 2026/09/29 00:31:29 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int			i;
	char		*ptr;

	ptr = malloc(len + 1);
	i = 0;
	while (s[start - 1] != '\0' && len > 0)
	{
		ptr[i] = s[start - 1];
		i++;
		start++;
		len--;
	}
	return (ptr);
}
/*int main()
{
    char const *pt = "hi im basil ayoub";
    unsigned int st = 4;
    size_t l = 8;
    printf("the func : %s", ft_substr(pt,st,l));
}*/
