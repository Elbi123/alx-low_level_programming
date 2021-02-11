/**
 * _isupper - check the code for Holberton School students.
 * @c: integer value
 * Return: 1 in success or 0 is failure.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
