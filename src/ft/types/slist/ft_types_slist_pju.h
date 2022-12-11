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

#ifndef FT_TYPES_SLIST_PJU_H
# define FT_TYPES_SLIST_PJU_H

# include "ft_types_array_pju.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_pju_node
{
	struct s_ft_types_slist_pju_node	*next;
	t_pju								value;
}	t_ft_types_slist_pju_node;

typedef struct s_ft_types_slist_pju
{
	t_ft_types_slist_pju_node	*head;
	t_ft_types_slist_pju_node	*tail;
	size_t						length;
}	t_ft_types_slist_pju;

void	ft_types_slist_pju_init(
			t_ft_types_slist_pju *list);
void	ft_types_slist_pju_clear(
			t_ft_types_slist_pju *list);
t_err	ft_types_slist_pju_to_array(
			t_ft_types_slist_pju *list,
			t_ft_types_array_pju *out);
t_err	ft_types_slist_pju_from_array(
			t_ft_types_array_pju *array,
			t_ft_types_slist_pju *out);
t_err	ft_types_slist_pju_push(
			t_ft_types_slist_pju *list,
			t_pju value);
t_err	ft_types_slist_pju_unshift(
			t_ft_types_slist_pju *list,
			t_pju value);
bool	ft_types_slist_pju_shift(
			t_ft_types_slist_pju *list,
			t_pju *out);

#endif
