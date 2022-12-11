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

#ifndef FT_TYPES_SLIST_PBYTE_H
# define FT_TYPES_SLIST_PBYTE_H

# include "ft_types_array_pbyte.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_pbyte_node
{
	struct s_ft_types_slist_pbyte_node	*next;
	t_pbyte								value;
}	t_ft_types_slist_pbyte_node;

typedef struct s_ft_types_slist_pbyte
{
	t_ft_types_slist_pbyte_node	*head;
	t_ft_types_slist_pbyte_node	*tail;
	size_t						length;
}	t_ft_types_slist_pbyte;

void	ft_types_slist_pbyte_init(
			t_ft_types_slist_pbyte *list);
void	ft_types_slist_pbyte_clear(
			t_ft_types_slist_pbyte *list);
t_err	ft_types_slist_pbyte_to_array(
			t_ft_types_slist_pbyte *list,
			t_ft_types_array_pbyte *out);
t_err	ft_types_slist_pbyte_from_array(
			t_ft_types_array_pbyte *array,
			t_ft_types_slist_pbyte *out);
t_err	ft_types_slist_pbyte_push(
			t_ft_types_slist_pbyte *list,
			t_pbyte value);
t_err	ft_types_slist_pbyte_unshift(
			t_ft_types_slist_pbyte *list,
			t_pbyte value);
bool	ft_types_slist_pbyte_shift(
			t_ft_types_slist_pbyte *list,
			t_pbyte *out);

#endif
