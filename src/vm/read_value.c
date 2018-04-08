/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_value.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <anazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 15:01:50 by anazar            #+#    #+#             */
/*   Updated: 2018/04/08 15:29:19 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <corewar.h>

unsigned int     read_value(t_vm *vm, t_proc *proc, int acb)
{
    unsigned int reg;
    unsigned int value;
    unsigned int index;

    if (acb == 1)
    {
        reg = read_core1(vm, read_reg(proc, 0));
        value = read_reg(vm, reg);
        write_reg(vm, 0, read_reg(proc, 0) + 1);
    }
    else if (acb == 2)
    {
        value = read_core4(vm, read_reg(proc, 0));
        write_reg(vm, 0, read_reg(proc, 0) + 4);
    }
    else if (acb == 3)
    {
        index = read_core2(vm, read_reg(proc, 0));
        value = read_core4(vm, index);
        write_reg(vm, 0, read_reg(proc, 0) + 2);
    }
    return (value);
}
