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

#ifndef FT_TYPES_SLIST_FUNC_I8F_I8F_P_H
# define FT_TYPES_SLIST_FUNC_I8F_I8F_P_H

# include "ft_types_array_func_i8f_i8f_p.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_func_i8f_i8f_p_node
{
	struct s_ft_types_slist_func_i8f_i8f_p_node	*next;
	t_func_i8f_i8f_p							value;
}	t_ft_types_slist_func_i8f_i8f_p_node;

typedef struct s_ft_types_slist_func_i8f_i8f_p
{
	t_ft_types_slist_func_i8f_i8f_p_node	*head;
	t_ft_types_slist_func_i8f_i8f_p_node	*tail;
	size_t									length;
}	t_ft_types_slist_func_i8f_i8f_p;

void	ft_types_slist_func_i8f_i8f_p_init(
			t_ft_types_slist_func_i8f_i8f_p *list);
void	ft_types_slist_func_i8f_i8f_p_clear(
			t_ft_types_slist_func_i8f_i8f_p *list);
t_err	ft_types_slist_func_i8f_i8f_p_to_array(
			t_ft_types_slist_func_i8f_i8f_p *list,
			t_ft_types_array_func_i8f_i8f_p *out);
t_err	ft_types_slist_func_i8f_i8f_p_from_array(
			t_ft_types_array_func_i8f_i8f_p *array,
			t_ft_types_slist_func_i8f_i8f_p *out);
t_err	ft_types_slist_func_i8f_i8f_p_push(
			t_ft_types_slist_func_i8f_i8f_p *list,
			t_func_i8f_i8f_p value);
t_err	ft_types_slist_func_i8f_i8f_p_unshift(
			t_ft_types_slist_func_i8f_i8f_p *list,
			t_func_i8f_i8f_p value);
bool	ft_types_slist_func_i8f_i8f_p_shift(
			t_ft_types_slist_func_i8f_i8f_p *list,
			t_func_i8f_i8f_p *out);

#endif
