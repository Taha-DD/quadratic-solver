#include <stdio.h>
#include <math.h>
int main (int argc, const char * argv[])
{
    double a, b, c, x1, x2, d;
    printf ("I can solve ax²+bx+c=0 equasions\n please enter a b and c:");
    scanf ("%lf %lf %lf", &a, &b, &c);
    d=b*b-4*a*c;
    if (d>0) {
        if (a==0){
            x1=-c/b;
            printf ("the solutin is x=%.2lf",x1);
        }
            else {
                x1=(-b-sqrt(d))/(2*a);
                x2=(-b+sqrt(d))/(2*a);
                printf ("there are two solutions x1=%.2lf and x2=%.2lf", x1, x2);
            }
    }
    else if (d == 0){
        if (a==0){
            if (b==0) {
                if (c==0)
                    printf ("0 is the only solution");
                else
                    printf ("This equation is mathematically wrong %.2lf cannot be equal to zero",c);
            }
            else {
                x1=-c/b;
                printf ("the solutin is x=%.2lf",x1);
            }
        }
        else {
            x1=(0-b)/(2*a);
            printf ("%.2lf is the only solution",x1);
        }
    }
    else
        printf ("there are no solutions");
    
    return 0;
}
