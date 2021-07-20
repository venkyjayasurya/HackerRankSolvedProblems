/*
Given an integer N representing the number of pairs of parentheses, the task is to generate all
combinations of well-formed(balanced) parentheses.

Input Format

A single integer N,representing the number of pairs of parentheses.

For example in first sample test case for N=5, following paranthesis can be genrated.

((()))
(()())
(())()
()(())
()()()

Constraints
1 ≤ N ≤ 12

Output Format
Print number of all the balanced parenthesis which are generated.

Sample Input 0
3

Sample Output 0
5

Sample Input 1
1

Sample Output 1
1
 * */

# include<stdio.h>
# define MAX_SIZE 100
int count=0;
void _printParenthesis(int pos, int n, int open, int close);

void printParenthesis(int n){
    if(n > 0)
        _printParenthesis(0, n, 0, 0);
    return;
}

void _printParenthesis(int pos, int n, int open, int close){
    static char str[MAX_SIZE];
    if(close == n){
        count++;
        return;
    }
    else{
        if(open > close){
            str[pos] = ')';
            _printParenthesis(pos+1, n, open, close+1);
        }

        if(open < n){
            str[pos] = '(';
            _printParenthesis(pos+1, n, open+1, close);
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    printParenthesis(n);
    printf("%d",count);
    getchar();
    return 0;
}