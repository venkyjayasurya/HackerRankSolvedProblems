/*

 Shawn just learnt the concept of prime numbers where in now he is given a number N and his task is to
 check if that given number can be expressed as the sum of two prime numbers.

Input Format
Read a number N as integer.

 Constraints
1<=N<=1000

Output Format
Print whether the given number can be expressed as sum of 2 prime numbers(as in sample output),
 if it cannot be expressed, print NO.

 Sample Input 0
20

Sample Output 0
20 can be expressed as the sum of 3 and 17
20 can be expressed as the sum of 7 and 13
 */

#include <stdio.h>
#include <stdlib.h>
int checkPrime(int n);
int main() {
    int n, i, flag = 0;
    scanf("%d", &n);
    if(n>1000){
        printf("No");
        exit(0);
    }
    for (i = 2; i <= n / 2; ++i) {
        if (checkPrime(i) == 1) {
            if (checkPrime(n - i) == 1) {
                printf("%d can be expressed as the sum of %d and %d\n", n, i, n - i);
                flag = 1;
            }
        }
    }
    if (flag == 0){
        printf("No");
    }
    return 0;
}

int checkPrime(int n) {
    int i, isPrime = 1;
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}