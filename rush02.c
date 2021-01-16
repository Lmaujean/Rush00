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
	int ligne;
	int compteur;
	ligne = 0;
	compteur = 2;
		
	ft_putchar('A');
		while(compteur < x )
		{
			ft_putchar('B');
			compteur++;
		}
		ft_putchar('A');
		ft_putchar('\n');
		
}

void caractere2(int x, int y)
{
	int ligne;
	int compteur;
	ligne = 0;
	compteur = 2;

	ft_putchar('B');
		while (compteur < x)
		{
			ft_putchar(' ');
			compteur++;
		}
		ft_putchar('B');
		ft_putchar('\n');
		if 	(compteur >= x)
				ligne = ligne + y;

//}

//void caractere3(int x, int y)		

//void rush(int x, int y)
//{
	//caractere(5);
	//caractere2(5,2);
//}		
		

int main()
{
	caractere(5);
	return (0);
}





