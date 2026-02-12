#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,i,sum=0;
        scanf("%d",&n);
     for(;i<=n;i+=2){
        sum+=i;
     }
     printf("%d",sum);
    return 0;
}
