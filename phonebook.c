#include <stdio.h>
#include <string.h>

int main (void)
{
    string names []= {"carter", "David"};
    string numbers [] = {"+1-617-456-1000", "+1-987-778-2750"};
    
    for (int i = 0; i < 2; i++)
    {
        if (strcmp (names[i], "david") == 0)
        {
            printf("Found %s\n", numbers[i]");
            return 0;
        }
    }
    printf("Not found\n");
    return 1:
}
