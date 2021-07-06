/*
Samual is given a number, for each digit that makes up the number determine whether it is a divisor. Samual has to Count the number of divisors occurring within the number.

Note: Each digit is considered to be unique, so each occurrence of the same digit should be counted

Input Format:
The first line is an integer T, indicating the number of test cases.
The subsequent lines each contain an integer N.

Constraints:
1<=T<=15
1<=N<=10000

Output Format:
Count the number of digits in n that are divisors of n.
Print each answer on a new line.

Sample Input 0:
2
12
1012

Sample Output 0:
23

Sample Input 1
3
1
2345
12345

Sample Output 1
113
 */

#include<stdio.h>
int main()
{
    int num;
    scanf("%d\n",&num);
    for(int i=1;i<=num;i++)
    {
        int x;
        scanf("%d\n",&x);
        int t=x;
        int a,b=0;
        while(t>0)
        {
            a=t%10;
            if(a!=0 && x%a==0)
                b++;
            t=t/10;
        }
        printf("%d",b);
    }
    return 0;
}