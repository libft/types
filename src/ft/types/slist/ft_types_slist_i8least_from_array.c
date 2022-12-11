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
#include "ft_types_array_i8least.h"
#include "ft_types_slist_i8least.h"
#include "ft_types.h"

t_err	ft_types_slist_i8least_from_array(
	t_ft_types_array_i8least *array,
	t_ft_types_slist_i8least *out
)
{
	t_ft_types_slist_i8least	result;
	size_t						i;

	ft_types_slist_i8least_init(&result);
	i = -1;
	while (++i < array->count)
	{
		if (ft_types_slist_i8least_push(&result, array->element[i]))
		{
			ft_types_slist_i8least_clear(&result);
			return (true);
		}
	}
	*out = result;
	return (false);
}
