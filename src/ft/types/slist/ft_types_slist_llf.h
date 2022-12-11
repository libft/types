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

#ifndef FT_TYPES_SLIST_LLF_H
# define FT_TYPES_SLIST_LLF_H

# include "ft_types_array_llf.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_llf_node
{
	struct s_ft_types_slist_llf_node	*next;
	t_llf								value;
}	t_ft_types_slist_llf_node;

typedef struct s_ft_types_slist_llf
{
	t_ft_types_slist_llf_node	*head;
	t_ft_types_slist_llf_node	*tail;
	size_t						length;
}	t_ft_types_slist_llf;

void	ft_types_slist_llf_init(
			t_ft_types_slist_llf *list);
void	ft_types_slist_llf_clear(
			t_ft_types_slist_llf *list);
t_err	ft_types_slist_llf_to_array(
			t_ft_types_slist_llf *list,
			t_ft_types_array_llf *out);
t_err	ft_types_slist_llf_from_array(
			t_ft_types_array_llf *array,
			t_ft_types_slist_llf *out);
t_err	ft_types_slist_llf_push(
			t_ft_types_slist_llf *list,
			t_llf value);
t_err	ft_types_slist_llf_unshift(
			t_ft_types_slist_llf *list,
			t_llf value);
bool	ft_types_slist_llf_shift(
			t_ft_types_slist_llf *list,
			t_llf *out);

#endif
