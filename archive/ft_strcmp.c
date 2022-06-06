/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:06:02 by tlai-an           #+#    #+#             */
/*   Updated: 2022/06/02 15:14:20 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (s1[x] != '\0' || s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			if (s1[x] > s2[x])
			{
				return (s1[x] - s2[x]);
			}
			else if (s1[x] < s2[x])
			{
				return (-(s2[x] - s1[x]));
			}
			return (0);
		}
		x++;
	}
}
