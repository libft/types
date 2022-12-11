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

#ifndef FT_TYPES_SLIST_PU32_H
# define FT_TYPES_SLIST_PU32_H

# include "ft_types_array_pu32.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_pu32_node
{
	struct s_ft_types_slist_pu32_node	*next;
	t_pu32								value;
}	t_ft_types_slist_pu32_node;

typedef struct s_ft_types_slist_pu32
{
	t_ft_types_slist_pu32_node	*head;
	t_ft_types_slist_pu32_node	*tail;
	size_t						length;
}	t_ft_types_slist_pu32;

void	ft_types_slist_pu32_init(
			t_ft_types_slist_pu32 *list);
void	ft_types_slist_pu32_clear(
			t_ft_types_slist_pu32 *list);
t_err	ft_types_slist_pu32_to_array(
			t_ft_types_slist_pu32 *list,
			t_ft_types_array_pu32 *out);
t_err	ft_types_slist_pu32_from_array(
			t_ft_types_array_pu32 *array,
			t_ft_types_slist_pu32 *out);
t_err	ft_types_slist_pu32_push(
			t_ft_types_slist_pu32 *list,
			t_pu32 value);
t_err	ft_types_slist_pu32_unshift(
			t_ft_types_slist_pu32 *list,
			t_pu32 value);
bool	ft_types_slist_pu32_shift(
			t_ft_types_slist_pu32 *list,
			t_pu32 *out);

#endif
