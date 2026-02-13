#include <stdio.h>
int main() {
    //Your Code goes here!
    int a,s,i,sum=0;
    scanf("%d%d",&a,&s);
    for(i=a;i<=s;i+=a){
       sum+=i;
    }
    printf("%d",sum);
    
    return 0;
}
