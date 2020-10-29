/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alancel <alancel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:29:49 by alancel           #+#    #+#             */
/*   Updated: 2020/10/29 19:40:57 by alancel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *arr1;
    unsigned char *arr2;
    
    arr1 = (unsigned char *)dest;
    arr2 = (unsigned char *)src;
    
    if (!dest && !src)
        return(dest);
    if (src < dest)
    {
        while (n)
        {
            n--;
            arr1[n] = arr2[n];
        }
    }
	else
	{
		dest += n;
		src += n;
		while(n)
		{
            n--;
			*arr1++ = *arr2++; 
		}
	}
	return (dest);
}
	