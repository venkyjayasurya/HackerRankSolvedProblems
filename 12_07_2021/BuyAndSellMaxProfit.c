/*Without using DP*/

#include<stdio.h>
void main(){
    int a[100], n, i, profit, min;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    min=a[0];
    profit=0;
    for(i=1; i<n; i++){
        if(a[i] < min)
            min = a[i];
        else if(a[i] - min > profit)
            profit = a[i] - min
    }
    printf("%d", profit);
}
