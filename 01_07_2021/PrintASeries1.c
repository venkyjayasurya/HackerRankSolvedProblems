/*
Avanthika is weak in the concepts of number series. She is given a number L and has to find L terms of the series
The series is as follows
1, 2, 5, 8,15. . . .

Input Format
You are given an integer p denoting the number of test cases. The next subsequent lines contain an integer L denoting the number of terms till which the series needs to be printed.

Constraints
1<= p<= 100
1<= L<= 50

Output Format
For each test case, print the series up to L terms.

Sample Input 0
2
5
8

Sample Output 0
1 2 5 8 15
1 2 5 8 15 28 51 94

Sample Input 1
3
4
5
6

Sample Output 1
1 2 5 8
1 2 5 8 15
1 2 5 8 15 28
 */

#include<stdio.h>

void integerSeries(int num)
{
    int i;
    if(num >=1)
        printf("1 ");
    if(num >=2)
        printf("2 ");
    if(num >=3)
        printf("5 ");
    int a = 1, b=2, c=5, d;
    for(i=4;i<=num;i++)
    {
        d = a+b+c;
        a = b;
        b = c;
        c = d;
        printf("%d ",d);
    }
    printf("\n");
}

int main()
{
    int x,num;
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
        scanf("%d",&num);
        integerSeries(num);
    }
    return 0;
}