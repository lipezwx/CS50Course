#include <stdio.h>

/* Prototyping */
void print_row(int n);


int main(void)
{

    /*  Horizontal Printing
    for (int i = 0; i < 4; i++)
    {
        printf("?");
    }   
    printf("\n");
    */

    /*  Vertical Printing
    for (int i = 0; i < 3; i++)
    {
        printf("#\n");
    }   
    */

    /*  Matrices Style Printing
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            printf("#");
        }  
        printf("\n");
    }   
    */

    const int n = 3;

    for (int i = 0; i < 3; i++)
    {
        print_row(n);    
    }

}

void print_row(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
