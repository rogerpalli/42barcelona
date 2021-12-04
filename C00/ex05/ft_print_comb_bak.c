#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* Escribe por pantalla los caracteres actuales. 											*/
/* Si no hemos llegado a 789 (numero final) entonces pon una coma y espacio.				*/

void	ft_put_comb(char tabla[3])
{
	ft_putchar(tabla[0]);
	ft_putchar(tabla[1]);
	ft_putchar(tabla[2]);
	if (!(tabla[0] == '7' && tabla[1] == '8' && tabla[2] == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}


/* Inicializamos la tabla con el numero 011 que sera como si fuera el 0 ya que buscamos empezar por el 012		  */
/* Teniendo en cuenta el numero final 789, vamos recorriendo todos los numeros con el while mientras 			  */
/* comparamos que */

void	ft_print_comb(void)
{
	char	tabla[3];

	tabla[0] = '0';
	tabla[1] = '1';
	tabla[2] = '1';
	while (1)
	{
		while (++tabla[2] <= '9')
			ft_put_comb(tabla);
		if (++tabla[1] <= '8')
			tabla[2] = tabla[1];
		else if (++tabla[0] <= '7')
		{
			tabla[1] = tabla[0] + 1;
			tabla[2] = tabla[1];
		}
		else
			break ;
	}
}

int main () {
	ft_print_comb();
}
