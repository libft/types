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

#ifndef FT_TYPES_SLIST_ZU_H
# define FT_TYPES_SLIST_ZU_H

# include "ft_types_array_zu.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_zu_node
{
	struct s_ft_types_slist_zu_node	*next;
	t_zu							value;
}	t_ft_types_slist_zu_node;

typedef struct s_ft_types_slist_zu
{
	t_ft_types_slist_zu_node	*head;
	t_ft_types_slist_zu_node	*tail;
	size_t						length;
}	t_ft_types_slist_zu;

void	ft_types_slist_zu_init(
			t_ft_types_slist_zu *list);
void	ft_types_slist_zu_clear(
			t_ft_types_slist_zu *list);
t_err	ft_types_slist_zu_to_array(
			t_ft_types_slist_zu *list,
			t_ft_types_array_zu *out);
t_err	ft_types_slist_zu_from_array(
			t_ft_types_array_zu *array,
			t_ft_types_slist_zu *out);
t_err	ft_types_slist_zu_push(
			t_ft_types_slist_zu *list,
			t_zu value);
t_err	ft_types_slist_zu_unshift(
			t_ft_types_slist_zu *list,
			t_zu value);
bool	ft_types_slist_zu_shift(
			t_ft_types_slist_zu *list,
			t_zu *out);

#endif
