#include <stdio.h>
int main() {
    //Your Code goes here!
    int n;
    scanf("%d",&n);
    if(n%4==0&&n%100!=0||n%400==0){
        printf("%d is a Leap Year\n",n);
    }else{
        printf("%d is not a leap year\n",n);
    }
    int leap=0;
    int non=0;
    for(int i=n;i<n+10;i++){
        if(i%400==0||i%4==0&&i%100!=0){
           leap++;
        }
        else {
            non++;
        }
    }
        printf("Leap Year: %d\n",leap);
        printf("Non-Leap Year: %d",non);
    return 0;
}
