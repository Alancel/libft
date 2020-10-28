/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alancel <alancel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:38:14 by alancel           #+#    #+#             */
/*   Updated: 2020/10/28 17:19:46 by alancel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

const char *ft_strrchr(const char *str, int sym)
{
    const char *tmp;
    tmp = str;
    while (*tmp)
        tmp++;
    while (tmp >= str)
    {
        if (*tmp == sym)
            return ((char *) tmp);
        tmp--;    
    }
    return (NULL);
    
}