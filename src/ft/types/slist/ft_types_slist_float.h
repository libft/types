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

#ifndef FT_TYPES_SLIST_FLOAT_H
# define FT_TYPES_SLIST_FLOAT_H

# include <stddef.h>

typedef struct s_ft_types_slist_float_node
{
	struct s_ft_types_slist_float_node	*next;
	float								value;
}	t_ft_types_slist_float_node;

typedef struct s_ft_types_slist_float
{
	t_ft_types_slist_float_node	*head;
	t_ft_types_slist_float_node	*tail;
	size_t						length;
}	t_ft_types_slist_float;

#endif
