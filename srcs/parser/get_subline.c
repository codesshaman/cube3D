/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_subline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 06:08:15 by einterdi          #+#    #+#             */
/*   Updated: 2022/07/06 00:08:54 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub.h"

char	*get_subline(const char *line)
{
	int		i;
	char	*subline;

	while (*line == SPACE)
		++line;
	if (*line == END_OF_LINE)
		put_error(INVALID_LINE, ERR_LINE);
	i = 0;
	while (line[i] != END_OF_LINE && line[i] != NEW_LINE)
		++i;
	subline = ft_substr(line, 0, i);
	if (subline == NULL)
		put_error(INVALID_MEMORY, ERR_MEMORY);
	return (subline);
}
