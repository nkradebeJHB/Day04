/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkradebe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 11:21:23 by nkradebe          #+#    #+#             */
/*   Updated: 2020/07/12 12:22:09 by nkradebe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int	nb)
{
	int		i;

	int factorial_results;

	i	=	1;
	factorial_results	=	1;
	if(nb	<	0)
		return(0);

	while(i	<=	nb)
	{
		factorial_results = factorial_results * i;
		i++;
	}
	return(factorial_results);
}
