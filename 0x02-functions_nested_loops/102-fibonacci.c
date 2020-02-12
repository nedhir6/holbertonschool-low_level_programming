#include <stdio.h>
/**
*main - void
*Return: 0
*/
int main(void)
{
int i = 0;
long int t1 = 1;
long int t2 = 2;
printf("%ld, ", t1);
printf("%ld, ", t2);
for (i = 1; i <= 48; i++) 
{
printf("%ld, ", t1 + t2);
t2 = t1 + t2;
t1 = t2 - t1;
}
printf("%ld\n",t1 + t2);
return (0);}
