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

#ifndef FT_TYPES_SLIST_LD_H
# define FT_TYPES_SLIST_LD_H

# include "ft_types_array_ld.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_ld_node
{
	struct s_ft_types_slist_ld_node	*next;
	t_ld							value;
}	t_ft_types_slist_ld_node;

typedef struct s_ft_types_slist_ld
{
	t_ft_types_slist_ld_node	*head;
	t_ft_types_slist_ld_node	*tail;
	size_t						length;
}	t_ft_types_slist_ld;

void	ft_types_slist_ld_init(
			t_ft_types_slist_ld *list);
void	ft_types_slist_ld_clear(
			t_ft_types_slist_ld *list);
t_err	ft_types_slist_ld_to_array(
			t_ft_types_slist_ld *list,
			t_ft_types_array_ld *out);
t_err	ft_types_slist_ld_from_array(
			t_ft_types_array_ld *array,
			t_ft_types_slist_ld *out);
t_err	ft_types_slist_ld_push(
			t_ft_types_slist_ld *list,
			t_ld value);
t_err	ft_types_slist_ld_unshift(
			t_ft_types_slist_ld *list,
			t_ld value);
bool	ft_types_slist_ld_shift(
			t_ft_types_slist_ld *list,
			t_ld *out);

#endif
