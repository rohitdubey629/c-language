lea /*write a c program to find power of a number using for loop.
ex   input =2
     input =5
     2 ki power is 5
     ex 2*2*2*2*2=32
*/

#include <conio.h>
#include <stdio.h>
int main()
{
    int i, base, num = 1, last;
    printf("Enter the base");
    scanf("%d", &base);
    printf("Enter the last");
    scanf("%d", &last);
    for (i = 1; i <= last; i++)
    {
        num = num * base;
    }
    printf("%d ^ %d= %d", base, last, num);
    return 1;
};