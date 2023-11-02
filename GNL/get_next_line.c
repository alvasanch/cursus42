/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvasanc <alvasanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:00:15 by alvasanc          #+#    #+#             */
/*   Updated: 2023/11/02 11:21:31 by alvasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_line(int fd, char *aux_line)
{
	char	*buffer;
	int		read_bytes;
	char	*save_aux;

	buffer = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (!buffer)
		return (NULL);
	read_bytes = 1;
	while (!ft_strchr(buffer, '\n') && read_bytes > 0)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(aux_line);
			aux_line = NULL;
			return (NULL);
		}
		save_aux = aux_line;
		aux_line = ft_strjoin(save_aux, buffer, read_bytes);
	}
	free(buffer);
	if (ft_strlen(aux_line) == 0)
		return (free(aux_line), NULL);
	return (aux_line);
}

char	*ft_get_line(char *aux_line)
{
	
}