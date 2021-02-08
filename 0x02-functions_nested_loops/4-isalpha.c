/**
 * _isalpha - check the code for only alpha.
 *@c: integer value
 * Return: 1 if alpha else 0.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
