/*
 In the stock market, a person buys a stock and sells it on some future date.
 Given the stock prices of N days in an array A[ ] and a positive integer K,
 find out the maximum profit a person can make in at-most K transactions.
 A transaction is equivalent to (buying + selling) of a stock and new transaction can
 start only when the previous transaction has been completed.

 Input Format
  First line of input contains two integers 'K' and 'N'.
  Next line of input contains N integers which are the elements of array 'A'.

 Constraints
 1 ≤ N ≤ 500 1 ≤ K ≤ 200 1 ≤ A[ i ] ≤ 1000

 Output Format
 Print the maximum profit.

 Sample Input 0
 2 6
 10 22 5 75 65 80

 Sample Output 0
 87

 Sample Input 1
 3 4
 20 580 420 900

 Sample Output 1
 1040
 */

 import java.io.*;
 import java.util.Scanner;
 class BuyAndSellStock {
     static int maxProfit(int price[], int n, int k){
         int profit[][] = new int[k + 1][ n + 1];
         for (int i = 0; i <= k; i++)
             profit[i][0] = 0;
         for (int j = 0; j <= n; j++)
             profit[0][j] = 0;
         for (int i = 1; i <= k; i++){
             int prevDiff = Integer.MIN_VALUE;
             for (int j = 1; j < n; j++){
                 prevDiff = Math.max(prevDiff, profit[i - 1][j - 1] - price[j - 1]);
                 profit[i][j] = Math.max(profit[i][j - 1], price[j] + prevDiff);
             }
         }
         return profit[k][n - 1];
     }


 public static void main (String[] args){
         Scanner sc=new Scanner(System.in);
         int k=sc.nextInt();
         int n=sc.nextInt();
         int[] price=new int[n];
         for(int i=0;i<n;i++){
             price[i]=sc.nextInt();
         }
         System.out.println(maxProfit(price, n, k));
     }
 }