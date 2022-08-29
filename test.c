#include<stdio.h>
void main( )
{ 
int x, y;
x=20;
y=30;
printf("\n Value of a and b before function call = %d%d",a,b);
fucn(&x,&y);
printf("\n Value of a and b after function call = %d%d", a,b);
}
fucn(p,q)
int p,q;
{
*p=*p + *p;
*q=*q + *q;
}