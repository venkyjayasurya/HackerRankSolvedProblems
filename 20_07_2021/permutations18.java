/*
Given an array nums of distinct integers, print the number of all the possible permutations.

Input Format
First line of input contains n - the size of array. Next line of input contains n integers - the n elements of array.

Constraints
1 <= nums.length <= 6
-10 <= nums[i] <= 10

All the integers of nums are unique.

Output Format
Print the number of all the possible permutations.

Sample Input 0
3
1 2 3

Sample Output 0
6

Sample Input 1
2
0 1

Sample Output 1
2
 */

 import java.io.*;
 import java.util.*;

 public class permutations18 {
     public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         int n=sc.nextInt();
         int fact=1;
         for(int i=0;i<n;i++){
             int a=sc.nextInt();
         }
         for(int i=1;i<=n;i++){
             fact=fact*i;
         }
         System.out.println(fact);
     }
 }