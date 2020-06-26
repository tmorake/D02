/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorake <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 10:36:40 by tmorake           #+#    #+#             */
/*   Updated: 2020/06/20 10:37:26 by tmorake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_print_numbers(void)
{
  char number;

  number = 48;
  while (number <= 57)
    {
      putchar(number);
      number++;
    }
}
