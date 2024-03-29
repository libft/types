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
#include "ft_types_array_pf.h"
#include "ft_types_slist_pf.h"

t_err	ft_types_slist_pf_from_array(
	t_ft_types_array_pf *array,
	t_ft_types_slist_pf *out
)
{
	t_ft_types_slist_pf	result;
	size_t				i;

	ft_types_slist_pf_init(&result);
	i = -1;
	while (++i < array->count)
	{
		if (ft_types_slist_pf_push(&result, array->element[i]))
		{
			ft_types_slist_pf_clear(&result);
			return (true);
		}
	}
	*out = result;
	return (false);
}
