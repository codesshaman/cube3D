/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 06:08:07 by einterdi             #+#    #+#             */
/*   Updated: 2022/03/05 06:08:09 by einterdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub.h"

int	get_index(const char *str, char delimiter)
{
	int	i;

	i = 0;
	while (str[i] != END_OF_LINE && str[i] != delimiter)
		++i;
	return (i);
}
