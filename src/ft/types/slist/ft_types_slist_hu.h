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

#ifndef FT_TYPES_SLIST_HU_H
# define FT_TYPES_SLIST_HU_H

# include "ft_types_array_hu.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_hu_node
{
	struct s_ft_types_slist_hu_node	*next;
	t_hu							value;
}	t_ft_types_slist_hu_node;

typedef struct s_ft_types_slist_hu
{
	t_ft_types_slist_hu_node	*head;
	t_ft_types_slist_hu_node	*tail;
	size_t						length;
}	t_ft_types_slist_hu;

void	ft_types_slist_hu_init(
			t_ft_types_slist_hu *list);
void	ft_types_slist_hu_clear(
			t_ft_types_slist_hu *list);
t_err	ft_types_slist_hu_to_array(
			t_ft_types_slist_hu *list,
			t_ft_types_array_hu *out);
t_err	ft_types_slist_hu_from_array(
			t_ft_types_array_hu *array,
			t_ft_types_slist_hu *out);
t_err	ft_types_slist_hu_push(
			t_ft_types_slist_hu *list,
			t_hu value);
t_err	ft_types_slist_hu_unshift(
			t_ft_types_slist_hu *list,
			t_hu value);
bool	ft_types_slist_hu_shift(
			t_ft_types_slist_hu *list,
			t_hu *out);

#endif
