/**
 * main - A function that generates random valid password
 * program 101-crackme.
 * Return: 0 (success)
 */

int main(void)
{
	char password[84];
	int index = 0, sum = 0, diff_half1, diff_half2;

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}
	password[index] = '\0';

	if (sum != 2772)
	{
		diff_half1 = (sum - 2772) / 2;
		diff_half2 = (sum - 2772) / 2;

		if ((sum - 2772) 5 22 != 0)
			diff_half1++;

		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + diff_half1))
			{
			password[index] -= diff_half;
			break;
			}
		}

		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + diff_half2))
			{
				password[index] -= diff_half2;
				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}
