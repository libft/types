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
#include "ft_types_array_jd.h"
#include "ft_types_slist_jd.h"

t_err	ft_types_slist_jd_from_array(
	t_ft_types_array_jd *array,
	t_ft_types_slist_jd *out
)
{
	t_ft_types_slist_jd	result;
	size_t				i;

	ft_types_slist_jd_init(&result);
	i = -1;
	while (++i < array->count)
	{
		if (ft_types_slist_jd_push(&result, array->element[i]))
		{
			ft_types_slist_jd_clear(&result);
			return (true);
		}
	}
	*out = result;
	return (false);
}
