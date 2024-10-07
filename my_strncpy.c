/*
** EPITECH PROJECT, 2024
** day_06
** File description:
** task_02.c
*/

#include <stdio.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i += 1;
    return i;
}

char *my_strncpy(char *dest, char const *src, const int n)
{
    int i = 0;
    const int src_len = my_strlen(src);

    for (i = 0; i < n; i += 1)
        dest[i] = src[i];
    if (n > src_len)
        dest[i] = '\0';
    return dest;
}

int main(void)
{
    char dest[5];
    char src[] = "hello";

    printf("Before:\n");
    printf("src (input)\t> %s\n", src);
    printf("dest (output)\t> %s\n", dest);
    my_strncpy(dest, src, 4);
    printf("\nAfter:\n");
    printf("src (input)\t> %s\n", src);
    printf("dest (output)\t> %s\n", dest);

    return 0;
}
