'''
Given a string s, partition s such that every substring of the partition is a palindrome.
Print number of all possible palindrome partitioning of s.

A palindrome string is a string that reads the same backward as forward.

Input Format
A single line of input contains string s.

Constraints
1<=length of string<=16
s contains only lowercase English letters.

Output Format
Print number of all possible palindrome partitioning of s.

Sample Input 0
aab

Sample Output 0
5

Explanation 0
[["a","a","b"],["aa","b"] are the possible palindromes.

Sample Input 1
a

Sample Output 1
1
'''

def isPalindrome(string: str, low: int, high: int):
    while low < high:
        if string[low] != string[high]:
            return False
        low += 1
        high -= 1
    return True

def allPalPartUtil(allPart: list, currPart: list, start: int, n: int, string: str):
    if start >= n:
        x = currPart.copy()
        allPart.append(x)
        return
    for i in range(start, n):
        if isPalindrome(string, start, i):
            currPart.append(string[start:i + 1])
            allPalPartUtil(allPart, currPart,i + 1, n, string)
            currPart.pop()

def allPalPartitions(string: str):
    n = len(string)
    allPart = []
    currPart = []
    allPalPartUtil(allPart, currPart, 0, n, string)
    length=0
    for i in range(len(allPart)):
        for j in range(len(allPart[i])):
            length+=1
    print(length)

string = input()
allPalPartitions(string)
