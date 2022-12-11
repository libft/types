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

#ifndef FT_TYPES_SLIST_JD_H
# define FT_TYPES_SLIST_JD_H

# include "ft_types_array_jd.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_jd_node
{
	struct s_ft_types_slist_jd_node	*next;
	t_jd							value;
}	t_ft_types_slist_jd_node;

typedef struct s_ft_types_slist_jd
{
	t_ft_types_slist_jd_node	*head;
	t_ft_types_slist_jd_node	*tail;
	size_t						length;
}	t_ft_types_slist_jd;

void	ft_types_slist_jd_init(
			t_ft_types_slist_jd *list);
void	ft_types_slist_jd_clear(
			t_ft_types_slist_jd *list);
t_err	ft_types_slist_jd_to_array(
			t_ft_types_slist_jd *list,
			t_ft_types_array_jd *out);
t_err	ft_types_slist_jd_from_array(
			t_ft_types_array_jd *array,
			t_ft_types_slist_jd *out);
t_err	ft_types_slist_jd_push(
			t_ft_types_slist_jd *list,
			t_jd value);
t_err	ft_types_slist_jd_unshift(
			t_ft_types_slist_jd *list,
			t_jd value);
bool	ft_types_slist_jd_shift(
			t_ft_types_slist_jd *list,
			t_jd *out);

#endif
