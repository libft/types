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
#include "ft_types_array_u16f.h"
#include "ft_types_slist_u16f.h"

t_err	ft_types_slist_u16f_from_array(
	t_ft_types_array_u16f *array,
	t_ft_types_slist_u16f *out
)
{
	t_ft_types_slist_u16f	result;
	size_t					i;

	ft_types_slist_u16f_init(&result);
	i = -1;
	while (++i < array->count)
	{
		if (ft_types_slist_u16f_push(&result, array->element[i]))
		{
			ft_types_slist_u16f_clear(&result);
			return (true);
		}
	}
	*out = result;
	return (false);
}
