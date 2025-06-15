/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:42:53 by marvin            #+#    #+#             */
/*   Updated: 2025/06/15 13:59:18 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <limits.h>
# include <stddef.h>
# include <unistd.h>

find_newline(int fd, char **line, char **st_arr, char *buf);
read_fd(int fd, char **line, char **st_arr);
void	ft_bzero(void *b, size_t len);
void *ft_calloc(size_t count, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int search_c );
char	*ft_strjoin(char const *s1, char const *s2);

#endif