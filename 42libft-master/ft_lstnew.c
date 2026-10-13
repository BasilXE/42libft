/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 02:19:31 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/07 02:19:31 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list *ft_lstnew(void *content)
{
    t_list *no2;

    no2 = malloc(sizeof(t_list));
    no2->content = content;
    no2->next = NULL;
    return (no2);
}
int main()
{
    printf("the func : %p",ft_lstnew("hello"));
}