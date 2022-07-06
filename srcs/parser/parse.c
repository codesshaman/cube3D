/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 06:08:25 by einterdi          #+#    #+#             */
/*   Updated: 2022/07/06 06:01:17 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub.h"

t_data	*parse(int argc, char **argv)
{
	char	*str;
	t_data	*data;

	if (argc != 2)
		put_error(INVALID_ARG_COUNT, ERR_ARG);
	str = read_file(argv[1]);
	data = convert_line_to_data(str);
	free(str);
	return (data);
}
