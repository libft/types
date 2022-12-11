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

#ifndef FT_TYPES_SLIST_U_H
# define FT_TYPES_SLIST_U_H

# include "ft_types_array_u.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_u_node
{
	struct s_ft_types_slist_u_node	*next;
	t_u								value;
}	t_ft_types_slist_u_node;

typedef struct s_ft_types_slist_u
{
	t_ft_types_slist_u_node	*head;
	t_ft_types_slist_u_node	*tail;
	size_t					length;
}	t_ft_types_slist_u;

void	ft_types_slist_u_init(
			t_ft_types_slist_u *list);
void	ft_types_slist_u_clear(
			t_ft_types_slist_u *list);
t_err	ft_types_slist_u_to_array(
			t_ft_types_slist_u *list,
			t_ft_types_array_u *out);
t_err	ft_types_slist_u_from_array(
			t_ft_types_array_u *array,
			t_ft_types_slist_u *out);
t_err	ft_types_slist_u_push(
			t_ft_types_slist_u *list,
			t_u value);
t_err	ft_types_slist_u_unshift(
			t_ft_types_slist_u *list,
			t_u value);
bool	ft_types_slist_u_shift(
			t_ft_types_slist_u *list,
			t_u *out);

#endif
