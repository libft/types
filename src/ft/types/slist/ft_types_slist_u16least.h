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

#ifndef FT_TYPES_SLIST_U16LEAST_H
# define FT_TYPES_SLIST_U16LEAST_H

# include <stddef.h>
# include <stdint.h>
# include "ft_types_array_u16least.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_u16least_node
{
	struct s_ft_types_slist_u16least_node	*next;
	uint_least16_t							value;
}	t_ft_types_slist_u16least_node;

typedef struct s_ft_types_slist_u16least
{
	t_ft_types_slist_u16least_node	*head;
	t_ft_types_slist_u16least_node	*tail;
	size_t							length;
}	t_ft_types_slist_u16least;

void	ft_types_slist_u16least_init(
			t_ft_types_slist_u16least *list);
void	ft_types_slist_u16least_clear(
			t_ft_types_slist_u16least *list);
t_err	ft_types_slist_u16least_to_array(
			t_ft_types_slist_u16least *list,
			t_ft_types_array_u16least *out);
t_err	ft_types_slist_u16least_from_array(
			t_ft_types_array_u16least *array,
			t_ft_types_slist_u16least *out);
t_err	ft_types_slist_u16least_push(
			t_ft_types_slist_u16least *list,
			uint_least16_t value);

#endif
