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

#ifndef FT_TYPES_SLIST_PZU_H
# define FT_TYPES_SLIST_PZU_H

# include "ft_types_array_pzu.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_pzu_node
{
	struct s_ft_types_slist_pzu_node	*next;
	t_pzu								value;
}	t_ft_types_slist_pzu_node;

typedef struct s_ft_types_slist_pzu
{
	t_ft_types_slist_pzu_node	*head;
	t_ft_types_slist_pzu_node	*tail;
	size_t						length;
}	t_ft_types_slist_pzu;

void	ft_types_slist_pzu_init(
			t_ft_types_slist_pzu *list);
void	ft_types_slist_pzu_clear(
			t_ft_types_slist_pzu *list);
t_err	ft_types_slist_pzu_to_array(
			t_ft_types_slist_pzu *list,
			t_ft_types_array_pzu *out);
t_err	ft_types_slist_pzu_from_array(
			t_ft_types_array_pzu *array,
			t_ft_types_slist_pzu *out);
t_err	ft_types_slist_pzu_push(
			t_ft_types_slist_pzu *list,
			t_pzu value);
t_err	ft_types_slist_pzu_unshift(
			t_ft_types_slist_pzu *list,
			t_pzu value);
bool	ft_types_slist_pzu_shift(
			t_ft_types_slist_pzu *list,
			t_pzu *out);

#endif
