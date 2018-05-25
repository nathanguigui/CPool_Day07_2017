/*
** EPITECH PROJECT, 2017
** my_sort_params
** File description:
** 
*/

int	main(int argc, char **argv)
{
	int i = 0;
	while(argv[i] != '\0') {
		i = i + 1;
	}
	my_sort_int_array(strdup(argc), i);
	my_putstr(argv[0]);
	return(0);
}
