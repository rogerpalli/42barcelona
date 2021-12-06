#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c) {
	write(1, &c, 1);
}

void	ft_print_alphabet(void) {
	char i = 'a';
	
	while (i!='z'+1) {
		ft_putchar(i);
		i++;
	}

}

int main (void) {
	ft_print_alphabet();
}
