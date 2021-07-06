/*
 Avanthika is weak in the concepts of number series. She is given a number L and has to find L terms of the series.

The series is as follows

1, 2, 5, 8,15. . . .

Input Format:
You are given an integer p denoting the number of test cases. The next subsequent lines contain an integer L
 denoting the number of terms till which the series needs to be printed.

Constraints:
p > 0, L > 0

Output Format:
For each test case, print the series up to L terms.

Sample Input 0:
2
5
8

Sample Output 0:
1 2 5 8 15
1 2 5 8 15 28 51 94

 Sample Input 1:
3
4
5
6

Sample Output 1:
1 2 5 8
1 2 5 8 15
1 2 5 8 15 28
 */

#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    while(num--)
    {
        int n;
        long long int x[51];
        scanf("%d",&n);
        x[0]=1;
        x[1]=2;
        x[2]=5;
        for(int i=3;i<n;i++)
        {
            x[i]=x[i-1]+x[i-2]+x[i-3];
        }
        for(int i=0;i<n;i++)
        {
            printf("%lld ",x[i]);
        }
        printf("\n");
    }
    return 0;
}