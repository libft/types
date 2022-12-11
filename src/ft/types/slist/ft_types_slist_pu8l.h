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

#ifndef FT_TYPES_SLIST_PU8L_H
# define FT_TYPES_SLIST_PU8L_H

# include "ft_types_array_pu8l.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_pu8l_node
{
	struct s_ft_types_slist_pu8l_node	*next;
	t_pu8l								value;
}	t_ft_types_slist_pu8l_node;

typedef struct s_ft_types_slist_pu8l
{
	t_ft_types_slist_pu8l_node	*head;
	t_ft_types_slist_pu8l_node	*tail;
	size_t						length;
}	t_ft_types_slist_pu8l;

void	ft_types_slist_pu8l_init(
			t_ft_types_slist_pu8l *list);
void	ft_types_slist_pu8l_clear(
			t_ft_types_slist_pu8l *list);
t_err	ft_types_slist_pu8l_to_array(
			t_ft_types_slist_pu8l *list,
			t_ft_types_array_pu8l *out);
t_err	ft_types_slist_pu8l_from_array(
			t_ft_types_array_pu8l *array,
			t_ft_types_slist_pu8l *out);
t_err	ft_types_slist_pu8l_push(
			t_ft_types_slist_pu8l *list,
			t_pu8l value);
t_err	ft_types_slist_pu8l_unshift(
			t_ft_types_slist_pu8l *list,
			t_pu8l value);
bool	ft_types_slist_pu8l_shift(
			t_ft_types_slist_pu8l *list,
			t_pu8l *out);

#endif
