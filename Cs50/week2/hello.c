#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string username = get_string("Tell me your name: ");
    printf("Hello, %s !\n", username);
}