'''
The DNA sequence is composed of a series of nucleotides abbreviated as 'A', 'C', 'G', and 'T'.

For example, "ACGAATTCCG" is a DNA sequence. When studying DNA,
it is useful to identify repeated sequences within the DNA.

Given a string s that represents a DNA sequence, Print number of the 10-letter-long sequences
(substrings) that occur more than once in a DNA molecule.

Input Format
A single string s.

Constraints
1 <= s.length <= 10^5
s[i] is either 'A', 'C', 'G', or 'T'.

Output Format
Print number of the 10-letter-long sequences (substrings) that occur more than once in a DNA molecule.
For example in first sampke test case:-
There are two substrings which satisfy the problem statement ["AAAAACCCCC","CCCCCAAAAA"]

Sample Input 0
AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT

Sample Output 0
2

Sample Input 1
AAAAAAAAAAAAA

Sample Output 1
1
'''

class Dna:
    def findRepeatedDNASeq(self, str):
        result = list()
        sdict = dict()
        if len(str) < 10:
            return result
        map = {'A':0, 'C':1, 'G':2, 'T':3}
        sum = 0
        for i in range(len(str)):
            sum = (sum*4+map[str[i]]) & 0xFFFFF
            if i<9:
                continue
            sdict[sum] = sdict.get(sum, 0) + 1
            if sdict[sum] == 2:
                result.append(str[(i-9):(i+1)])
        return result

obj = Dna()
str = input()
print(len(obj.findRepeatedDNASeq(str)))