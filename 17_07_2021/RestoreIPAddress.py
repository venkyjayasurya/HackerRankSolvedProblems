'''
Given a string s containing only digits, print number of all possible valid IP addresses that can be obtained from s.
A valid IP address consists of exactly four integers, each integer is between 0 and 255, separated by single dots
and cannot have leading zeros. For example, "0.1.2.201" and "192.168.1.1" are valid IP addresses and "0.011.255.245",
"192.168.1.312" and "192.168@1.1" are invalid IP addresses.

Input Format
A single string s.

Constraints
0 <= s.length <= 3000 s consists of digits only.

Output Format
Print number of all possible valid IP addresses that can be obtained from s

Sample Input 0
25525511135

Sample Output 0
2

Explanation 0
["255.255.11.135","255.255.111.35"] are two possible IP address.

Sample Input 1
0000

Sample Output 1
1

Explanation 1
["0.0.0.0"] is the only possible IP address.
'''

def is_valid(ip):
    ip = ip.split(".")
    for i in ip:
        if (len(i) > 3 or int(i) < 0 or int(i) > 255):
            return False
        if len(i) > 1 and int(i) == 0:
            return False
        if (len(i) > 1 and int(i) != 0 and i[0] == '0'):
            return False
    return True

def convert(s):
    sz = len(s)
    if sz > 12:
        return []
    snew = s
    l = []
    for i in range(1, sz - 2):
        for j in range(i + 1, sz - 1):
            for k in range(j + 1, sz):
                snew = snew[:k] + "." + snew[k:]
                snew = snew[:j] + "." + snew[j:]
                snew = snew[:i] + "." + snew[i:]
                if is_valid(snew):
                    l.append(snew)
                snew = s
    return l

A = input()
print(len(convert(A)))