#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,i;
    scanf("%d",&n);
    int first=0;
    int second=1;
    for(i=1;i<=n;i++){
        printf("%d ",first);
        int temp=first+second;
        first=second;
        second=temp;

    }
    return 0;
}
