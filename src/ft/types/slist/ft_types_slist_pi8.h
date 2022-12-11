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

#ifndef FT_TYPES_SLIST_PI8_H
# define FT_TYPES_SLIST_PI8_H

# include "ft_types_array_pi8.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_pi8_node
{
	struct s_ft_types_slist_pi8_node	*next;
	t_pi8								value;
}	t_ft_types_slist_pi8_node;

typedef struct s_ft_types_slist_pi8
{
	t_ft_types_slist_pi8_node	*head;
	t_ft_types_slist_pi8_node	*tail;
	size_t						length;
}	t_ft_types_slist_pi8;

void	ft_types_slist_pi8_init(
			t_ft_types_slist_pi8 *list);
void	ft_types_slist_pi8_clear(
			t_ft_types_slist_pi8 *list);
t_err	ft_types_slist_pi8_to_array(
			t_ft_types_slist_pi8 *list,
			t_ft_types_array_pi8 *out);
t_err	ft_types_slist_pi8_from_array(
			t_ft_types_array_pi8 *array,
			t_ft_types_slist_pi8 *out);
t_err	ft_types_slist_pi8_push(
			t_ft_types_slist_pi8 *list,
			t_pi8 value);
t_err	ft_types_slist_pi8_unshift(
			t_ft_types_slist_pi8 *list,
			t_pi8 value);
bool	ft_types_slist_pi8_shift(
			t_ft_types_slist_pi8 *list,
			t_pi8 *out);

#endif
