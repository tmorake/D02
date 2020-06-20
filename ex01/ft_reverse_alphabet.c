/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_alphabet.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorake <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 08:44:44 by tmorake           #+#    #+#             */
/*   Updated: 2020/06/20 08:47:09 by tmorake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_print_alphabet(void)
{
  char    letter;

  letter = 'z';
  while (letter >= 'a')
    {
      putchar(letter);
      letter--;
    }
}

int main(void)
{
  ft_print_alphabet();
  return 0;
}




















