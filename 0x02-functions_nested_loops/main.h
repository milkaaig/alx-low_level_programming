#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
/**
 * print_alphabet - print lowercase alphabet
 */
void print_alphabet(void);
/**
 * print_alphabet_x10 - print the alphabet 10x
 */
void print_alphabet_x10(void);
/**
 *_islower - check for lowercase characters
 *@c: the character to print
 *Return: return 1 if lowercase and 0 if otherwise
 */
int _islower(int c);
/**
 *_isalpha - check for alphabet
 *@c: the character to print
 *Return: return 1 if letter,lowercase or uppercase and 0 else otherwise
 */
int _isalpha(int c);
/**
 *print_sign - prints the sign of numbers
 *Return: return 1 if + 0 if 0 -1 if -
 *@n: character to print
 */
int print_sign(int n);
/**
 *_abs - computer absolute value of integer
 * @int: integer
 * Return: absolute value
 */
int _abs(int);
/**
 *print_last_digit - prints the last digit of a number
 *@int: integer
 *Return: return the value of last digit
 */
int print_last_digit(int);
/**
 *jack_bauer - prints every minute of the day
 *Return: return 0
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
int add(int a, int b);
/**
 * print_to_98 - print numbers n to 98
 * @n: integer
 */
void print_to_98(int n);
/**
 * print_times_table - print multiplication table up to n
 * @n: integer argument
 */
void print_times_table(int n);
#endif
