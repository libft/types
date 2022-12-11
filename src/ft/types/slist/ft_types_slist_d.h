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

#ifndef FT_TYPES_SLIST_D_H
# define FT_TYPES_SLIST_D_H

# include "ft_types_array_d.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_d_node
{
	struct s_ft_types_slist_d_node	*next;
	t_d								value;
}	t_ft_types_slist_d_node;

typedef struct s_ft_types_slist_d
{
	t_ft_types_slist_d_node	*head;
	t_ft_types_slist_d_node	*tail;
	size_t					length;
}	t_ft_types_slist_d;

void	ft_types_slist_d_init(
			t_ft_types_slist_d *list);
void	ft_types_slist_d_clear(
			t_ft_types_slist_d *list);
t_err	ft_types_slist_d_to_array(
			t_ft_types_slist_d *list,
			t_ft_types_array_d *out);
t_err	ft_types_slist_d_from_array(
			t_ft_types_array_d *array,
			t_ft_types_slist_d *out);
t_err	ft_types_slist_d_push(
			t_ft_types_slist_d *list,
			t_d value);
t_err	ft_types_slist_d_unshift(
			t_ft_types_slist_d *list,
			t_d value);
bool	ft_types_slist_d_shift(
			t_ft_types_slist_d *list,
			t_d *out);

#endif
