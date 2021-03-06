/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findmestr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 11:26:02 by myang             #+#    #+#             */
/*   Updated: 2017/01/05 16:54:23 by myang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int			ft_findmestr(const char *s1, const char *s2)
{
	if (ft_strstr(s1, s2) != NULL)
		return (1);
	return (-1);
}
