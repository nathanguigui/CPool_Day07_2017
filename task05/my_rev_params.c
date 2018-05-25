/*
** EPITECH PROJECT, 2017
** my_rev_params
** File description:
** 
*/

int	main(int argc, char **argv)
{
	int i = 0;
	
	while(argv[i] != '\0') {
		i = i + 1;
	}
	while(i != 0) {
		i = i - 1;
		my_putstr(argv[i]);
		my_putchar('\n');
	}

	return(0);
}
