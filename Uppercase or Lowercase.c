#include <stdio.h>
int main() {
    //Your Code goes here!
    char a;
    scanf("%c",&a);
    if(a>='A'&&a<='Z'){
        printf("upper case");
    }
     else if(a>='a'&&a<='z'){
        printf("Lower case");
    }
    return 0;
}
