/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:19:13 by tlai-an           #+#    #+#             */
/*   Updated: 2022/05/31 18:22:21 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		while (str[n] >= 'A' && str[n] <= 'Z')
		{
			str[n] = (str[n] + 32);
		}
		n++;
	}
	return (str);
}
