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

#ifndef FT_TYPES_SLIST_PI32F_H
# define FT_TYPES_SLIST_PI32F_H

# include "ft_types_array_pi32f.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_pi32f_node
{
	struct s_ft_types_slist_pi32f_node	*next;
	t_pi32f								value;
}	t_ft_types_slist_pi32f_node;

typedef struct s_ft_types_slist_pi32f
{
	t_ft_types_slist_pi32f_node	*head;
	t_ft_types_slist_pi32f_node	*tail;
	size_t						length;
}	t_ft_types_slist_pi32f;

void	ft_types_slist_pi32f_init(
			t_ft_types_slist_pi32f *list);
void	ft_types_slist_pi32f_clear(
			t_ft_types_slist_pi32f *list);
t_err	ft_types_slist_pi32f_to_array(
			t_ft_types_slist_pi32f *list,
			t_ft_types_array_pi32f *out);
t_err	ft_types_slist_pi32f_from_array(
			t_ft_types_array_pi32f *array,
			t_ft_types_slist_pi32f *out);
t_err	ft_types_slist_pi32f_push(
			t_ft_types_slist_pi32f *list,
			t_pi32f value);
t_err	ft_types_slist_pi32f_unshift(
			t_ft_types_slist_pi32f *list,
			t_pi32f value);
bool	ft_types_slist_pi32f_shift(
			t_ft_types_slist_pi32f *list,
			t_pi32f *out);

#endif
