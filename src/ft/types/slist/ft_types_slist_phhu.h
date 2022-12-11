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

#ifndef FT_TYPES_SLIST_PHHU_H
# define FT_TYPES_SLIST_PHHU_H

# include "ft_types_array_phhu.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_phhu_node
{
	struct s_ft_types_slist_phhu_node	*next;
	t_phhu								value;
}	t_ft_types_slist_phhu_node;

typedef struct s_ft_types_slist_phhu
{
	t_ft_types_slist_phhu_node	*head;
	t_ft_types_slist_phhu_node	*tail;
	size_t						length;
}	t_ft_types_slist_phhu;

void	ft_types_slist_phhu_init(
			t_ft_types_slist_phhu *list);
void	ft_types_slist_phhu_clear(
			t_ft_types_slist_phhu *list);
t_err	ft_types_slist_phhu_to_array(
			t_ft_types_slist_phhu *list,
			t_ft_types_array_phhu *out);
t_err	ft_types_slist_phhu_from_array(
			t_ft_types_array_phhu *array,
			t_ft_types_slist_phhu *out);
t_err	ft_types_slist_phhu_push(
			t_ft_types_slist_phhu *list,
			t_phhu value);
t_err	ft_types_slist_phhu_unshift(
			t_ft_types_slist_phhu *list,
			t_phhu value);
bool	ft_types_slist_phhu_shift(
			t_ft_types_slist_phhu *list,
			t_phhu *out);

#endif
