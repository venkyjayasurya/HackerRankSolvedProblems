/*
Given an array of integers, find the length of the longest (strictly) increasing
 subsequence from the given array.

Input Format
First line contains a single integer n the size of the array.
 Next line contains n integers the eleemnts of the array

Constraints
1 ≤ N ≤ 10^5 0 ≤ elements of array ≤ 10^6

Output Format
Print the length of the longest increasing subsequence.

For example, in first sample test case:- Longest increasing subsequence 5 7 9, with length 3
Sample Input 0
6
5 8 3 7 9 1

Sample Output 0
3

Sample Input 1
5
1 2 3 4 5

Sample Output 1
5
 * */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int _lis(int arr[], int n, int* max_ref){
    if (n == 1)
        return 1;
    int res, max_ending_here = 1;
    for (int i = 1; i < n; i++) {
        res = _lis(arr, i, max_ref);
        if (arr[i - 1] < arr[n - 1] && res + 1 > max_ending_here)
            max_ending_here = res + 1;
    }
    if (*max_ref < max_ending_here)
        *max_ref = max_ending_here;
    return max_ending_here;
}

int lis(int arr[], int n){
    int max = 1;
    _lis(arr, n, &max);
    return max;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("%d", lis(arr, n));
    return 0;
}