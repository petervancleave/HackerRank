

#include <stdio.h>

int main() {
 
    int a, b;
    float c, d;
   
   //read integers and floats
    
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    
    //integer sum and difference
    
    printf("%d %d\n", a + b, a - b);
    
    // float sum and difference
    
    printf("%.1f %.1f\n", c + d, c - d);
 
    return 0;
}
