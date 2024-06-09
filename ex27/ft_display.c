/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanad <despanad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 02:45:09 by despanad          #+#    #+#             */
/*   Updated: 2024/06/09 03:09:46 by despanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	fd;
	int	len;
	char	buffer[1000];

	if (argc == 1)
		return (write(1, "File name is missing.", 20), 1);
	if (argc > 2)
		return (write(1, "Too many arguments.", 19), 1);
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (write(1, "Cannot read file.", 16), 1);
	len = read(fd, buffer, 1000);
	write(1, buffer, len);
	return (0);
}
