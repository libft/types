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

#ifndef FT_TYPES_SLIST_ULONG_H
# define FT_TYPES_SLIST_ULONG_H

# include <stddef.h>

typedef struct s_ft_types_slist_ulong_node
{
	struct s_ft_types_slist_ulong_node	*next;
	unsigned long						value;
}	t_ft_types_slist_ulong_node;

typedef struct s_ft_types_slist_ulong
{
	t_ft_types_slist_ulong_node	*head;
	t_ft_types_slist_ulong_node	*tail;
	size_t						length;
}	t_ft_types_slist_ulong;

#endif
