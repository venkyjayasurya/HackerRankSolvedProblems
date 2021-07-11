/*
Given the total number of persons n and a number k which indicates that k-1 persons are
 skipped and kth person is killed in circle in a fixed direction.
The task is to choose the safe place in the circle so that when you perform these operations
 starting from 1st place in the circle, you are the last one remaining and survive.

Input Format
First line of input contains 'n'. Second line of input contains 'k'.

Constraints
1 <= k, n <= 20

Output Format
Return an integer denoting safe position.

Sample Input 0
3
2

Sample Output 0
3

Sample Input 1
5
3

Sample Output 1
4

 Contest Link: https://www.hackerrank.com/contests/vjit-grand-test-pbt/
*/

#include <stdio.h>
int josephus(int n, int k)
{
    if (n == 1)
        return 1;
    else
        return (josephus(n - 1, k) + k - 1) % n + 1;
}

int main() {
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    printf("%d", josephus(n, k));
    return 0;
}
