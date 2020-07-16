/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkradebe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 08:50:43 by nkradebe          #+#    #+#             */
/*   Updated: 2020/07/16 12:44:19 by nkradebe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_sqrt(int		nb)
{
	int		i;

	int		sqrt;

	int 	sol;

	sqrt	=	1;
	i		=	2;
	while(i	<=	nb/2)
	{
		if((i * i)	!=	nb)
			sqrt	=	0 ;
		
		else if(sqrt	==	1)
			sol = i;
		i++;
	}
		return(i);
}
