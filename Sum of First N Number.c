#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,i,count=0;
    scanf("%d",&n);
    for(;n!=0;i++){
        n/=10;
        count++;
        //   printf("%d\n",count);
    }
              printf("%d\n",count);


    return 0;
}
