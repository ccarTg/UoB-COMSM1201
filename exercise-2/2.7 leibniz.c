#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    long double Pi;
    long double unit = pow(-1.0, n * 1.0) * 4 / (2 * n - 1);
    long double d = Pi - 3.141592653;
    
    for(n = 1; abs(d) < 0.000000001; n++)
    {
        Pi += unit;
        printf("unit = %lf\n", unit);
        
    }
    printf("unit = %lf\n", unit);
    printf("it take %d times to get pi correctly approxiamated to 9 digits\n", n);
    
    return 0;
}
