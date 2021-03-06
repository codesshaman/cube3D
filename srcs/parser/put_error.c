/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 06:08:32 by einterdi          #+#    #+#             */
/*   Updated: 2022/07/07 16:38:54 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub.h"

void	put_error(const char *message, int error_status)
{
	write(2, NAME, ft_strlen(NAME));
	write(2, ": ", 2);
	write(2, ERROR, ft_strlen(ERROR));
	write(2, ": ", 2);
	write(2, message, ft_strlen(message));
	write(2, "\n", 1);
	exit(error_status);
}

void	put_error_and_arg(char *arg, char *message, int error_status)
{
	write(2, NAME, ft_strlen(NAME));
	write(2, ": ", 2);
	write(2, ERROR, ft_strlen(ERROR));
	write(2, ": ", 2);
	write(2, arg, ft_strlen(arg));
	write(2, ": ", 2);
	write(2, message, ft_strlen(message));
	write(2, "\n", 1);
	exit(error_status);
}
