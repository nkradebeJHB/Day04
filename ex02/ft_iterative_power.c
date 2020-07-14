/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkradebe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 09:22:47 by nkradebe          #+#    #+#             */
/*   Updated: 2020/07/14 07:48:20 by nkradebe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int	nb,	int		power)
{
	int iterated_power;

	if(power	<	0)
		return(0);

	else if(power	==	0)
		return(1);

	while(power		>	0)
	{
		iterated_power = nb * nb;
		power --;
	}
	return(iterated_power);
}
