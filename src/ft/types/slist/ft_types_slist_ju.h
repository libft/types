/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fake_file_name (file name is useless too)          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42header-remover <whatever@example.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by VCS handles       #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by file history     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TYPES_SLIST_JU_H
# define FT_TYPES_SLIST_JU_H

# include "ft_types_array_ju.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_ju_node
{
	struct s_ft_types_slist_ju_node	*next;
	t_ju							value;
}	t_ft_types_slist_ju_node;

typedef struct s_ft_types_slist_ju
{
	t_ft_types_slist_ju_node	*head;
	t_ft_types_slist_ju_node	*tail;
	size_t						length;
}	t_ft_types_slist_ju;

void	ft_types_slist_ju_init(
			t_ft_types_slist_ju *list);
void	ft_types_slist_ju_clear(
			t_ft_types_slist_ju *list);
t_err	ft_types_slist_ju_to_array(
			t_ft_types_slist_ju *list,
			t_ft_types_array_ju *out);
t_err	ft_types_slist_ju_from_array(
			t_ft_types_array_ju *array,
			t_ft_types_slist_ju *out);
t_err	ft_types_slist_ju_push(
			t_ft_types_slist_ju *list,
			t_ju value);
t_err	ft_types_slist_ju_unshift(
			t_ft_types_slist_ju *list,
			t_ju value);
bool	ft_types_slist_ju_shift(
			t_ft_types_slist_ju *list,
			t_ju *out);

#endif
