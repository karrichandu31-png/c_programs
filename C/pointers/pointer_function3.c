#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int divs(int,int);

int main()
{
    int a,b,res;
    char ch;
    int (*fun)(int,int);
    ch=getchar();
    switch(ch)
    {
        case '+':fun=add;
        break;
        case '-':fun=sub;
        break;
        case '*':fun=mul;
        break;
        case '/':fun=divs;
        break;
    }
    scanf("%d %d",&a,&b);
    res=fun(a,b);
    printf("%d",res);
}


int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int divs(int a,int b)
{
    return a/b;
}
