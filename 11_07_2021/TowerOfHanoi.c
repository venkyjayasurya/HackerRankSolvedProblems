/*
 The tower of Hanoi is a famous puzzle where we have three rods and N disks.
 The objective of the puzzle is to move the entire stack to another rod.
 You are given the number of discs N. Initially, these discs are in the rod 1.
 You need to print all the steps of discs movement so that all the discs reach the 3rd rod.
 Also, you need to find the total moves.

 Note: The discs are arranged such that the top disc is numbered 1 and the bottom-most
 disc is numbered N. Also, all the discs have different sizes and a bigger disc cannot
 be put on the top of a smaller disc.

Input Format
A single integer N.

Constraints
1 <= N <= 16

Output Format
Refer the sample test cases for output format.

Sample Input 0
2

Sample Output 0
move disk 1 from rod 1 to rod 2
move disk 2 from rod 1 to rod 3
move disk 1 from rod 2 to rod 3
3

Sample Input 1
3

Sample Output 1
move disk 1 from rod 1 to rod 3
move disk 2 from rod 1 to rod 2
move disk 1 from rod 3 to rod 2
move disk 3 from rod 1 to rod 3
move disk 1 from rod 2 to rod 1
move disk 2 from rod 2 to rod 3
move disk 1 from rod 1 to rod 3
7

 */

#include <stdio.h>
int solve(int n,char s,char helper,char dest)
{
    static int step=0;
    if(n==1)
    {
        printf("move disk %d from rod %c to rod %c\n",n,s,dest);
        step++;
        return step;
    }
    solve(n-1,s,dest,helper);
    printf("move disk %d from rod %c to rod %c\n",n,s,dest);
    step++;
    solve(n-1,helper,s,dest);
    return step;
}

int main() {
    int n,x;
    scanf("%d",&n);
    char s='1';
    char dest='3';
    char helper='2';
    x=solve(n,s,helper,dest);
    printf("%d",x);
    return 0;
}