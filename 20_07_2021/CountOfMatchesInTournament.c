/*
You are given an integer n, the number of teams in a tournament that has strange rules:

If the current number of teams is even, each team gets paired with another team.
 A total of n/2 matches are played, and n/2 teams advance to the next round.

If the current number of teams is odd, one team randomly advances in the tournament,
 and the rest gets paired. A total of (n - 1)/2 matches are played, and (n - 1)/2+1 teams advance to the next round.
Print the number of matches played in the tournament until a winner is decided.

Input Format
A single integer n, the number of teams in a tournament.

Constraints
1 <= n <= 200

Output Format
Print the number of matches played in the tournament until a winner is decided.

For example for first sample test case:- - 1st Round: Teams = 7, Matches = 3, and 4 teams advance.
2nd Round: Teams = 4, Matches = 2, and 2 teams advance.
3rd Round: Teams = 2, Matches = 1, and 1 team is declared the winner.
Total number of matches = 3 + 2 + 1 = 6.

For second sample test case:- - 1st Round: Teams = 14, Matches = 7, and 7 teams advance.
2nd Round: Teams = 7, Matches = 3, and 4 teams advance.
3rd Round: Teams = 4, Matches = 2, and 2 teams advance.
4th Round: Teams = 2, Matches = 1, and 1 team is declared the winner.
Total number of matches = 7 + 3 + 2 + 1 = 13.

Sample Input 0
7

Sample Output 0
6

Sample Input 1
14

Sample Output 1
13
 * */

#include <stdio.h>

int main() {
    int ans=0,n;
    scanf("%d",&n);
    while(n>0){
        ans=ans+n/2;
        n=(n+1)/2;
        if(n==1){
            break;
        }
    }
    printf("%d",ans);
    return 0;
}