#include <stdio.h>
int main() {

    int n,i,sum=0,digit;
        scanf("%d",&n);
    for(i=0;n!=0;i++){
        
        digit=n%10;
        sum+=digit;
        n/=10;
    }
    printf("%d",sum); 
    return 0;
}
