#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,i,rem,rev;
    scanf("%d",&n);
    for(;n!=0;n/=10){
        rem=n%10;
        rev=rev*10+rem;
    }
    printf("%d",rev);
    return 0;
}
