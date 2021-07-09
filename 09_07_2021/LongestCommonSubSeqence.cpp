/*
Given two sequences, find the length of longest subsequence present in both of them.
Both the strings are of uppercase.

Input Format
First line of input contains 'n', size of first string.
Second line of input contains 'm', size of second string.
Third line of input contains string s1.
Fourth line of input contains string s2.

Constraints
1<=size(str1),size(str2)<=103

Output Format
Print the length of longest subsequence present in both of them.

Sample Input 0
6
6
ABCDGH
AEDFHR

Sample Output 0
3

Sample Input 1
3
2
ABC
AC

 Sample Output 1
2
*/

#include<iostream>
#include<cstring>
using namespace std;
int main() {
    const int N=1010;
    char a[N],b[N];
    int n,m;
    int f[N][N];
    cin >> n >> m >> a+1 >> b+1;
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= m ; j ++){
            f[i][j]=max(f[i-1][j],f[i][j-1]);
            if(a[i]==b[j]) f[i][j]=max(f[i][j],f[i-1][j-1]+1);
        }
    }
    cout << f[n][m] << endl;
    return 0;
}