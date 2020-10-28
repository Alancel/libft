/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alancel <alancel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:29:49 by alancel           #+#    #+#             */
/*   Updated: 2020/10/28 19:12:37 by alancel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;

	i = 0;
    //arr1 = (unsigned char *)dest;
    //arr2 = (unsigned char *)src;
    if (!dest && !src)
        return(dest);
    if (src < dest)
    {
        while (n)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i++;
            n--;
        }
    }
	else
	{
		dest += n;
		src += n;
		while(n)
		{
			*(unsigned char *)dest-- = *(unsigned char *)src--;
			n--;
		}
	}
	return (dest);
}
	