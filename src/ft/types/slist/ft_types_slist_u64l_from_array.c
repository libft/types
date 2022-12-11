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

#include <stdlib.h>
#include "ft_types_array_u64l.h"
#include "ft_types_slist_u64l.h"

t_err	ft_types_slist_u64l_from_array(
	t_ft_types_array_u64l *array,
	t_ft_types_slist_u64l *out
)
{
	t_ft_types_slist_u64l	result;
	size_t					i;

	ft_types_slist_u64l_init(&result);
	i = -1;
	while (++i < array->count)
	{
		if (ft_types_slist_u64l_push(&result, array->element[i]))
		{
			ft_types_slist_u64l_clear(&result);
			return (true);
		}
	}
	*out = result;
	return (false);
}
