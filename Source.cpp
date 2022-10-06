#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void main()
{
	srand(time(NULL));
	int a, b, d, c, p, q, r;
	printf("Program have 2 modes \n");
	printf("First mode : program have a number from 1 to 1000, user need guess this number, program write <, >, or = \n");
	printf("When user choose right number - program complete \n");
	printf("Second: User have a number from 1 to 1000, program try guess, user write <, >, or = \n");
	printf("When program choose right number - program complete \n");
	printf("Choose first or second mode: ");
	scanf_s("%i", &a);
	while(2 < a || a == 0)
	{
		printf("Wrong mode. Try to choose your mode one more time: ");
		scanf_s("%i", &a);
	}
	if (a == 1)
	{
		b = 1 + rand() % (1000 - 1 + 1);
		c = 1;
		printf("First program \n");
		printf("Guess a number: ");
		scanf_s("%i", &d);
		while (d != b)
		{
			if (d < b)
			{
				printf("< \n");
				printf("Guess a number one more time: ");
				scanf_s("%i", &d);
				c += 1;
			}
			else if (d > b)
			{
				printf("> \n");
				printf("Guess a number one more time: ");
				scanf_s("%i", &d);
				c += 1;
			}
		}
		printf("= \n");
		printf("Number of attempts - %i", c);
	}
	else
	{
		printf("Second program(Info for user. 1 - <, 2 - >, 3 - =) \n");
		printf("Write a number: ");
		scanf_s("%i", &d);
		b = 1 + rand() % (1000 - 1 + 1);
		c = 1;
		q = 1000;
		r = 1;
		printf("Computer: is it %i? \n", b);
		printf("Answer for computer: ");
		scanf_s("%i", &p);
		while (p != 3)
		{
			if (p == 1)
			{
				q = b - 1;
				b = r + rand() % (q - r + 1);
				c += 1;
				printf("Computer: is it %i? \n", b);
				printf("Answer for computer: ");
				scanf_s("%i", &p);
			}
			if (p == 2)
			{
				r = b + 1;
				b = r + rand() % (q - r + 1);
				c += 1;
				printf("Computer: is it %i? \n", b);
				printf("Answer for computer: ");
				scanf_s("%i", &p);
			}
		}
		printf("= \n");
		printf("Number of attempts - %i", c);
	}
}