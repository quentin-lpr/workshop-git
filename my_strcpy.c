/*
** EPITECH PROJECT, 2023
** my_strcpy
** File description:
** Pool day 6
** Task 01
*/

char *my_strcpy(char *dest, char const *src)
{
    int i;

    for (i = 0; src[i] != '\0'; i += 1) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}
