# include <stdio.h>
# include <stdlib.h>
int main (void)
{
    int x;
    printf ("x: ");
    scanf("%i", &x);
    printf("x: %i\n",x);
}


or 

{
    char *s;
    printf ("s: ");
    scanf ("%s,s");
    printf("s: %s\n",s);

}

Reallocate using malloc - make space for it 


{
    char *s = malloc(4); 
//0r can use for character limit 
////char s(4);
    printf("s: "):
    scanf("%s",s);
    printf("s:%s\n",s);
}
