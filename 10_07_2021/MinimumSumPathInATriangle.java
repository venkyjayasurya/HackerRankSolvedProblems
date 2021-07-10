/*
Given a triangular structure of numbers, find the minimum path sum from top to bottom.
Each step you may move to adjacent numbers on the row below.

Input Format
First line contains 'n', the number of rows in the traingle.
Next n line contanins the elements present in the array.
First line of triangle contains 1 element,next line contains 2 and so on.

Constraints
1<=n<=20

Output Format
Print the minimum path sum from top to bottom.

For example in first sample test case:-
The triangle looks like:
  2
 3 4
6 5 7
4 1 8 3
The minimum path sum from top to bottom is 2 + 3 + 5 + 1 = 11

Sample Input 0
4
2
3 4
6 5 7
4 1 8 3

Sample Output 0
11

Sample Input 1
1
10

Sample Output 1
10
 */


 import java.io.*;
 import java.util.*;
 import java.util.Scanner;

 public class MinimumSumPathInATriangle {
     public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         int n=sc.nextInt();
         int sum=0;
         int temp2=0;
         int[][] arr=new int[n][n];
         for(int i=0;i<n;i++)
         {
             for(int j=0;j<=i;j++)
             {
                 arr[i][j]=sc.nextInt();
             }
         }
          for(int i=0;i<n;i++)
         {
             int k=arr[i][0];
             for(int j=0;j<=i;j++)
             {
                 if(arr[i][j]<k)
                 {
                     k=arr[i][j];
                 }
             }
              sum=sum+k;
         }
         System.out.println(sum);
     }
 }