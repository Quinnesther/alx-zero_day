#include < stdib.h >
#includwe < time.h >
/*more headers go here*/
#include <stdio.h>
 /*betty style doc for function main goes here*/
/**
 *  main -use to check for conditions
 *
 *   Description: return the result when the conditions are meet
 *
 *   Return: return integer 0
 *
 */
int main(void)
{
int n;
srand (time (0))
n = rand() - RAND_MAX / 2
 /* your code goes here*/
if (n > 0)
{
printf("%d is possitive\n", n)
}
if (n > 0)
{
printf("%d is zero\n", n)
}
else
{
rintf("%d is negative\n", n)
}
return (0)
}
