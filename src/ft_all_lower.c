/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all_lower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 12:21:40 by myang             #+#    #+#             */
/*   Updated: 2017/09/28 15:47:10 by myang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_all_lower(char *str)
{
	int	w;

	w = 0;
	while (str[w] != '\0')
	{
		if (ft_islower(str[w]) == 1)
			str[w] -= 32;
		w++;
	}
	return (str);
}
