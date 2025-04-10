/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crosorio <crosorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:48:13 by crosorio          #+#    #+#             */
/*   Updated: 2025/04/10 19:10:54 by crosorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
    size_t lenght;
    lenght = 0;
    while(s[lenght])
      lenght++;
    return(lenght);
}

/*
int main(void)
{
    printf("size: %zd\n", ft_strlen("Hola Mundo!"));
    printf("size: %zd", strlen("Hola Mundo!"));
}*/