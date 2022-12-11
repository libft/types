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

#ifndef FT_TYPES_SLIST_PHU_H
# define FT_TYPES_SLIST_PHU_H

# include "ft_types_array_phu.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_phu_node
{
	struct s_ft_types_slist_phu_node	*next;
	t_phu								value;
}	t_ft_types_slist_phu_node;

typedef struct s_ft_types_slist_phu
{
	t_ft_types_slist_phu_node	*head;
	t_ft_types_slist_phu_node	*tail;
	size_t						length;
}	t_ft_types_slist_phu;

void	ft_types_slist_phu_init(
			t_ft_types_slist_phu *list);
void	ft_types_slist_phu_clear(
			t_ft_types_slist_phu *list);
t_err	ft_types_slist_phu_to_array(
			t_ft_types_slist_phu *list,
			t_ft_types_array_phu *out);
t_err	ft_types_slist_phu_from_array(
			t_ft_types_array_phu *array,
			t_ft_types_slist_phu *out);
t_err	ft_types_slist_phu_push(
			t_ft_types_slist_phu *list,
			t_phu value);
t_err	ft_types_slist_phu_unshift(
			t_ft_types_slist_phu *list,
			t_phu value);
bool	ft_types_slist_phu_shift(
			t_ft_types_slist_phu *list,
			t_phu *out);

#endif
