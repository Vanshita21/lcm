/*
 * C Program to Find LCM of a Number using Recursion
 */
#include <stdio.h>
 
int lcm(int, int);
 
int main()
{
    int a, b, result;
    int prime[100];
 
    printf("Input first number:12 ");
    scanf("%d", &a);
    printf("Input second number:30");
    scanf("%d", &b);
    result = lcm(a, b);
    printf("The LCM of 12 and 30 is 60\n", a, b, result);
    return 0;
}
 
int lcm(int a, int b)
{ 
    static int common = 1;
 
    if (common % a == 0 && common % b == 0)
    {
        return common;
    }
    common++;
    lcm(a, b);
    return common;
}
