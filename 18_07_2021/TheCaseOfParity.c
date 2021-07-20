/*
 You are given two positive integers n (1≤n≤109) and k (1≤k≤100).
 Represent the number n as the sum of k positive integers of the same parity
 (have the same remainder when divided by 2).

In other words, find a1,a2,…,ak such that all ai>0, n=a1+a2+…+ak and either
 all ai are even or all ai are odd at the same time.

If such a representation does not exist, then report it.

Input Format
The first line contains an integer t — the number of test cases in the input.
 Next, t test cases are given, one per line.

Each test case is two positive integers n and k .

Constraints
(1≤t≤1000) (1≤n≤10^9) (1≤k≤100)

Output Format
For each test case print:

YES and the required values ai, if the answer exists (if there are several answers, print any of them); NO if the answer does not exist.

Sample Input 0
2
10 3
100 4

Sample Output 0
YES
2 2 6
YES
1 1 1 97

Sample Input 1
2
8 7
97 2

Sample Output 1
NO
NO
 * */

#include<stdio.h>

void SPS(int n, int k){
    if(((n-k)>=0 && (n-k)%2==0) || ((n-2*k)>=0 && (n-2*k)%2==0)){
        printf("YES\n");
        if((n-k)%2==0){
            for(int i=0; i<k-1; ++i){
                printf("1 ");
            }
            printf("%d\n", 1+n-k);
        } else {
            for(int i=0; i<k-1; ++i){
                printf("2 ");
            }
            printf("%d\n", 2+n-2*k);
        }
    } else {
        printf("NO\n");
    }
}
int main(){
    int t, n, k;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &n, &k);
        SPS(n, k);
    }
    return 0;
}