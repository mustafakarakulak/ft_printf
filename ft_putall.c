/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putall.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:53:10 by mkarakul          #+#    #+#             */
/*   Updated: 2022/12/27 21:10:16 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putall(size_t nbr, char *base, int chk_p, int base_len)
{
	int	len;
	int	i;

	i = -1;
	len = 0;
	if (chk_p == 3)
	{
		if (!base)
			return (write(1, "(null)", 6));
		else
			while (base[++i])
				len += write(1, &base[i], 1);
		return (len);
	}
	if (chk_p == 1)
		len += write(1, "0x", 2);
	if ((int)nbr < 0 && chk_p == 2)
	{
		len += write(1, "-", 1);
		nbr = nbr * -1;
	}
	if (nbr / base_len != 0)
		len += ft_putall(nbr / base_len, base, 0, base_len);
	len += write(1, &base[nbr % base_len], 1);
	return (len);
}
