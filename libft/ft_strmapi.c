/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 18:31:44 by aes-salm          #+#    #+#             */
/*   Updated: 2019/10/20 18:31:47 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*str;
	char			*ps;

	ps = (char*)s;
	len = ft_strlen(s);
	if (!(str = malloc(len + 1)))
		return (NULL);
	while (i <= len)
	{
		str[i] = f(i, ps[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
