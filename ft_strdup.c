/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alancel <alancel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 16:40:22 by alancel           #+#    #+#             */
/*   Updated: 2020/10/28 17:50:06 by alancel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char    *ft_strdup(const char *str)
{
  char *str_copy;
  size_t i;

  i = 0;
  if(!(str_copy = malloc(sizeof(char) * ft_strlen(str) + 1)))
    return (NULL);
  while(str[i])

  {
    str_copy[i] = str[i];
    i++;
  }
  str_copy[i] = '\0';
  return (str_copy);
}
