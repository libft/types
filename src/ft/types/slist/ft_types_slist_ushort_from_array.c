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
#include "ft_types_array_ushort.h"
#include "ft_types_slist_ushort.h"
#include "ft_types.h"

t_err	ft_types_slist_ushort_from_array(
	t_ft_types_array_ushort *array,
	t_ft_types_slist_ushort *out
)
{
	t_ft_types_slist_ushort	result;
	size_t					i;

	ft_types_slist_ushort_init(&result);
	i = -1;
	while (++i < array->count)
	{
		if (ft_types_slist_ushort_push(&result, array->element[i]))
		{
			ft_types_slist_ushort_clear(&result);
			return (true);
		}
	}
	*out = result;
	return (false);
}
