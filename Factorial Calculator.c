#include <stdio.h>
int main() {
    //Your Code goes here!
    int a,i,sum=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        if(i%2==0){
             sum+=i; 
        }
        
    }
             printf("%d\n",sum);

    

    return 0;
}
