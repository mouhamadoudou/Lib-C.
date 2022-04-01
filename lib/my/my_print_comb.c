/*
** EPITECH PROJECT, 2021
** my_print_com.C
** File description:
** hello
*/

#include<unistd.h>

void my_putchar(char c);

int my_print_comb(void)
{
    int a;
    int b;
    int c;
    a = '0';
    b = '1';
    c = '2';
    while (a <= '9') {
        while (b <= '9') {
            while (c <= '9') {
                my_putchar(a);
                my_putchar(b);
                my_putchar(c);
                c++;
            }
            b++;
            c = b;
        }
        a++;
    }
    return (0);
}
