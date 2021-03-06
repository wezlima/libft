/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woliveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/19 20:35:17 by woliveir          #+#    #+#             */
/*   Updated: 2016/10/19 20:37:21 by woliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprime(int n)
{
	int i;

	if (n < 2)
		return (0);
	i = 2;
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}
