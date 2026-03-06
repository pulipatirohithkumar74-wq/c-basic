#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,count=0;
    scanf("%d",&n);
    for(int i=1;n!=0;n/=10){
      int rem=n%10;
      if(rem%2==0){
         count++;
      }
    }
    printf("%d",count);
    return 0;
}
