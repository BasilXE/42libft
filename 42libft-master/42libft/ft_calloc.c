/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 16:38:37 by basayoub          #+#    #+#             */
/*   Updated: 2026/09/28 18:43:00 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*m;

	m = malloc(nmemb * size);
	if (m == NULL)
		return (NULL);
	ft_bzero(m, size * nmemb);
	return (m);
}
/*int main()
{
    char    *ptr = ft_calloc(5,4);
    char *ptt = calloc(5,4);
    printf("the real : %s", ptt);
    printf("\nthe func : %s\n", ptr);
    free(ptt);
    free(ptr);
}*/
