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

#ifndef FT_TYPES_H
# define FT_TYPES_H

# include <stddef.h>
# include <stdint.h>
# include <stdbool.h>

typedef char				t_c;
typedef signed char			t_hhd;
typedef signed short		t_hd;
typedef signed int			t_d;
typedef signed long			t_ld;
typedef signed long long	t_lld;
typedef unsigned char		t_hhu;
typedef unsigned short		t_hu;
typedef unsigned int		t_u;
typedef unsigned long		t_lu;
typedef unsigned long long	t_llu;
typedef float				t_f;
typedef double				t_lf;
typedef long double			t_llf;
typedef ptrdiff_t			t_td;
typedef size_t				t_zu;
typedef intmax_t			t_jd;
typedef uintmax_t			t_ju;

typedef int8_t				t_i8;
typedef int16_t				t_i16;
typedef int32_t				t_i32;
typedef int64_t				t_i64;
typedef uint8_t				t_u8;
typedef uint16_t			t_u16;
typedef uint32_t			t_u32;
typedef uint64_t			t_u64;
typedef int_fast8_t			t_i8fast;
typedef int_fast16_t		t_i16fast;
typedef int_fast32_t		t_i32fast;
typedef int_fast64_t		t_i64fast;
typedef uint_fast8_t		t_u8fast;
typedef uint_fast16_t		t_u16fast;
typedef uint_fast32_t		t_u32fast;
typedef uint_fast64_t		t_u64fast;
typedef int_least8_t		t_i8least;
typedef int_least16_t		t_i16least;
typedef int_least32_t		t_i32least;
typedef int_least64_t		t_i64least;
typedef uint_least8_t		t_u8least;
typedef uint_least16_t		t_u16least;
typedef uint_least32_t		t_u32least;
typedef uint_least64_t		t_u64least;
typedef intmax_t			t_imax;
typedef intptr_t			t_iptr;
typedef uintmax_t			t_umax;
typedef uintptr_t			t_uptr;

typedef void				*t_p;
typedef bool				t_err;
typedef unsigned char		t_byte;

#endif
