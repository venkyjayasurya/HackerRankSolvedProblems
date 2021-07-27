/*
 Bob is preparing to pass IQ test. The most frequent task in this test is to find out which one
 of the given n numbers differs from the others. Bob observed that one number usually differs
 from the others in evenness. Help Bob — to check his answers, he needs a program that among
 the given n numbers finds one that is different in evenness.

Input Format
The first line contains integer n — amount of numbers in the task.
 The second line contains n space-separated natural numbers, not exceeding 100.
 It is guaranteed, that exactly one of these numbers differs from the others in evenness.

Constraints
(3 ≤ n ≤ 100)

Output Format
Output index of number that differs from the others in evenness. Numbers are numbered from 1 in the input order.

Sample Input 0
5
2 4 7 8 10

Sample Output 0
3

Sample Input 1
4
1 2 1 1

Sample Output 1
2
 * */
#include <iostream>
using namespace std;
int main()
{
    int n,i,j=0,k=0,a,b;
    cin >> n;
    int*p = new int[n];
    for (i = 0; i < n; i++){
        cin >> p[i];
        if (p[i] % 2 == 0){
            j++;
            if (j == 1)
                a = i+1;
        } else {
            k++;
            if (k == 1)
                b = i+1;
        }
    }
    if (k == 1)
        cout << b<<endl;
    else
        cout << a << endl;
}