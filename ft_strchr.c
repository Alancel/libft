/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alancel <alancel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:56:22 by alancel           #+#    #+#             */
/*   Updated: 2020/10/28 17:14:26 by alancel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char    *ft_strchr(const char *str, int sym)
{
    while(*str)
    {
        if (*str == (char)sym)
            return ((char *)str);
            str++;
    }
    return (NULL);
    if (sym == '\0')
        return ((char *) str);
}