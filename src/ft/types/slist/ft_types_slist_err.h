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

#ifndef FT_TYPES_SLIST_ERR_H
# define FT_TYPES_SLIST_ERR_H

# include "ft_types_array_err.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_err_node
{
	struct s_ft_types_slist_err_node	*next;
	t_err								value;
}	t_ft_types_slist_err_node;

typedef struct s_ft_types_slist_err
{
	t_ft_types_slist_err_node	*head;
	t_ft_types_slist_err_node	*tail;
	size_t						length;
}	t_ft_types_slist_err;

void	ft_types_slist_err_init(
			t_ft_types_slist_err *list);
void	ft_types_slist_err_clear(
			t_ft_types_slist_err *list);
t_err	ft_types_slist_err_to_array(
			t_ft_types_slist_err *list,
			t_ft_types_array_err *out);
t_err	ft_types_slist_err_from_array(
			t_ft_types_array_err *array,
			t_ft_types_slist_err *out);
t_err	ft_types_slist_err_push(
			t_ft_types_slist_err *list,
			t_err value);
t_err	ft_types_slist_err_unshift(
			t_ft_types_slist_err *list,
			t_err value);
bool	ft_types_slist_err_shift(
			t_ft_types_slist_err *list,
			t_err *out);

#endif
