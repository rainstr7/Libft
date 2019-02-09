/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd(main).c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 21:00:40 by ihahn             #+#    #+#             */
/*   Updated: 2019/02/09 17:03:55 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_putendl_fd(char const *s, int fd)
{
	int l;

	l = ft_strlen(s);
	write(fd, s, l);
	write(fd, "\n", 1);
}

int main(void)
{
	const char app[1024] = "1234567890";
	ft_putendl_fd(app, 1);
	return (0);
}