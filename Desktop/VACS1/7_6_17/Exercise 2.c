#include<stdio.h>
#include<math.h>

void main()
{
    int n,i;
    double x1=0.1036,x2=0.2081,y1=0.2122,y2=0.4247,z1=0.7381,z2=0.9327,nz,ny,fx,fy;
    double num,rounded,rounded1,rounded2,err;
    printf("For Assignment 2A: 789.499999999999 rounds to 790\n");
    printf("Enter a number: ");
    scanf("%lf",&num);
    printf("Input the desired number of decimals: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        num*=10;
    }
    rounded=round(num);
    for(i=0;i<n;i++)
    {
        num/=10;
        rounded/=10;
    }
    printf("%lf\n",rounded);
    err=fabs(rounded-num);
    printf("The round off error is: %lf\n",err);

    ny=(x1/x2)*y2-y1;
    nz=(x1/x2)*z2-z1;
    fy=nz/ny;
    fx=(z1-y1*fy)/x1;
    for(i=0;i<n;i++)
    {
        fx*=10;
        fy*=10;
    }
    rounded1=round(fx);
    rounded2=round(fy);
    for(i=0;i<n;i++)
    {
        rounded2/=10;
        rounded1/=10;
    }


    printf("x = %.2lf\n",rounded1);
    printf("y = %.2lf\n",rounded2);

}
