/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findme.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 11:26:02 by myang             #+#    #+#             */
/*   Updated: 2017/01/05 16:54:23 by myang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int			ft_findme(const char *s1, int n)
{
	int		me;

	me = 0;
	if (ft_strchr(s1, n) != NULL)
	{
		while (s1[me] && s1[me] != (char)n)
			me++;
		return (me);
	}
	return (-1);
}
