/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahernan <sahernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 13:19:24 by sahernan          #+#    #+#             */
/*   Updated: 2024/03/16 19:42:35 by sahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
int		ft_strchr(char *str, int c);
size_t	ft_strlen(char *str);
char	*ft_strjoin(char *buffer, char *tmp);
char	*ft_next_line(char *buffer);
char	*freeline(char **buffer);

#endif
