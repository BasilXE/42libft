/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 13:39:06 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/13 13:39:06 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *prints(void *p)
{
    char *c = (char *)p;
    int i =0;
    while (c[i])
    {
        if (c[i] >= 'a' && c[i] <='z')
            c[i] = c[i] -32;
        i++;
    }
    return ((void *)c);
}
void delete(void *v)
{
    free (v);
}
t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *t;
    int i;

    i = 0;
    t = malloc(sizeof(lst));
    while (t)
    {
        t = malloc(sizeof(t_list));
        if (!t)
        {
            while ()
        }
        t = f(t->content);
        
        t = t->next;
    }
}