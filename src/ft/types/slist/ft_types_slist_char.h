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

#ifndef FT_TYPES_SLIST_CHAR_H
# define FT_TYPES_SLIST_CHAR_H

# include <stddef.h>
# include "ft_types_array_char.h"

typedef struct s_ft_types_slist_char_node
{
	struct s_ft_types_slist_char_node	*next;
	char								value;
}	t_ft_types_slist_char_node;

typedef struct s_ft_types_slist_char
{
	t_ft_types_slist_char_node	*head;
	t_ft_types_slist_char_node	*tail;
	size_t						length;
}	t_ft_types_slist_char;

t_err	ft_types_slist_char_to_array(
			t_ft_types_slist_char *list,
			t_ft_types_array_char *out);

#endif
