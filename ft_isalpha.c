/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alancel <alancel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:10:59 by alancel           #+#    #+#             */
/*   Updated: 2020/10/30 20:00:30 by alancel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int sym)
{
	return ((sym >= 'A' && sym <= 'Z') || (sym >= 'a' && sym <= 'z'));
}
