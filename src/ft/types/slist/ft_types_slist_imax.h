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

#ifndef FT_TYPES_SLIST_IMAX_H
# define FT_TYPES_SLIST_IMAX_H

# include <stddef.h>
# include <stdint.h>

typedef struct s_ft_types_slist_imax_node
{
	struct s_ft_types_slist_imax	*next;
	intmax_t						value;
}	t_ft_types_slist_imax_node;

typedef struct s_ft_types_slist_imax
{
	t_ft_types_slist_imax_node	*head;
	t_ft_types_slist_imax_node	*tail;
	size_t						length;
}	t_ft_types_slist_imax;

#endif