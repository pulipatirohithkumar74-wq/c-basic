#include <stdio.h>
int main() {
    //Your Code goes here!
    int a,b,i,power=1;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++){
       power*=a;
    }
    printf("%d^%d=%d",a,b,power);
    return 0;
}
