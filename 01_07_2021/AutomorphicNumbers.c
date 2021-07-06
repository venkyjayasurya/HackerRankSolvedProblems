/*
John asked this time to Smith write a logic to check whether a number
is Automorphic number or not An automorphic number is a number whose
square ends with the number itself.

Example :
 6 is an automorphic number, 6*6 =36. The last digit is 6
which same as the given number.

Input Format
The first line contains an integer value n

Constraints
1<=N<=10000

Output Format
Print yes or no

Sample Input 0
6

Sample Output 0
Yes
 */

#include <stdio.h>

void automorphic(int x){
    int y = x;
    y = y*y;
    int z = y%10;
    if(x == z){
        printf("Yes");
    }else{
        printf("No");
    }
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num;
    scanf("%d",&num);
    automorphic(num);
    return 0;
}
