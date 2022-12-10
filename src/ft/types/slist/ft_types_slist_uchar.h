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

#ifndef FT_TYPES_SLIST_UCHAR_H
# define FT_TYPES_SLIST_UCHAR_H

# include <stddef.h>
# include "ft_types_array_uchar.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_uchar_node
{
	struct s_ft_types_slist_uchar_node	*next;
	unsigned char						value;
}	t_ft_types_slist_uchar_node;

typedef struct s_ft_types_slist_uchar
{
	t_ft_types_slist_uchar_node	*head;
	t_ft_types_slist_uchar_node	*tail;
	size_t						length;
}	t_ft_types_slist_uchar;

void	ft_types_slist_uchar_init(
			t_ft_types_slist_uchar *list);
void	ft_types_slist_uchar_clear(
			t_ft_types_slist_uchar *list);
t_err	ft_types_slist_uchar_to_array(
			t_ft_types_slist_uchar *list,
			t_ft_types_array_uchar *out);
t_err	ft_types_slist_uchar_from_array(
			t_ft_types_array_uchar *array,
			t_ft_types_slist_uchar *out);
t_err	ft_types_slist_uchar_push(
			t_ft_types_slist_uchar *list,
			unsigned char value);
t_err	ft_types_slist_uchar_unshift(
			t_ft_types_slist_uchar *list,
			unsigned char value);

#endif
