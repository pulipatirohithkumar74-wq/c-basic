#include <stdio.h>
int main() {
    //Your Code goes here!
     int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a=b=c&&a+b+c==180){
        printf("Equilateral triangle");
    }
    else{
        printf("not Equilateral triangle");
    }
    return 0;
}
