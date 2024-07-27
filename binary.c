#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int length(int list[]);
bool binary(int number, int list[], int start, int end);

int main(void)
{
	int numbers[] = {12, 17, 24, 36, 42, 44, 46, 50, 54, 58, 62, 64, 68, 74, 86};

	int num;
	printf("Number to search for: ");
	scanf("%i", &num);

	int l = length(numbers);
	if (binary(num, numbers, 0, l))
	{
		printf("%i is exist\n", num);
	}
	else
	{
		printf("%i is not exist\n", num);
	}
}

bool binary(int number, int list[], int start, int end)
{
	if (end - start <= 0 && list[start] != number)
	{
		return false;
	}
    else if (list[((start + end) / 2)] == number)
	{
		return true;
	}
	else if (list[(start + end) / 2] > number)
	{
		binary(number, list, start, round((start + end) / 2) - 1); 
	}
	else if (list[(start + end) / 2] < number)
	{
		binary(number, list, round((start + end) / 2) + 1, end);
	}
}

int length(int list[])
{
	int counter = 0;
	while (list[counter] != '\0')
	{
		counter++;
	}
	return counter;
}
