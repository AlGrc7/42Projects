/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:32:57 by albertga          #+#    #+#             */
/*   Updated: 2023/10/17 15:23:58 by albertga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Split reserva (utilizando malloc(3)) un array de strings resultante de separar
la string ’s’ en substrings utilizando el caracter ’c’ como delimitador.
El array debe terminar con un puntero NULL*/

#include "libft.h"

static int	ft_wordcounter(char const *s, char c)
{
	int		i;
	int		b_check;
	int		wordcount;

	i = -1;
	b_check = 0;
	wordcount = 0;
	while (s[++i] && s)
	{
		if (s[i] != c && b_check == 0)
		{
			b_check += 1;
			wordcount++;
		}
		else if (s[i] == c && b_check == 1)
			b_check -= 1;
	}
	return (wordcount);
}

static int	ft_wordlen(char const *s, char c, int i)
{
	int		len;

	len = 0;
	while (s[i] != c && s[i++])
		len++;
	return (len);
}

static void	ft_freearray(char **array, int j)
{
	while (--j >= 0)
		free(array[j]);
	free(array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		words;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = -1;
	words = ft_wordcounter(s, c);
	array = malloc((words + 1) * (sizeof(char *)));
	if (!array)
		return (NULL);
	while (words > ++j)
	{
		while (s[i] == c)
			i++;
		len = ft_wordlen(s, c, i);
		array[j] = ft_substr(s, i, len);
		if (!array[j])
			return (ft_freearray(array, j), NULL);
		i += len;
	}
	array[j] = 0;
	return (array);
}

/*int	main(void)
{
	printf ("%d", ft_wordlen("Hola,, buenas,, tardes,, señor", ',', 13));
	return (0);
}*/
