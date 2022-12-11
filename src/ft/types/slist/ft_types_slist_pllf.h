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

#ifndef FT_TYPES_SLIST_PLLF_H
# define FT_TYPES_SLIST_PLLF_H

# include "ft_types_array_pllf.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_pllf_node
{
	struct s_ft_types_slist_pllf_node	*next;
	t_pllf								value;
}	t_ft_types_slist_pllf_node;

typedef struct s_ft_types_slist_pllf
{
	t_ft_types_slist_pllf_node	*head;
	t_ft_types_slist_pllf_node	*tail;
	size_t						length;
}	t_ft_types_slist_pllf;

void	ft_types_slist_pllf_init(
			t_ft_types_slist_pllf *list);
void	ft_types_slist_pllf_clear(
			t_ft_types_slist_pllf *list);
t_err	ft_types_slist_pllf_to_array(
			t_ft_types_slist_pllf *list,
			t_ft_types_array_pllf *out);
t_err	ft_types_slist_pllf_from_array(
			t_ft_types_array_pllf *array,
			t_ft_types_slist_pllf *out);
t_err	ft_types_slist_pllf_push(
			t_ft_types_slist_pllf *list,
			t_pllf value);
t_err	ft_types_slist_pllf_unshift(
			t_ft_types_slist_pllf *list,
			t_pllf value);
bool	ft_types_slist_pllf_shift(
			t_ft_types_slist_pllf *list,
			t_pllf *out);

#endif
