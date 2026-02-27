#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n&&n>0){
        printf("perfect number");
    }
    else{
        printf("not perfect number");
    }

     
    return 0;
}
