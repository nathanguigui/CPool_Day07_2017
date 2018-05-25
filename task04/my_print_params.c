/*
** EPITECH PROJECT, 2017
** my_print_params
** File description:
** 
*/

int	main(int argc, char **argv)
{
	int i = 0;
	while(argv[i] != '\0') {
		my_putstr(argv[i]);
		my_putchar('\n');
		i = i + 1;
	}
	return(0);
}
