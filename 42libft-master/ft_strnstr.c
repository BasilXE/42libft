/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 00:59:38 by basayoub          #+#    #+#             */
/*   Updated: 2026/09/29 16:56:59 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;
	int	h;

	i = 0;
	h = 0;
	j = ft_strlen(little) - 1;
	if (j == -1)
		return ((char *)big);
	while (big[i] != '\0' && len > 0)
	{
		while (big[i] == little[h] && big[i])
		{
			if (h == j)
				return ((char *)(big + (i - h)));
			i++;
			h++;
		}
		h = 0;
		i++;
		len--;
	}
	return (NULL);
}
/*int	main(void)
{
	char *r = "0123456";
	char *t = "";
    	int n = 0;
	//tfindlen(t);
	printf("the real : %s", strnstr(r,t,n));
    	printf("\nthe func : %s", ft_strnstr(r,t,n));
}*/