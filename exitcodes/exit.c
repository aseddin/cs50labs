#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 3)
    {
        printf("Invalid number of command-line arguments!\n");
    }
    else
    {
        // prints out hello followed by firstname, lastname  
        printf("hello, %s %s\n", argv[1], argv[2]);
    }
}