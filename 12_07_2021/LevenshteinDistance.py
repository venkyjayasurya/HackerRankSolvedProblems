'''
Given two strings s and t. Find the minimum number of operations that need to
be performed on str1 to convert it to str2.
The possible operations are:
Insert
Remove
Replace

Input Format
First line of input contains string s. Next line of input contains string t.

Constraints
1 <= Length of both strings <= 100 Both the strings are in lowercase.

Output Format
Print the minimum number of operations that need to be performed on str1 to convert it to str2.

Sample Input 0
abcde
bcdgf

Sample Output 0
3

Sample Input 1
abcd
bcde

Sample Output 1
2
'''


def editDistance(str1, str2, m, n):
    if m == 0:
        return n
    if n == 0:
        return m
    if str1[m - 1] == str2[n - 1]:
        return editDistance(str1, str2, m - 1, n - 1)
    return 1 + min(editDistance(str1, str2, m, n - 1), editDistance(str1, str2, m - 1, n),
                   editDistance(str1, str2, m - 1, n - 1))


str1 = input()
str2 = input()
print(editDistance(str1, str2, len(str1), len(str2)))
