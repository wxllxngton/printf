#include <main.h>

/**
 * _putchar - function prints char
 *
 * @c: input character
 *
 * Return: 1 Success, -1 Error
 */

int _putchar(char c) {
    return write(fileno(stdout), &c, 1);
}
