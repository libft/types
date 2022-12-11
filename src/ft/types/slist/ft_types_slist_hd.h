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

#ifndef FT_TYPES_SLIST_HD_H
# define FT_TYPES_SLIST_HD_H

# include "ft_types_array_hd.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_hd_node
{
	struct s_ft_types_slist_hd_node	*next;
	t_hd							value;
}	t_ft_types_slist_hd_node;

typedef struct s_ft_types_slist_hd
{
	t_ft_types_slist_hd_node	*head;
	t_ft_types_slist_hd_node	*tail;
	size_t						length;
}	t_ft_types_slist_hd;

void	ft_types_slist_hd_init(
			t_ft_types_slist_hd *list);
void	ft_types_slist_hd_clear(
			t_ft_types_slist_hd *list);
t_err	ft_types_slist_hd_to_array(
			t_ft_types_slist_hd *list,
			t_ft_types_array_hd *out);
t_err	ft_types_slist_hd_from_array(
			t_ft_types_array_hd *array,
			t_ft_types_slist_hd *out);
t_err	ft_types_slist_hd_push(
			t_ft_types_slist_hd *list,
			t_hd value);
t_err	ft_types_slist_hd_unshift(
			t_ft_types_slist_hd *list,
			t_hd value);
bool	ft_types_slist_hd_shift(
			t_ft_types_slist_hd *list,
			t_hd *out);

#endif
