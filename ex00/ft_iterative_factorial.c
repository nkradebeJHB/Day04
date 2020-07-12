/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkradebe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 11:21:23 by nkradebe          #+#    #+#             */
/*   Updated: 2020/07/12 11:41:00 by nkradebe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int	nb)
{
	int		i;

	int factorial_results;

	i	=	0;
	factorial_results	=	0;
	while(i	<=	nb)
	{
		factorial_results = factorial_results * i;
		i++;
	}
	return(factorial_results);
}
