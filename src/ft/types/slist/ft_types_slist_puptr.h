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

#ifndef FT_TYPES_SLIST_PUPTR_H
# define FT_TYPES_SLIST_PUPTR_H

# include "ft_types_array_puptr.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_puptr_node
{
	struct s_ft_types_slist_puptr_node	*next;
	t_puptr								value;
}	t_ft_types_slist_puptr_node;

typedef struct s_ft_types_slist_puptr
{
	t_ft_types_slist_puptr_node	*head;
	t_ft_types_slist_puptr_node	*tail;
	size_t						length;
}	t_ft_types_slist_puptr;

void	ft_types_slist_puptr_init(
			t_ft_types_slist_puptr *list);
void	ft_types_slist_puptr_clear(
			t_ft_types_slist_puptr *list);
t_err	ft_types_slist_puptr_to_array(
			t_ft_types_slist_puptr *list,
			t_ft_types_array_puptr *out);
t_err	ft_types_slist_puptr_from_array(
			t_ft_types_array_puptr *array,
			t_ft_types_slist_puptr *out);
t_err	ft_types_slist_puptr_push(
			t_ft_types_slist_puptr *list,
			t_puptr value);
t_err	ft_types_slist_puptr_unshift(
			t_ft_types_slist_puptr *list,
			t_puptr value);
bool	ft_types_slist_puptr_shift(
			t_ft_types_slist_puptr *list,
			t_puptr *out);

#endif
