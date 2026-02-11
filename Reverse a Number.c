#include <stdio.h>
int main() {
    //Your Code goes here!
    int a,i,rem,rev=0;
    scanf("%d",&a);
    for(i=1;i<=a;a=a/10){
        rem=a%10;
        rev=rev*10+rem;
       // a=a/10;
    }
    printf("%d",rev);
    return 0;
}
