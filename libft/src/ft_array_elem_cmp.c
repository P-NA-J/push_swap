/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_elem_cmp.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 11:03:53 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/18 09:33:24 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

long	ft_array_elem_cmp(char *str, char **array)
{
	if (!str || !array)
		return (L_FALSE);
	while (*array != NULL)
	{
		if (ft_strcmp(str, *array) == FALSE)
			return (L_TRUE);
		array += 1;
	}
	return (L_FALSE);
}
