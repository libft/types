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

#ifndef FT_TYPES_SLIST_HHU_H
# define FT_TYPES_SLIST_HHU_H

# include "ft_types_array_hhu.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_hhu_node
{
	struct s_ft_types_slist_hhu_node	*next;
	t_hhu								value;
}	t_ft_types_slist_hhu_node;

typedef struct s_ft_types_slist_hhu
{
	t_ft_types_slist_hhu_node	*head;
	t_ft_types_slist_hhu_node	*tail;
	size_t						length;
}	t_ft_types_slist_hhu;

void	ft_types_slist_hhu_init(
			t_ft_types_slist_hhu *list);
void	ft_types_slist_hhu_clear(
			t_ft_types_slist_hhu *list);
t_err	ft_types_slist_hhu_to_array(
			t_ft_types_slist_hhu *list,
			t_ft_types_array_hhu *out);
t_err	ft_types_slist_hhu_from_array(
			t_ft_types_array_hhu *array,
			t_ft_types_slist_hhu *out);
t_err	ft_types_slist_hhu_push(
			t_ft_types_slist_hhu *list,
			t_hhu value);
t_err	ft_types_slist_hhu_unshift(
			t_ft_types_slist_hhu *list,
			t_hhu value);
bool	ft_types_slist_hhu_shift(
			t_ft_types_slist_hhu *list,
			t_hhu *out);

#endif
