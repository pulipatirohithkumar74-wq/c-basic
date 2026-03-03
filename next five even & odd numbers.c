#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int evenCount = 0, oddCount = 0;
    for(int num = n + 1; evenCount < 5 || oddCount < 5; num++) {
        if(num % 2 == 0 && evenCount < 5) {
            printf("%d is even\n", num);
            evenCount++;
        }
        else if(num % 2 != 0 && oddCount < 5) {
            printf("%d is odd\n", num);
            oddCount++;
        }
    }
    return 0;
}
