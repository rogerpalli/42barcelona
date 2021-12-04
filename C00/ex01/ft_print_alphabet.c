#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c) {
	write(1, &c, 1);
}

void	ft_print_alphabet(void) {
	char i = 'a';

	for (i='a'; i <= 'z'; i++) {
		ft_putchar(i);
	}
}

int main () {
	ft_print_alphabet();
}
