#include <stdio.h>
#include <string.h>

int main (void)
{
    string names[] = {"Bill" ,"Charlie","Arun", "Aruna", "junny", "pursy", "ruck"};

    for (int i = 0 ; 1 < 7; i++)
    {
        if (strcmp(names(i), "Hermonie"))
        {   
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}

