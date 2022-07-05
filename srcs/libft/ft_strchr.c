/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drayl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 23:22:23 by drayl             #+#    #+#             */
/*   Updated: 2021/10/13 23:22:27 by drayl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int a)
{
	char	*s;

	s = (char *)str;
	while (*s && *s != (unsigned char)a)
		s++;
	if (*s == '\0' && a != '\0')
		return ((void *)0);
	return (s);
}
