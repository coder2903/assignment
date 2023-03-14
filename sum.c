#include <stdio.h>
int main() {
    int n ,sum=0;
    printf("enter any number :");
    scanf ("%d", &n);
    
    do{
        sum=sum+ n%10;
        n=n/10;

    }
    while(n >0);
    printf("sum is %d\n ",sum);
    
    return 0;
}
