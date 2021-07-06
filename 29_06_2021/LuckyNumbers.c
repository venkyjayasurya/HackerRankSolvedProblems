/*
 Suppose you live in a country where 1, 7, and 9 are lucky digits. A lucky number for you is a
 number that contains only your lucky digits in it.

Example: 1, 71, 999,1917 etc., are lucky, where as 5, 175, 90, 570 are not. Given a integer N,
 count the number of lucky numbers in the range [1,N].

Input Format
Input contains one number n.

Constraints
2 <= n <= 100000

Output Format
Output contains the count of numbers less than or equal to n which are lucky

Sample Input 0
8

Sample Output 0
2

Sample Input 1
571

Sample Output 1
21
 */

#include<stdio.h>

int luckyNum(long long int num)
{
    while(num>0)
    {
        if(!(num%10==1 || num%10==7 || num%10==9))
            return 0;
        num = num/10;
    }
    return 1;
}

int main()
{
    long long int num,i,count = 0;
    scanf("%lld",&num);

    for(i=1;i<=num;i++)
    {
        count += luckyNum(i);
    }

    printf("%lld\n",count );
    return 0;
}
