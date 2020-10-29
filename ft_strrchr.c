/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alancel <alancel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:38:14 by alancel           #+#    #+#             */
/*   Updated: 2020/10/29 19:49:49 by alancel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char *ft_strrchr(const char *str, int sym)
{
    const char *tmp;
    tmp = str;
    while (*tmp)
        tmp++;
    while (tmp >= str)
    {
        if (*tmp-- == (char)sym)
            return ((char *) tmp + 1);   
    }
    return (NULL);
    
}