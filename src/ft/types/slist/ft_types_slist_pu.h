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

#ifndef FT_TYPES_SLIST_PU_H
# define FT_TYPES_SLIST_PU_H

# include "ft_types_array_pu.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_pu_node
{
	struct s_ft_types_slist_pu_node	*next;
	t_pu							value;
}	t_ft_types_slist_pu_node;

typedef struct s_ft_types_slist_pu
{
	t_ft_types_slist_pu_node	*head;
	t_ft_types_slist_pu_node	*tail;
	size_t						length;
}	t_ft_types_slist_pu;

void	ft_types_slist_pu_init(
			t_ft_types_slist_pu *list);
void	ft_types_slist_pu_clear(
			t_ft_types_slist_pu *list);
t_err	ft_types_slist_pu_to_array(
			t_ft_types_slist_pu *list,
			t_ft_types_array_pu *out);
t_err	ft_types_slist_pu_from_array(
			t_ft_types_array_pu *array,
			t_ft_types_slist_pu *out);
t_err	ft_types_slist_pu_push(
			t_ft_types_slist_pu *list,
			t_pu value);
t_err	ft_types_slist_pu_unshift(
			t_ft_types_slist_pu *list,
			t_pu value);
bool	ft_types_slist_pu_shift(
			t_ft_types_slist_pu *list,
			t_pu *out);

#endif
