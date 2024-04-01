/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahernan <sahernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:45:05 by sahernan          #+#    #+#             */
/*   Updated: 2024/03/16 20:12:46 by sahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 15
# endif

char	*get_next_line(int fd);
int		ft_strchr(char *str, int c);
size_t	ft_strlen(char *str);
char	*ft_strjoin(char *buffer, char *tmp);
char	*ft_next_line(char *buffer);
char	*freeline(char **buffer);

#endif
