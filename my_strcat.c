/*
** EPITECH PROJECT, 2017
** my_strcat
** File description:
** 
*/

char	*my_strcat(char *dest, char *src)
{
	int dest_length;
	int i;

	dest_length = my_strlen(dest);
	i = 0;
	while (src[i] != '\0') {
		dest[dest_length + i] = src[i];
		i = i + 1;
	}
	dest[dest_length + i] = '\0';
	return(dest);
}
