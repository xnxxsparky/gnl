/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcausseq <bcausseq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:19:44 by bcausseq          #+#    #+#             */
/*   Updated: 2024/10/29 22:46:20 by bcausseq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 69
# endif
# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
size_t	ft_strlen(char *src);
char	*ft_strdup(char *src);
char	*ft_strchr(char *src, char lf);
char	*ft_strjoin(char *po, char *pt);
char	*ft_substr(char *src, unsigned int start, size_t len);
#endif
