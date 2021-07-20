'''
Given a n x n matrix inmatrix of positive integers, print an integer outnum based on the below logic.
Identify all possible sets in inmatrix that contain at least four consecutive elements of the same value val,
either horizontally, vertically, or diagonally
If only one set of consecutive elements is identified, store the value val in outnum
If more than one set of consecutive elements is identified, find the smallest value and store it in outnum
If no set of four consecutive elements of the same value is identified either horizontally, vertically, or
diagonally, print-1

Input Format
First line will contain number of rows n of inmatrix.
The next n lines will contain the elements of inmatrix. Each line will have n elements separated by space.

Constraints
4<=n<=100

Output Format
Print outnum.

For example in the first sample test case:- Following elements are present consecutively at
least four times: Element 3 horizontally in the 5th row. Element 1 diagonally starting from the
2nd column in the first row. Element 6 diagonally starting from the 4th column in the second row.
Element 9 vertically in the 6th column. As element 1 is the smallest value of the four identified
sets of consecutive values, the output is 1.

Sample Input 0
5
0 1 6 8 8 9
5 6 1 6 8 9
6 5 6 1 1 9
1 6 6 1 1 9
6 3 3 3 3 9

Sample Output 0
1

Sample Input 1
5
0 1 6 8 6 0
5 5 2 1 8 2
6 5 6 1 1 9
1 5 6 1 4 0
3 7 3 3 4 0

Sample Output 1
-1
'''

def FreqCheck(arr):
    elements_count = {}
    a=[]
    for element in arr:
        if element in elements_count:
            elements_count[element] += 1
        else:
            elements_count[element] = 1
    for key, value in elements_count.items():
        if(value>=4):
            return key

def get_rows(grid):
    return [[c for c in r] for r in grid]
def get_cols(grid):
    return zip(*grid)
def get_backward_diagonals(grid):
    b = [None] * (len(grid) - 1)
    grid = [b[i:] + r + b[:i] for i, r in enumerate(get_rows(grid))]
    return [[c for c in r if c is not None] for r in get_cols(grid)]

n=int (input())
grid=[]
for i in range(n):
    grid.append(list(map(int,input().split(" "))))
FinalList=[]
for i in range(n):
    FinalList.append(FreqCheck(grid[i]))
columns = [[grid[j][i] for j in range(len(grid))] for i in range(len(grid[0]))]
for i in range(len(columns)):
    FinalList.append(FreqCheck(columns[i]))
diagonals=get_backward_diagonals(grid)
for i in range(len(diagonals)):
    FinalList.append(FreqCheck(diagonals[i]))

FinalList=[i for i in FinalList if i]
if len(FinalList)==0:
    print('-1')
else:
    print(min(FinalList))