/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alancel <alancel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:13:31 by alancel           #+#    #+#             */
/*   Updated: 2020/10/29 19:13:45 by alancel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_atoi(const char *str)
{
    int sign;
    int i;
    int res;

    sign = 1;
    i = 0;
    res = 0;
    
    while(str[i] == ' ' || str [i] == '\n' || (str[i] >= 9 && str[i] <= 13) || str[i] == '+')
        i++;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (res * sign);    
}