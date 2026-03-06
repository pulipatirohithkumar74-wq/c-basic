#include <stdio.h>
int main() {
    //Your Code goes here!
    int a,b,pow=1;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=b;i++){
        pow=pow*a;
    }
    printf("%d",pow);
    return 0;
}
