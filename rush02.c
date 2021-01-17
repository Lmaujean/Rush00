/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaujean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 09:48:42 by lmaujean          #+#    #+#             */
/*   Updated: 2021/01/16 09:48:46 by lmaujean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	top_lane(int x)
{
	int counter;

	counter = 0;
	while (counter < x)
	{
		if (counter == 0 || counter == x - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
		counter++;
	}
}

void	mid_lane(int x)
{
	int counter;

	counter = 0;
	while (counter < x)
	{
		if (counter == 0 || counter == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
		counter++;
	}
}

void	bot_lane(int x)
{
	int counter;

	counter = 0;
	while (counter < x)
	{
		if (counter == 0 || counter == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		counter++;
	}
}

void	show_line(int x, int numero_ligne, int y)
{
	if (numero_ligne == 0)
	{
		top_lane(x);
	}
	else if (numero_ligne == y - 1)
	{
		bot_lane(x);
	}
	else
	{
		mid_lane(x);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int counter;

	counter = 0;
	while (counter < y)
	{
		show_line(x, counter, y);
		counter++;
	}
}
