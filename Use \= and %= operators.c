#include <stdio.h>
int main() {
    //Your Code goes here!
    int a,b;
    scanf("%d%d",&a,&b);
    int div=a;
    int rem=a;

    div/=b;
    rem%=b;
    
    printf("%d\n",div);
        printf("%d",rem);

    return 0;
}
