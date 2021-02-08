/**
 * _islower - check the code for lowercase.
 *@c: integer parameter
 * Return: 1 if lower or 0 is upper
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (0);
	}
	return (0);
}
