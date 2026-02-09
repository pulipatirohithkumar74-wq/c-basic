#include <stdio.h>
int main() {
    //Your Code goes here!
    char a;
    scanf("%c",&a);
    if(a>='A'&&a<='Z'||a>='a'&&a<='z'){
        printf("Alphabet");
    }
    else if(a>='1'&&a<='9'){
        printf("Digit");
    }
    else{
        printf("special characters");
    }

    return 0;
}
