/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkradebe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 11:03:25 by nkradebe          #+#    #+#             */
/*   Updated: 2020/07/14 11:14:49 by nkradebe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int	nb)
{
	int		i;

	int		is_prime;

	i	=	2;
	is_prime	=	1;
	while(i	<=	nb/2)
	{
		if(nb % i == 0)
			is_prime	=	0;
		i++;
	}

	if(is_prime == 1)
	{
		return(nb);
	}
	else if(is_prime	==	0)
	{
		ft_find_next_prime(nb+1);
	}
	return(nb);
}
