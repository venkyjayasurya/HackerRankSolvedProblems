'''
You are given a string. You need to print the lexicographically sorted power-set of the string.
Note: The string s contains lowercase letter of alphabet.

Input Format
Single line of input contains string s.

Constraints
1 <= |s| <= 10

Output Format
Print the lexicographically sorted power-set of the string.
For dirst sample test case:- empty string and a are only sets
Note:- One of the power set will be empty set represented by space. So output will always start with space.

Sample Input 0
a

Sample Output 0
a

Sample Input 1
abc

Sample Output 1
a ab abc ac b bc c

Test Link: https://www.hackerrank.com/contests/vjit-grand-test-pbt
'''

l=[]
def printSubsequence(input, output):
    if len(input) == 0:
        l.append(output)
        return
    printSubsequence(input[1:], output+input[0])
    printSubsequence(input[1:], output)

output = ""
input = input("")

printSubsequence(input, output)
print(*sorted(l))