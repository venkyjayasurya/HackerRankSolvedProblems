/*
 Three swimmers decided to organize a party in the swimming pool! At noon,
 they started to swim from the left side of the pool.

It takes the first swimmer exactly a minutes to swim across the entire pool and come back,
 exactly b minutes for the second swimmer and c minutes for the third. Hence, the first swimmer will be on the left side of the pool after 0, a, 2a, 3a, ... minutes after the start time, the second one will be at 0, b, 2b, 3b, ... minutes, and the third one will be on the left side of the pool after 0, c, 2c, 3c, ... minutes.

You came to the left side of the pool exactly p minutes after they started swimming.
 Determine how long you have to wait before one of the swimmers arrives at the left side of the pool.

Input Format
The first line of the input contains a single integer t (1≤t≤1000) — the number of test cases.
 Next t lines contains test case descriptions, one per line.

Each line contains four integers p, a, b and c (1≤p,a,b,c≤10^18), time in minutes after the start,
 when you came to the pool and times in minutes it take the swimmers to cross the entire pool and come back.

Constraints
(1≤t≤1000) (1≤p,a,b,c≤10^18)

Output Format
For each test case, output one integer — how long you have to wait (in minutes) before one of
 the swimmers arrives at the left side of the pool.

Sample Input 0
4
9 5 4 8
2 6 10 9
10 2 5 10
10 9 9 9

Sample Output 0
1
4
0
8

Sample Input 1
2
1 2 3 4
1000000000000000000 1000000000000000000 1000000000000000000 1000000000000000000

Sample Output 1
1
0
 * */
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    long long t, a, b, c, p;
    scanf("%lld", &t);
    while (t--)
    {
        scanf("%lld%lld%lld%lld", &p, &a, &b, &c);
        a = (a-p%a)%a;
        b = (b-p%b)%b;
        c = (c-p%c)%c;
        printf("%lld\n", min(a, min(b, c)));
    }
    return 0;
}