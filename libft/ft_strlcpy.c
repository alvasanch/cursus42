/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvasanc <alvasanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:50:30 by alvasanc          #+#    #+#             */
/*   Updated: 2023/09/21 15:00:18 by alvasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	unsigned long int	i;

	i = 0;
	if (dst_size > 0)
	{
		while (src[i] != '\0' && i < dst_size -1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*
int	main (void)
{
	char *string = "Holamellamopepe";
	char buffer[6];
	int ret;

	ret = ft_strlcpy(buffer, string, 6);
	printf("'%s', '%s', '%d', string, buffer, ret);
}
*/
