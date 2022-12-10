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

#include <stdint.h>
#include <stdlib.h>
#include "ft_types_array_uptr.h"
#include "ft_types_slist_uptr.h"
#include "ft_types.h"

t_err	ft_types_slist_uptr_from_array(
	t_ft_types_array_uptr *array,
	t_ft_types_slist_uptr *out
)
{
	t_ft_types_slist_uptr	result;
	size_t					i;

	ft_types_slist_uptr_init(&result);
	i = -1;
	while (++i < array->count)
	{
		if (ft_types_slist_uptr_push(&result, array->element[i]))
		{
			ft_types_slist_uptr_clear(&result);
			return (true);
		}
	}
	*out = result;
	return (false);
}
