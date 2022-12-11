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

#ifndef FT_TYPES_SLIST_PD_H
# define FT_TYPES_SLIST_PD_H

# include "ft_types_array_pd.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_pd_node
{
	struct s_ft_types_slist_pd_node	*next;
	t_pd							value;
}	t_ft_types_slist_pd_node;

typedef struct s_ft_types_slist_pd
{
	t_ft_types_slist_pd_node	*head;
	t_ft_types_slist_pd_node	*tail;
	size_t						length;
}	t_ft_types_slist_pd;

void	ft_types_slist_pd_init(
			t_ft_types_slist_pd *list);
void	ft_types_slist_pd_clear(
			t_ft_types_slist_pd *list);
t_err	ft_types_slist_pd_to_array(
			t_ft_types_slist_pd *list,
			t_ft_types_array_pd *out);
t_err	ft_types_slist_pd_from_array(
			t_ft_types_array_pd *array,
			t_ft_types_slist_pd *out);
t_err	ft_types_slist_pd_push(
			t_ft_types_slist_pd *list,
			t_pd value);
t_err	ft_types_slist_pd_unshift(
			t_ft_types_slist_pd *list,
			t_pd value);
bool	ft_types_slist_pd_shift(
			t_ft_types_slist_pd *list,
			t_pd *out);

#endif
