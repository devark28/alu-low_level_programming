/**
 * find_sqrt - function that returns square
 * @n: number
 * @g: number guess
 * Return: natural root or -1
 */
int find_sqrt(int n, int g)
{
	if (g * g == n)
		return g;

	if (g * g > n)
		return -1;

	return find_sqrt(n, g + 1);
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;

	return find_sqrt(n, 0);
}
