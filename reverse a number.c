#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,rev=0;
    scanf("%d",&n);
    for(int i=0;n!=0;i++){
        int rem=n%10;
        rev=rev*10+rem;
        n/=10;

    }
     printf("%d\n",rev);

    return 0;
}
