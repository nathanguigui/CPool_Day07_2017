/*
** EPITECH PROJECT, 2017
** my_str_isupper
** File description:
** 
*/

int my_str_isupper(char const *str)
{
	int i = 0;

	while(str[i] != '\0') {
		if(!(str[i] >= 65 && str[i] <= 90)) {
			return(0);	
		}
		i = i + 1;
	}
	return(1);
}
