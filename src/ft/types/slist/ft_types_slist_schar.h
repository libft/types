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

#ifndef FT_TYPES_SLIST_SCHAR_H
# define FT_TYPES_SLIST_SCHAR_H

# include <stddef.h>
# include "ft_types_array_schar.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_schar_node
{
	struct s_ft_types_slist_schar_node	*next;
	signed char							value;
}	t_ft_types_slist_schar_node;

typedef struct s_ft_types_slist_schar
{
	t_ft_types_slist_schar_node	*head;
	t_ft_types_slist_schar_node	*tail;
	size_t						length;
}	t_ft_types_slist_schar;

void	ft_types_slist_schar_clear(
			t_ft_types_slist_schar *list);
t_err	ft_types_slist_schar_to_array(
			t_ft_types_slist_schar *list,
			t_ft_types_array_schar *out);
t_err	ft_types_slist_schar_push(
			t_ft_types_slist_schar *list,
			signed char value);

#endif
