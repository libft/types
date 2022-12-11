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

#ifndef FT_TYPES_SLIST_PLLD_H
# define FT_TYPES_SLIST_PLLD_H

# include "ft_types_array_plld.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_plld_node
{
	struct s_ft_types_slist_plld_node	*next;
	t_plld								value;
}	t_ft_types_slist_plld_node;

typedef struct s_ft_types_slist_plld
{
	t_ft_types_slist_plld_node	*head;
	t_ft_types_slist_plld_node	*tail;
	size_t						length;
}	t_ft_types_slist_plld;

void	ft_types_slist_plld_init(
			t_ft_types_slist_plld *list);
void	ft_types_slist_plld_clear(
			t_ft_types_slist_plld *list);
t_err	ft_types_slist_plld_to_array(
			t_ft_types_slist_plld *list,
			t_ft_types_array_plld *out);
t_err	ft_types_slist_plld_from_array(
			t_ft_types_array_plld *array,
			t_ft_types_slist_plld *out);
t_err	ft_types_slist_plld_push(
			t_ft_types_slist_plld *list,
			t_plld value);
t_err	ft_types_slist_plld_unshift(
			t_ft_types_slist_plld *list,
			t_plld value);
bool	ft_types_slist_plld_shift(
			t_ft_types_slist_plld *list,
			t_plld *out);

#endif
