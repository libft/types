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

#ifndef FT_TYPES_SLIST_HHD_H
# define FT_TYPES_SLIST_HHD_H

# include "ft_types_array_hhd.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_hhd_node
{
	struct s_ft_types_slist_hhd_node	*next;
	t_hhd								value;
}	t_ft_types_slist_hhd_node;

typedef struct s_ft_types_slist_hhd
{
	t_ft_types_slist_hhd_node	*head;
	t_ft_types_slist_hhd_node	*tail;
	size_t						length;
}	t_ft_types_slist_hhd;

void	ft_types_slist_hhd_init(
			t_ft_types_slist_hhd *list);
void	ft_types_slist_hhd_clear(
			t_ft_types_slist_hhd *list);
t_err	ft_types_slist_hhd_to_array(
			t_ft_types_slist_hhd *list,
			t_ft_types_array_hhd *out);
t_err	ft_types_slist_hhd_from_array(
			t_ft_types_array_hhd *array,
			t_ft_types_slist_hhd *out);
t_err	ft_types_slist_hhd_push(
			t_ft_types_slist_hhd *list,
			t_hhd value);
t_err	ft_types_slist_hhd_unshift(
			t_ft_types_slist_hhd *list,
			t_hhd value);
bool	ft_types_slist_hhd_shift(
			t_ft_types_slist_hhd *list,
			t_hhd *out);

#endif
