#include <stdio.h>
int main() {
    int n,i,count=0;
        scanf("%d",&n);
    for(;n!=0;i++){
        n/=10;
        count++;
    }
            printf("%d",count);

    return 0;
}
