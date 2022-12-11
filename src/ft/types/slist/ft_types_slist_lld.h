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

#ifndef FT_TYPES_SLIST_LLD_H
# define FT_TYPES_SLIST_LLD_H

# include "ft_types_array_lld.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_lld_node
{
	struct s_ft_types_slist_lld_node	*next;
	t_lld								value;
}	t_ft_types_slist_lld_node;

typedef struct s_ft_types_slist_lld
{
	t_ft_types_slist_lld_node	*head;
	t_ft_types_slist_lld_node	*tail;
	size_t						length;
}	t_ft_types_slist_lld;

void	ft_types_slist_lld_init(
			t_ft_types_slist_lld *list);
void	ft_types_slist_lld_clear(
			t_ft_types_slist_lld *list);
t_err	ft_types_slist_lld_to_array(
			t_ft_types_slist_lld *list,
			t_ft_types_array_lld *out);
t_err	ft_types_slist_lld_from_array(
			t_ft_types_array_lld *array,
			t_ft_types_slist_lld *out);
t_err	ft_types_slist_lld_push(
			t_ft_types_slist_lld *list,
			t_lld value);
t_err	ft_types_slist_lld_unshift(
			t_ft_types_slist_lld *list,
			t_lld value);
bool	ft_types_slist_lld_shift(
			t_ft_types_slist_lld *list,
			t_lld *out);

#endif
