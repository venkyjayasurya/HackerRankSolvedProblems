/*
 Given a 2D matrix with dimensions m X n. The goal is to count the number
 of ways one can traverse the matrix from cell (0,0 to cell m-1,n-1)
 using only right and down moves, i.e. first move can be 0,0 to 0,1 (down)
 or 1,0 (right) and not 1,1(diagonal)

 Input Format
 Single line of input contains two space separated integers m,n.

 Constraints
 1<=m,n<=20

 Output Format
 Print the number of ways one can traverse the matrix from cell (0,0 to cell m-1,n-1)

 Sample Input 0
 4 3

 Sample Output 0
 10

 Sample Input 1
 3 3

 Sample Output 1
 6

 */

import java.util.Scanner;
class NumberOfWaysToTraverseAMatrix {
    static int numberOfPaths(int m, int n)
    {
        int[] dp = new int[n];
        dp[0] = 1;
        for (int i = 0; i < m; i++) {
            for (int j = 1; j < n; j++) {
                dp[j] += dp[j - 1];
            }
        }
        return dp[n - 1];
    }

    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int m=sc.nextInt();
        int n=sc.nextInt();
        System.out.println(numberOfPaths(m, n));
    }
}