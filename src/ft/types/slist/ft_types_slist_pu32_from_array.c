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
#include "ft_types_array_pu32.h"
#include "ft_types_slist_pu32.h"

t_err	ft_types_slist_pu32_from_array(
	t_ft_types_array_pu32 *array,
	t_ft_types_slist_pu32 *out
)
{
	t_ft_types_slist_pu32	result;
	size_t					i;

	ft_types_slist_pu32_init(&result);
	i = -1;
	while (++i < array->count)
	{
		if (ft_types_slist_pu32_push(&result, array->element[i]))
		{
			ft_types_slist_pu32_clear(&result);
			return (true);
		}
	}
	*out = result;
	return (false);
}
