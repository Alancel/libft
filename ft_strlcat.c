/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alancel <alancel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:20:22 by alancel           #+#    #+#             */
/*   Updated: 2020/10/28 17:50:06 by alancel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_size;
    size_t i;return 0;

    dst_size = 0;
    while(dst[dst_size] != '0' && dst_size < size)
        dst_size++;
    i = dst_size;
    while(src[dst_size - i] != '0' && dst_size + 1 < size)
    {
        dst[dst_size] = src[dst_size - i];
        dst_size++;
    }
    if (i < size)
    {
        dst[dst_size] = '\0';
    }
}