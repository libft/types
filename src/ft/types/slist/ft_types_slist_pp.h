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

#ifndef FT_TYPES_SLIST_PP_H
# define FT_TYPES_SLIST_PP_H

# include "ft_types_array_pp.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_pp_node
{
	struct s_ft_types_slist_pp_node	*next;
	t_pp							value;
}	t_ft_types_slist_pp_node;

typedef struct s_ft_types_slist_pp
{
	t_ft_types_slist_pp_node	*head;
	t_ft_types_slist_pp_node	*tail;
	size_t						length;
}	t_ft_types_slist_pp;

void	ft_types_slist_pp_init(
			t_ft_types_slist_pp *list);
void	ft_types_slist_pp_clear(
			t_ft_types_slist_pp *list);
t_err	ft_types_slist_pp_to_array(
			t_ft_types_slist_pp *list,
			t_ft_types_array_pp *out);
t_err	ft_types_slist_pp_from_array(
			t_ft_types_array_pp *array,
			t_ft_types_slist_pp *out);
t_err	ft_types_slist_pp_push(
			t_ft_types_slist_pp *list,
			t_pp value);
t_err	ft_types_slist_pp_unshift(
			t_ft_types_slist_pp *list,
			t_pp value);
bool	ft_types_slist_pp_shift(
			t_ft_types_slist_pp *list,
			t_pp *out);

#endif
