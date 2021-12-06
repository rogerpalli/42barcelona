#include <stdio.h>
#include <unistd.h>

void	ft_print_alphabet(void) {
	char i = 'a';
	
	while (i!='z'+1) {
		write(1, &i, 1);
		i++;
	}

}