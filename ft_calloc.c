/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alancel <alancel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:49:13 by alancel           #+#    #+#             */
/*   Updated: 2020/10/28 17:48:33 by alancel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdlib.h>

void    *ft_calloc(size_t count, size_t size)
{
  char  *str;

  if(!(str = malloc(count*size)))
    return (NULL);
  ft_bzero(str, count * size);
  return (str);
}
