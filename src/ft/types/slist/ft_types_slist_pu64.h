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

#ifndef FT_TYPES_SLIST_PU64_H
# define FT_TYPES_SLIST_PU64_H

# include "ft_types_array_pu64.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_pu64_node
{
	struct s_ft_types_slist_pu64_node	*next;
	t_pu64								value;
}	t_ft_types_slist_pu64_node;

typedef struct s_ft_types_slist_pu64
{
	t_ft_types_slist_pu64_node	*head;
	t_ft_types_slist_pu64_node	*tail;
	size_t						length;
}	t_ft_types_slist_pu64;

void	ft_types_slist_pu64_init(
			t_ft_types_slist_pu64 *list);
void	ft_types_slist_pu64_clear(
			t_ft_types_slist_pu64 *list);
t_err	ft_types_slist_pu64_to_array(
			t_ft_types_slist_pu64 *list,
			t_ft_types_array_pu64 *out);
t_err	ft_types_slist_pu64_from_array(
			t_ft_types_array_pu64 *array,
			t_ft_types_slist_pu64 *out);
t_err	ft_types_slist_pu64_push(
			t_ft_types_slist_pu64 *list,
			t_pu64 value);
t_err	ft_types_slist_pu64_unshift(
			t_ft_types_slist_pu64 *list,
			t_pu64 value);
bool	ft_types_slist_pu64_shift(
			t_ft_types_slist_pu64 *list,
			t_pu64 *out);

#endif
