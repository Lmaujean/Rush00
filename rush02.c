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

void ft_putchar(char c);

void caractere(int x)
{
	int compteur;

	compteur = 0;
		while(compteur < x )
		{
			if (compteur == 0 || compteur == x - 1)
				ft_putchar('A');	
			else
				ft_putchar('B');
			compteur++;
		}
		ft_putchar('\n');
		
}

void caractere2(int x)
{
	
	int compteur;
	compteur = 0;
		while (compteur < x)
		{
			if (compteur == 0 || compteur == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');ß
		}
		ft_putchar('\n');

}

//void caractere3(int x, int y)		

void rush(int x, int y)
{
	//caractere(5);
	caractere2(5,2);
}		
		

int main()
{
	caractere(5);
	return (0);
}





