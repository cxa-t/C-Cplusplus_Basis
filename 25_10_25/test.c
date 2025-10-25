#define _CRT_SECURE_NO_WARNINGS 1

//BC53 
#include<stdio.h>
#include<math.h>
int main()
{
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
    {
        if (a == 0.0)
        {
            printf("Not quadratic equation\n");
        }
        else
        {
            double dert = b * b - 4 * a * c;
            double x1, x2;
            if (dert >= 0.0)
            {
                x1 = (-b + sqrt(dert)) / (2 * a);
                x2 = (-b - sqrt(dert)) / (2 * a);
                if (x1 < x2 || x1>x2)
                {
                    if (x1 < x2)
                    {
                        printf("x1=%.2f;x2=%.2f\n", x1, x2);
                    }
                    else
                        printf("x1=%.2f;x2=%.2f\n", x2, x1);
                }
                else if (x1 == x2)
                {
                    if (x1 == -0.0 && x2 == -0.0)
                    {
                        x1 = 0.00;
                        x2 = 0.00;
                    }
                    printf("x1=x2=%.2f\n", x1);
                }

            }
            else
            {
                double x1 = (-b) / (2 * a);
                double x2 = (sqrt(-dert)) / (2 * a);
                printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", x1, x2, x1, x2);
            }
        }
    }
    return 0;
}


