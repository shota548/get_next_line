/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:17:22 by marvin            #+#    #+#             */
/*   Updated: 2025/06/15 12:42:36 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "get_next_line.h"

// ↓callocにつかうだけだからなくてもいい
void	ft_bzero(void *b, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *b);
	while (len-- > 0)
		*p++ = 0;
	return ;
}
void *ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			idx;

	if (size != 0 && count > __SIZE_MAX__ / size)
		return (NULL);
	tmp = malloc(count * size);
	if (tmp != NULL)
	{
		idx = 0;
		while (idx < (count * size))
			tmp[idx++] = 0;
	}
	return (tmp);
}

size_t	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

char	*ft_strchr(const char *s, int search_c )
{
	while (*s != '\0')
	{
		if (*s == (char)search_c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)search_c)
		return ((char *)s);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		idx;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	idx = 0;
	while (s1[idx] != '\0')
	{
		str[idx] = s1[idx];
		idx++;
	}
	while (s2[idx - ft_strlen(s1)] != '\0')
	{
		str[idx] = s2[idx - ft_strlen(s1)];
		idx++;
	}
	str[idx] = '\0';
	return (str);
}


