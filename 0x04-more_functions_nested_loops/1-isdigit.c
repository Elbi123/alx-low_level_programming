/**
 * _isdigit - check the code for Holberton School students.
 * @c: integer value
 * Return: return 1 on success or 0 failure.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
