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

#ifndef FT_TYPES_SLIST_PJD_H
# define FT_TYPES_SLIST_PJD_H

# include "ft_types_array_pjd.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_pjd_node
{
	struct s_ft_types_slist_pjd_node	*next;
	t_pjd								value;
}	t_ft_types_slist_pjd_node;

typedef struct s_ft_types_slist_pjd
{
	t_ft_types_slist_pjd_node	*head;
	t_ft_types_slist_pjd_node	*tail;
	size_t						length;
}	t_ft_types_slist_pjd;

void	ft_types_slist_pjd_init(
			t_ft_types_slist_pjd *list);
void	ft_types_slist_pjd_clear(
			t_ft_types_slist_pjd *list);
t_err	ft_types_slist_pjd_to_array(
			t_ft_types_slist_pjd *list,
			t_ft_types_array_pjd *out);
t_err	ft_types_slist_pjd_from_array(
			t_ft_types_array_pjd *array,
			t_ft_types_slist_pjd *out);
t_err	ft_types_slist_pjd_push(
			t_ft_types_slist_pjd *list,
			t_pjd value);
t_err	ft_types_slist_pjd_unshift(
			t_ft_types_slist_pjd *list,
			t_pjd value);
bool	ft_types_slist_pjd_shift(
			t_ft_types_slist_pjd *list,
			t_pjd *out);

#endif
