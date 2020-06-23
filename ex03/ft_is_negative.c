/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorake <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:51:03 by tmorake           #+#    #+#             */
/*   Updated: 2020/06/23 13:51:21 by tmorake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_is_negative(int n);
  void ft_putchar(char c)
{

}
void ft_is_negative(int n){
  printf("Enter a Positive or Negative number:");
scanf("%d", &n);

if(n >= 0)
printf("P");
 else if(n < 0)

printf("N");
 printf("\n");
}

