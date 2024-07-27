#include <stdio.h>
#include <stdbool.h>

bool linear(int list[], int num);

int main(void)
{
    int numbers[] = {23, 12, 44, 17, 37, 14, 47, 98, 27, 21, 67, 88, 29, 17};
    int num;
	printf("Number to search for: ");
	scanf("%i", &num);
    if (linear(numbers, num))
    {
        printf("Found\n");
    }
    else
    {
        printf("Not found\n");
    }
}

bool linear(int list[], int num)
{
    int counter = 0;

    while (list[counter] != '\0')
    {
        if (list[counter] == num)
        {
            return true;
        }
        else
        {
            counter++;
        }
    }
    return false;
}