#include "main.h"

/**
 * _putchar - Function prints char
 *
 * @c: Character to be input.
 *
 * Return: 1 Success, -1 Error
 */

int _putchar(char c) {
    return write(fileno(stdout), &c, 1);
}
