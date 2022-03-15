#ifndef MAIN
#define MAIN

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);

void print_alphabet(void);

/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 */

void print_alphabet_x10(void);


/**
 * _islower - checks if c is lowercase or not
 * @c: the character to check
 * Return: int
 */

int _islower(int c);


/**
 * _isalpha - checks for alphabet character
 * @c: character to check
 * Return: 1  if c is a letter, lowercase or uppercase, 0 if not alphabet character
 */

int _isalpha(int c);

#endif
