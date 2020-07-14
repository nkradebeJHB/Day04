/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkradebe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 07:50:04 by nkradebe          #+#    #+#             */
/*   Updated: 2020/07/14 08:44:04 by nkradebe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	int count;
	if(power	<	0)
		return(0);

	else if (power	==	0)
		return(1);

	else
	{
		count	=	nb * ft_recursive_power(nb,	power-1);
	}
	return(count);
}
