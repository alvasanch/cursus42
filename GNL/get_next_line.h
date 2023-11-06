/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvasanc <alvasanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:00:01 by alvasanc          #+#    #+#             */
/*   Updated: 2023/11/06 13:01:51 by alvasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *aux_line, char *buffer, int read_bytes);
void	*ft_calloc(size_t count, size_t size);
char	*ft_read_line(int fd, char *aux_line);
char	*get_next_line(int fd);
char	*ft_read_line(int fd, char *aux_line);
char	*ft_get_line(char *aux_line);
char	*ft_clean_line(char *aux_line);

#endif