#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)

{
    string answer = get_string("what's your name ? : ");
    printf("hello, %s/n", answer);
}