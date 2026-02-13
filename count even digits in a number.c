#include <stdio.h>
int main(){
    int n,i,count=0,rem;
    scanf("%d",&n);
    for(i=n;i>0;i/=10){

      rem=i%10;
        if(rem%2==0){
            count++;
        }}
   printf("%d\n",count);

        
    
    return 0;
}
