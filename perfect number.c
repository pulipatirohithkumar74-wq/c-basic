#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
         //   printf("%d\n",sum);
        }
    }
 if(sum==n){
    printf("yes");
 }
 else{
    printf("no");
 }
    return 0;
}
