#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,i,count=0;
    scanf("%d",&n);
    for(i=1;n!=0;n/=10){
        count++;
    }
        printf("%d\n",count);
    

    return 0;
}
