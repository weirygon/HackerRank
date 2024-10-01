#include <stdio.h>

int main() {
	
    int n, last_Digit, sum=0;
    scanf("%d", &n);
    
    for (int i=0; i<5; i++){
        last_Digit = n % 10;
        sum += last_Digit;
        n /= 10;
        
    }
    
    printf("%d\n", sum);
    
    return 0;
}
