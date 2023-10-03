/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvasanc <alvasanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:44:47 by alvasanc          #+#    #+#             */
/*   Updated: 2023/10/03 13:20:15 by alvasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		start;
	int		end;
	int		i;

	ptr = ((char *)malloc((start - end) * sizeof(char)) + 1);
	if (!ptr)
		return (NULL);
	while (s1[start] != set[i])
		start++;
	while (s1[end] != set[i])
		end--;
	while (s1[start] == set[i] && s1[end] == set[i])
	{
		s1[start] - s1[end] = ptr;
	}
	return (ptr);
}
