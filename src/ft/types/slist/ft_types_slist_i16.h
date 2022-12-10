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

#ifndef FT_TYPES_SLIST_I16_H
# define FT_TYPES_SLIST_I16_H

# include <stddef.h>
# include <stdint.h>
# include "ft_types_array_i16.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_i16_node
{
	struct s_ft_types_slist_i16_node	*next;
	int16_t								value;
}	t_ft_types_slist_i16_node;

typedef struct s_ft_types_slist_i16
{
	t_ft_types_slist_i16_node	*head;
	t_ft_types_slist_i16_node	*tail;
	size_t						length;
}	t_ft_types_slist_i16;

void	ft_types_slist_i16_init(
			t_ft_types_slist_i16 *list);
void	ft_types_slist_i16_clear(
			t_ft_types_slist_i16 *list);
t_err	ft_types_slist_i16_to_array(
			t_ft_types_slist_i16 *list,
			t_ft_types_array_i16 *out);
t_err	ft_types_slist_i16_push(
			t_ft_types_slist_i16 *list,
			int16_t value);

#endif
