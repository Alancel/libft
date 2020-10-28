/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alancel <alancel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:15:04 by alancel           #+#    #+#             */
/*   Updated: 2020/10/28 18:20:21 by alancel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int memcmp(const void *buf1, const void *buf2, size_t count)
{
    unsigned char *arr1;
    unsigned char *arr2;
    
    arr1 = (unsigned char *) buf1;
    arr2 = (unsigned char *) buf2;
    
    if(count)
    {
        while (count && arr1 == arr2)
        {
            arr1++;
            arr2++;
            count--;
        }
        return ((int)(arr1 - arr2));
    }
    return (0);
}