#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n, m;
    float n_f, m_f;
    
    scanf("%d %d", &n, &m);
    scanf("%f %f", &n_f, &m_f);
    
    printf("%d %d\n", (n+m), (n-m));
    printf("%.1f %.1f", (n_f + m_f), (n_f - m_f));
    
    return 0;
}
