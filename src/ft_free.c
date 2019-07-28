/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 17:47:03 by agilmet           #+#    #+#             */
/*   Updated: 2019/06/30 17:47:12 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void    ft_free_g_tmp(t_global *g)
{
    if (g->tmp_link_n1)
        free(g->tmp_link_n1);
    if (g->tmp_link_n2)
        free(g->tmp_link_n2);
    if (g->tmp_node)
        free(g->tmp_node);
}