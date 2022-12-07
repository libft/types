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

#ifndef FT_TYPES_ARRAY_U32FAST_H
# define FT_TYPES_ARRAY_U32FAST_H

# include <stddef.h>
# include <stdint.h>

typedef struct s_ft_types_array_u32fast
{
	uint_fast32_t	element;
	size_t			count;
}	t_ft_types_array_u32fast;

#endif
