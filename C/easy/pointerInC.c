#include <stdio.h>

void update(int *a,int *b) {
    
    int a_bkp = *a, b_bkp = *b;
    
    *a = a_bkp + b_bkp;
    *b = a_bkp - b_bkp; 
    
    if(*b < 0)
        *b *= -1;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
