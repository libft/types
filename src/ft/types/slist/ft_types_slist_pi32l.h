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

#ifndef FT_TYPES_SLIST_PI32L_H
# define FT_TYPES_SLIST_PI32L_H

# include "ft_types_array_pi32l.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_pi32l_node
{
	struct s_ft_types_slist_pi32l_node	*next;
	t_pi32l								value;
}	t_ft_types_slist_pi32l_node;

typedef struct s_ft_types_slist_pi32l
{
	t_ft_types_slist_pi32l_node	*head;
	t_ft_types_slist_pi32l_node	*tail;
	size_t						length;
}	t_ft_types_slist_pi32l;

void	ft_types_slist_pi32l_init(
			t_ft_types_slist_pi32l *list);
void	ft_types_slist_pi32l_clear(
			t_ft_types_slist_pi32l *list);
t_err	ft_types_slist_pi32l_to_array(
			t_ft_types_slist_pi32l *list,
			t_ft_types_array_pi32l *out);
t_err	ft_types_slist_pi32l_from_array(
			t_ft_types_array_pi32l *array,
			t_ft_types_slist_pi32l *out);
t_err	ft_types_slist_pi32l_push(
			t_ft_types_slist_pi32l *list,
			t_pi32l value);
t_err	ft_types_slist_pi32l_unshift(
			t_ft_types_slist_pi32l *list,
			t_pi32l value);
bool	ft_types_slist_pi32l_shift(
			t_ft_types_slist_pi32l *list,
			t_pi32l *out);

#endif
