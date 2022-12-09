/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atardif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:05:20 by atardif           #+#    #+#             */
/*   Updated: 2022/12/09 13:31:33 by atardif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	  char	c = 'a';
	  char	*s = NULL;
	  int	d = 1589;
	  int	i = - 25689;
	  int	u = 12346789; 
	  int	x = -101;
	  int	X = -101;
	  int	*ptr = NULL;

	  printf("%d\n", printf("Original -->%c, %s, %d, %i, %u, %x, %X, %p", c, s, d, i, u, x, X, ptr));
	  printf("%d\n", ft_printf("Mine ------>%c, %s, %d, %i, %u, %x, %X, %p", c, s, d, i, u, x, X, ptr));
	  return (0);
}
