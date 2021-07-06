/*
 John given task to his friend in order to check whether a triangle is valid or not if angles are given using if else.

**Property of a triangle : **

image

Note : A triangle is said to be a valid triangle if and only if sum of angles is 180 deg.

Input Format
Take input as 3 integers as a angles.

Constraints
NA

Output Format
Print string as a output.

"Triangle is Valid" if it is valid
"Triangle is not Valid" if it is not valid

 Sample Input 0
30 60 90

 Sample Output 0
Triangle is Valid
 */

#include<stdio.h>

int main() {
    int a=0, b=0, c=0;
    scanf("%d %d %d", &a, &b, &c);
    if(a+b+c == 180){
        printf("Triangle is Valid");
    }else{
        printf("Triangle is not Valid");
    }
    return 0;
}