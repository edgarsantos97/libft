/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgarsantos <edgarsantos@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:45:20 by edgarsantos       #+#    #+#             */
/*   Updated: 2024/10/28 20:54:56 by edgarsantos      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int c, char **v)
{
    int i, n;

    i = 1;
    n = 0;

    while (i <= c)
    {
        while (v[i][n] != '\0')
        {
            ft_putchar(v[i][n]);
            n++;
        }
        write(1, "\n", 1);
        n = 0;
        i++;
    }

    return 0;
}