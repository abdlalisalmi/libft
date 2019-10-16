/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 13:32:28 by aes-salm          #+#    #+#             */
/*   Updated: 2019/10/11 13:32:31 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int arg)
{
	if (((arg >= 'a') && (arg <= 'z')) || ((arg >= 'A') && (arg <= 'Z')))
		return (1);
	else if ((arg >= '0') && (arg <= '9'))
		return (1);
	else
		return (0);
}