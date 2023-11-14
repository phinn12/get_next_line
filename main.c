/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibkocak < ibkocak@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:01:50 by ibkocak           #+#    #+#             */
/*   Updated: 2023/11/14 18:29:08 by ibkocak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
int main()
{
	int	fd1 = open("c.txt",  O_CREAT | O_RDWR | O_APPEND, 0777);
	int fd2 = open("d.txt",O_CREAT | O_RDONLY, 0777);
	int fd3 = open("e.txt",O_CREAT | O_RDONLY, 0777);
	int fd4 = open("f.txt",O_CREAT | O_RDONLY, 0777);
	int fd5 = open("g.txt",O_CREAT | O_RDONLY, 0777);
	printf("%d", fd5);

}