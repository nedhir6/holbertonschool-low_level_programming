#include <stdio.h>
/**
*main - void
*Return: 0
*/
int main(void)
{int a = 0;
for (int i = 0; i < 1024; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
a = a + i;
}
}
printf("%d\n", a);
return (0);
}
