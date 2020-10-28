/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alancel <alancel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:46:01 by alancel           #+#    #+#             */
/*   Updated: 2020/10/28 17:51:08 by alancel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t  ft_strlen(const char * str)
{
    size_t i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}