/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asm.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuery <sjuery@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 15:07:48 by sjuery            #+#    #+#             */
/*   Updated: 2018/02/07 20:03:17 by sjuery           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASM_H
# define ASM_H
#define LINE_SIZE	39

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <sys/stat.h>
# include <math.h>
# include <stdarg.h>
# include <stdint.h>
# include <inttypes.h>

# include "libft.h"
# include "op.h"

typedef struct				s_assembler
{
    int                     i;
	int						sfile;
    int                     corefile;
    char                    *line;
    int                     ls;
}							t_assembler;

int			                convert_to_hex(t_assembler *st);

#endif