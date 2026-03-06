#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,i;
    scanf("%d",&n);
    int sum=0;
for(i=0;n!=0;n/=10){
    int rem=n%10;
    sum=sum+rem;
}
printf("%d",sum);
    return 0;
}
