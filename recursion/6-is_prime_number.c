/**
 * check_prime - function that checks inputted number is prime or not
 * @n: number
 * @d: number divisor
 * Return: either 1 or 0
 */
int check_prime(int n, int d)
{
	if (d * d > n)
		return (1);

	if (n % d == 0)
		return (0);

	return (check_prime(n, d + 1));
}

/**
 * is_prime_number - function checks if number is prime
 * @n: number
 * Return: either 0 or 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_prime(n, 2));
}
