#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main - void
*Return: 0
*/
int main(void)
{int n;
int d;
srand(time(0));
n = rand() - RAND_MAX / 2;
d = n % 10;
if (d > 5)
{
printf("Last digit of %d", n);
printf(" is %d", d);
printf(" and is greater than 5\n");
}
else if (d == 0)
{
printf("Last digit of %d", n);
printf(" is %d", d);
printf(" and is 0\n");

}
else
{
printf("Last digit of %d", n);
printf(" is %d", d);
printf(" and is less than 6 and not 0\n");
}
return (0); }
