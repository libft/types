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

#ifndef FT_TYPES_SLIST_PC_H
# define FT_TYPES_SLIST_PC_H

# include "ft_types_array_pc.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_pc_node
{
	struct s_ft_types_slist_pc_node	*next;
	t_pc							value;
}	t_ft_types_slist_pc_node;

typedef struct s_ft_types_slist_pc
{
	t_ft_types_slist_pc_node	*head;
	t_ft_types_slist_pc_node	*tail;
	size_t						length;
}	t_ft_types_slist_pc;

void	ft_types_slist_pc_init(
			t_ft_types_slist_pc *list);
void	ft_types_slist_pc_clear(
			t_ft_types_slist_pc *list);
t_err	ft_types_slist_pc_to_array(
			t_ft_types_slist_pc *list,
			t_ft_types_array_pc *out);
t_err	ft_types_slist_pc_from_array(
			t_ft_types_array_pc *array,
			t_ft_types_slist_pc *out);
t_err	ft_types_slist_pc_push(
			t_ft_types_slist_pc *list,
			t_pc value);
t_err	ft_types_slist_pc_unshift(
			t_ft_types_slist_pc *list,
			t_pc value);
bool	ft_types_slist_pc_shift(
			t_ft_types_slist_pc *list,
			t_pc *out);

#endif
