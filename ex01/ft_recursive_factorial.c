/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkradebe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 11:45:56 by nkradebe          #+#    #+#             */
/*   Updated: 2020/07/15 13:29:56 by nkradebe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int	nb)
{
	int recur;

	if(nb	<	0)
		return(0);

	while(nb > 0)
	{
		recur	=	 nb*ft_recursive_factorial(nb - 1);
	}
	return(recur);
}
