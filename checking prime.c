#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,i;
    int count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       if(n%i==0){
        count++;
       }
    }
    if(count==2){
        printf("it's prime");
    }
    else{
        printf("not prime");
    }
    return 0;
}
