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

#ifndef FT_TYPES_SLIST_PLD_H
# define FT_TYPES_SLIST_PLD_H

# include "ft_types_array_pld.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_pld_node
{
	struct s_ft_types_slist_pld_node	*next;
	t_pld								value;
}	t_ft_types_slist_pld_node;

typedef struct s_ft_types_slist_pld
{
	t_ft_types_slist_pld_node	*head;
	t_ft_types_slist_pld_node	*tail;
	size_t						length;
}	t_ft_types_slist_pld;

void	ft_types_slist_pld_init(
			t_ft_types_slist_pld *list);
void	ft_types_slist_pld_clear(
			t_ft_types_slist_pld *list);
t_err	ft_types_slist_pld_to_array(
			t_ft_types_slist_pld *list,
			t_ft_types_array_pld *out);
t_err	ft_types_slist_pld_from_array(
			t_ft_types_array_pld *array,
			t_ft_types_slist_pld *out);
t_err	ft_types_slist_pld_push(
			t_ft_types_slist_pld *list,
			t_pld value);
t_err	ft_types_slist_pld_unshift(
			t_ft_types_slist_pld *list,
			t_pld value);
bool	ft_types_slist_pld_shift(
			t_ft_types_slist_pld *list,
			t_pld *out);

#endif
