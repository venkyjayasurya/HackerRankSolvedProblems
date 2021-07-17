'''
Given a string S find all possible substrings of the string in lexicographically-sorted order.

Input Format
A single line of input contains string s.

Constraints
1 <= Length of string <= 16

Output Format
Print all possible substrings of the string in lexicographically-sorted order.

Sample Input 0
abc

Sample Output 0
a ab abc ac b bc c

Sample Input 1
aa

Sample Output 1
a a aa
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
output1=sorted(l)
print(*output1[1:])