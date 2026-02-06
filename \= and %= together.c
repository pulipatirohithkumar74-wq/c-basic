#include <stdio.h>
int main() {
    //Your Code goes here!
      int a,b;
    scanf("%d%d",&a,&b);
    int div=a;
    int rem=a;

    printf("%d\n",div/=b);
    printf("%d",rem%=b);
    return 0;
}
