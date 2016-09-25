/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 14:48:22 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/25 14:48:24 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int i;
	int j;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
		{
			return (1);
		}
		i++;
	}
	return (0);
}