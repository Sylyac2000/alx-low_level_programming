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


/**
 * print_sign - print sign of number
 * @n: number to check
 * Return: 1 if greater than 0, 0 if 0, or -1  if less than 0
 */

int print_sign(int n);


/**
 * _abs - computes absolute value of integer
 * @int: integer
 * Return: absolute value
 */

int _abs(int);

/**
 * print_last_digit - prints the last digit of a number
 * @int: integer
 * Return: last digit of number
 */

int print_last_digit(int);


/**
 * jack_bauer - print every minute of a day of Jack Bauer, starting from 00:00 to 23:59
 * Description: print minutes 00:00 to 23:59
 */

void jack_bauer(void);


/**
 * times_table - print multiplication table
 */

void times_table(void);

/**
 * add - add two integers
 * @a: first integer
 * @b: second integer
 * Return: sum
 */

int add(int, int);

/**
 * print_to_98 - print numbers n to 98
 * @n: integer argument
 */

void print_to_98(int n);

#endif
