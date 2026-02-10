#include <stdio.h>
int main() {
    //Your Code goes here!
    int a;
    scanf("%d",&a);
    if(a<20){
        printf("cold");
    }
    else if(a>=20&&a<=30){
        printf("normal");
    }
    else{
        printf("hot");
    }
    return 0;
}
