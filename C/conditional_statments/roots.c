#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,x1,x2,realpart,imagpart;
	printf("enter coefficents of a b and c:");
	scanf("%f%f%f",&a,&b,&c);
        d=b*b-(4*a*c);
	if(d>0)
	{
            x1=(-b+sqrt(d))/(2*a);
	    x2=(-b-sqrt(d))/(2*a);
	    printf("roots are real and diffrent\n");
	    printf("x1=%.2f x2=%.2f\n",x1,x2);
	}
	else if(d==0)
	{
		x1=x2=-b/(2*a);
		printf("roots are real and same\n");
		printf("x1=%.2f x2=%.2f\n",x1,x2);

	}
	else
	{
		realpart=-b/(2*a);
		imagpart=sqrt(-d)/(2*a);
		printf("roots are complex\n");
		printf("x1=%.2lf+%.2lfi x2=%.2lf+%.2lfi",realpart,imagpart,realpart,imagpart);

	}
}
