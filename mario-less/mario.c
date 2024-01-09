// Take an integer input between 1-8 inclusive and create a right-aligned pyramid of #'s
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height_input;
    do
    {
        height_input = get_int("Height: ");
    }
    while (height_input < 1 || height_input > 8);

    for (int i = 0; i < height_input; i++)
    {
        string blocks = "#";
        string spaces = " ";

        for (int j = i + 1; j < height_input; j++)
        {
            printf("%s", spaces);
        }

        for (int k = height_input - i; k <= height_input; k++)
        {
            printf("%s", blocks);
        }

        printf("\n");
    }
}
