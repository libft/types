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

#ifndef FT_TYPES_SLIST_BYTE_H
# define FT_TYPES_SLIST_BYTE_H

# include "ft_types_array_byte.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_byte_node
{
	struct s_ft_types_slist_byte_node	*next;
	t_byte								value;
}	t_ft_types_slist_byte_node;

typedef struct s_ft_types_slist_byte
{
	t_ft_types_slist_byte_node	*head;
	t_ft_types_slist_byte_node	*tail;
	size_t						length;
}	t_ft_types_slist_byte;

void	ft_types_slist_byte_init(
			t_ft_types_slist_byte *list);
void	ft_types_slist_byte_clear(
			t_ft_types_slist_byte *list);
t_err	ft_types_slist_byte_to_array(
			t_ft_types_slist_byte *list,
			t_ft_types_array_byte *out);
t_err	ft_types_slist_byte_from_array(
			t_ft_types_array_byte *array,
			t_ft_types_slist_byte *out);
t_err	ft_types_slist_byte_push(
			t_ft_types_slist_byte *list,
			t_byte value);
t_err	ft_types_slist_byte_unshift(
			t_ft_types_slist_byte *list,
			t_byte value);
bool	ft_types_slist_byte_shift(
			t_ft_types_slist_byte *list,
			t_byte *out);

#endif
