/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibkocak < ibkocak@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:02:54 by ibkocak           #+#    #+#             */
/*   Updated: 2023/11/14 18:09:08 by ibkocak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2
# endif

char	*get_next_line(int fd);
char	*ft_get_lef(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchar(char *str, char c);
int		ft_strlen(char *str);
char	*ft_reader(int fd, char *str);
char	*get_next_line(int fd);
#endif
