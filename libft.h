/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alancel <alancel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 16:56:11 by alancel           #+#    #+#             */
/*   Updated: 2020/10/29 22:49:42 by alancel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int         ft_atoi(const char *str);
int         ft_isalnum(int sym);
int         ft_isalpha(int sym);
int         ft_isascii(int sym);
int         ft_isdigit(int sym);
int         ft_isprint(int sym);
int         ft_tolower(int sym);
int         ft_toupper(int sym);
int         ft_strncp(const char *str1, const char *str2, size_t num);
int         ft_memcmp(const void *buf1, const void *buf2, size_t count);
void        ft_bzero(void *str, size_t n);
void        ft_putchar_fd(char c, int fd);
void        ft_putnbr_fd(int n, int fd);
void        ft_putstr_fd(const char *s, int fd);
void        ft_putendl_fd(char *s, int fd);
void        *ft_calloc(size_t count, size_t size);
void        *ft_memchr(const void *arr, int c, size_t n);
void        *ft_memcpy(void *dest, const void*src, size_t n);
void        *ft_memmove(void *dest, const void *src, size_t n);
void        *ft_memset(void *str, int c, size_t n);
char        *ft_strchr(const char *str, int sym);
char        *ft_strdup(const char *str);
char        *ft_itoa(int n);
char        *ft_strnstr(const char *str1, const char *str2, size_t len);
char        *ft_substr(char const *s, unsigned int start, size_t len);
char        *ft_strjoin(char const *s1, char const *s2);
//char        *ft_strtrim(char const *s1, char const *set);
const char  *ft_strrchr(const char *str, int sym);
size_t      ft_strlcat(char *dst, const char *src, size_t size);
size_t      ft_strlcpy(char *dst, const char *src, size_t size);
size_t      ft_strlen(const char *str);
#endif
