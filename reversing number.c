#include <stdio.h>
int main() {
  
    int n,r;
        scanf("%d",&n);
     for(int i=0;n!=0;i++){
        r=n%10;
        printf("%d",r);
        n/=10;
     }
    return 0;
}
