/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkradebe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 08:23:40 by nkradebe          #+#    #+#             */
/*   Updated: 2020/07/14 08:30:42 by nkradebe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int	index)
{
	int pre_value;

	int cur_value;

	pre_value	=	0;
	cur_value	=	1;
	if(index	<	0)
		return(0);

	while(index	>	0)
	{
		cur_value	=	pre_value	+	cur_value;
		index--;
	}
	return(cur_value);

}
