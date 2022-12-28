/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:12:32 by mkarakul          #+#    #+#             */
/*   Updated: 2022/12/27 14:57:55 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main ()
{
	ft_printf("mustafa\n");
	ft_printf("%d\n", 123);
	ft_printf("%c\n", 'a');
	ft_printf("%u\n", 123432342);
	ft_printf("%x\n", "mustafa");
	ft_printf("%X\n", "mustafa");
	ft_printf("%p\n", 100);
}
