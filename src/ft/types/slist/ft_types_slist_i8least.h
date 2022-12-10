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

#ifndef FT_TYPES_SLIST_I8LEAST_H
# define FT_TYPES_SLIST_I8LEAST_H

# include <stddef.h>
# include <stdint.h>
# include "ft_types_array_i8least.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_i8least_node
{
	struct s_ft_types_slist_i8least_node	*next;
	int_least8_t							value;
}	t_ft_types_slist_i8least_node;

typedef struct s_ft_types_slist_i8least
{
	t_ft_types_slist_i8least_node	*head;
	t_ft_types_slist_i8least_node	*tail;
	size_t							length;
}	t_ft_types_slist_i8least;

void	ft_types_slist_i8least_clear(
			t_ft_types_slist_i8least *list);
t_err	ft_types_slist_i8least_to_array(
			t_ft_types_slist_i8least *list,
			t_ft_types_array_i8least *out);
t_err	ft_types_slist_i8least_push(
			t_ft_types_slist_i8least *list,
			int_least8_t value);

#endif
