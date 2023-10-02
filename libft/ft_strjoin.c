/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvasanc <alvasanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:19:44 by alvasanc          #+#    #+#             */
/*   Updated: 2023/10/02 11:23:09 by alvasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	int		i;
	int		j;
	int		len1;
	int		len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	string = ((char *)malloc(len1 + len2)) * (sizeof(char)) + 1;
	if (ft_strlen(s1) == 0 || ft_strlen(s2) == 0 || len1 <= 0 || len2 <= 0 
		|| s1[i] < 0 || s2[i] < 0)
}
