/*
Sam given a task to his friend to write a logic to find out sum of digits of a given number.

Input Format
Take input as integer.

Constraints
1<=N<=10000

Output Format
Print integer to console.

Sample Input 0
123

Sample Output 0
6
 */

#include <stdio.h>

int sumOfDigits(int n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n = n/10;
    }
    return sum;
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d", sumOfDigits(num));

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
