'''
Given an array arr of N integers. Find the contiguous sub-array with maximum sum.

Input Format
First line of input contains integer n.
Next line of input contains n space separated integers which are the elements of the array.

Constraints
1 ≤ N ≤ 106
-10^7 ≤ A[i] <= 10^7

Output Format
Print the sum of subarray with maximum sum.

Sample Input 0
5
1 2 3 -2 5

Sample Output 0
9

Sample Input 1
4
-1 -2 -3 -4

Sample Output 1
-1
'''

def maxSubArraySum(a,size):
    max_so_far = - 1
    max_ending_here = 0
    for i in range(0, size):
        max_ending_here = max_ending_here + a[i]
        if (max_so_far < max_ending_here):
            max_so_far = max_ending_here
        if max_ending_here < 0:
            max_ending_here = 0
    return max_so_far

n = int(input())
l = list(map(int,input().split()))
print(maxSubArraySum(l,n))