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

#ifndef FT_TYPES_SLIST_U8LEAST_H
# define FT_TYPES_SLIST_U8LEAST_H

# include "ft_types_array_u8least.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_u8least_node
{
	struct s_ft_types_slist_u8least_node	*next;
	t_u8least								value;
}	t_ft_types_slist_u8least_node;

typedef struct s_ft_types_slist_u8least
{
	t_ft_types_slist_u8least_node	*head;
	t_ft_types_slist_u8least_node	*tail;
	size_t							length;
}	t_ft_types_slist_u8least;

void	ft_types_slist_u8least_init(
			t_ft_types_slist_u8least *list);
void	ft_types_slist_u8least_clear(
			t_ft_types_slist_u8least *list);
t_err	ft_types_slist_u8least_to_array(
			t_ft_types_slist_u8least *list,
			t_ft_types_array_u8least *out);
t_err	ft_types_slist_u8least_from_array(
			t_ft_types_array_u8least *array,
			t_ft_types_slist_u8least *out);
t_err	ft_types_slist_u8least_push(
			t_ft_types_slist_u8least *list,
			t_u8least value);
t_err	ft_types_slist_u8least_unshift(
			t_ft_types_slist_u8least *list,
			t_u8least value);
bool	ft_types_slist_u8least_shift(
			t_ft_types_slist_u8least *list,
			t_u8least *out);

#endif
