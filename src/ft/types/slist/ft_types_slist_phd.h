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

#ifndef FT_TYPES_SLIST_PHD_H
# define FT_TYPES_SLIST_PHD_H

# include "ft_types_array_phd.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_phd_node
{
	struct s_ft_types_slist_phd_node	*next;
	t_phd								value;
}	t_ft_types_slist_phd_node;

typedef struct s_ft_types_slist_phd
{
	t_ft_types_slist_phd_node	*head;
	t_ft_types_slist_phd_node	*tail;
	size_t						length;
}	t_ft_types_slist_phd;

void	ft_types_slist_phd_init(
			t_ft_types_slist_phd *list);
void	ft_types_slist_phd_clear(
			t_ft_types_slist_phd *list);
t_err	ft_types_slist_phd_to_array(
			t_ft_types_slist_phd *list,
			t_ft_types_array_phd *out);
t_err	ft_types_slist_phd_from_array(
			t_ft_types_array_phd *array,
			t_ft_types_slist_phd *out);
t_err	ft_types_slist_phd_push(
			t_ft_types_slist_phd *list,
			t_phd value);
t_err	ft_types_slist_phd_unshift(
			t_ft_types_slist_phd *list,
			t_phd value);
bool	ft_types_slist_phd_shift(
			t_ft_types_slist_phd *list,
			t_phd *out);

#endif
