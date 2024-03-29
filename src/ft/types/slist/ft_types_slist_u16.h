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

#ifndef FT_TYPES_SLIST_U16_H
# define FT_TYPES_SLIST_U16_H

# include "ft_types_array_u16.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_u16_node
{
	struct s_ft_types_slist_u16_node	*next;
	t_u16								value;
}	t_ft_types_slist_u16_node;

typedef struct s_ft_types_slist_u16
{
	t_ft_types_slist_u16_node	*head;
	t_ft_types_slist_u16_node	*tail;
	size_t						length;
}	t_ft_types_slist_u16;

void	ft_types_slist_u16_init(
			t_ft_types_slist_u16 *list);
void	ft_types_slist_u16_clear(
			t_ft_types_slist_u16 *list);
t_err	ft_types_slist_u16_to_array(
			t_ft_types_slist_u16 *list,
			t_ft_types_array_u16 *out);
t_err	ft_types_slist_u16_from_array(
			t_ft_types_array_u16 *array,
			t_ft_types_slist_u16 *out);
t_err	ft_types_slist_u16_push(
			t_ft_types_slist_u16 *list,
			t_u16 value);
t_err	ft_types_slist_u16_unshift(
			t_ft_types_slist_u16 *list,
			t_u16 value);
bool	ft_types_slist_u16_shift(
			t_ft_types_slist_u16 *list,
			t_u16 *out);

#endif
