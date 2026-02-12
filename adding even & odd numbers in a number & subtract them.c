#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,i,sum2=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
       if(i%2==0){
        sum+=i;
    }
     else{
        sum2+=i;
    }
    }
    printf("%d",sum-sum2);
    return 0;
}
