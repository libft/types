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

#ifndef FT_TYPES_SLIST_PHHD_H
# define FT_TYPES_SLIST_PHHD_H

# include "ft_types_array_phhd.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_phhd_node
{
	struct s_ft_types_slist_phhd_node	*next;
	t_phhd								value;
}	t_ft_types_slist_phhd_node;

typedef struct s_ft_types_slist_phhd
{
	t_ft_types_slist_phhd_node	*head;
	t_ft_types_slist_phhd_node	*tail;
	size_t						length;
}	t_ft_types_slist_phhd;

void	ft_types_slist_phhd_init(
			t_ft_types_slist_phhd *list);
void	ft_types_slist_phhd_clear(
			t_ft_types_slist_phhd *list);
t_err	ft_types_slist_phhd_to_array(
			t_ft_types_slist_phhd *list,
			t_ft_types_array_phhd *out);
t_err	ft_types_slist_phhd_from_array(
			t_ft_types_array_phhd *array,
			t_ft_types_slist_phhd *out);
t_err	ft_types_slist_phhd_push(
			t_ft_types_slist_phhd *list,
			t_phhd value);
t_err	ft_types_slist_phhd_unshift(
			t_ft_types_slist_phhd *list,
			t_phhd value);
bool	ft_types_slist_phhd_shift(
			t_ft_types_slist_phhd *list,
			t_phhd *out);

#endif
