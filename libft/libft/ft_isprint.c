/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:05:13 by aes-salm          #+#    #+#             */
/*   Updated: 2019/10/11 17:05:17 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprint(int arg)
{
	if ((arg >= 32) && (arg <= 127))
		return (1);
	return (0);
}
