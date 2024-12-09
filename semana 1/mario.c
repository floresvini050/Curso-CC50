#include <stdio.h>


int main(void)
{
    int number;

    do
    {
        printf("How big do you want the pyramid to be? ");
        scanf("%d", &number);

        if (number < 1)
        {
            printf("Invalid number. Only numbers bigger than 0!\n");
        }

    } while (number < 1);
    
    

     for (int i = 1; i <= number; i++)
    {
        for (int a = 0; a < i; a++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
