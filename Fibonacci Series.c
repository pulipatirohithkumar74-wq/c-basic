#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,i;
        scanf("%d",&n);
    int first=0;
    int second=1;
    if(1<=n)
        printf("%d ",first);
    if(2<=n)     
    printf("%d ",second);
    for(i=0;i<=n;i++){
        int temp=first+second;
        first=second;
        second=temp;
        printf("%d ",temp);

    }
    return 0;
} 
