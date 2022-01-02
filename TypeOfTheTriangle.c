/*

UCGENIN CESITINI ANALIZ EDEN C ALGORITMASI

ALGOTIRHM TO FIND THE TYPE OF TRIANGLE

*/
#include<stdio.h>
int main(){
    double a,b,c;
    printf("GIVE THE SIDES OF THE TRIANGLE ...\n");
    scanf("%lf",& a);
    scanf("%lf",& b);
    scanf("%lf",& c);
    if(a==c & c==b)
    printf("EQUILATERAL TRIANGLE \n\n");
    else if(a==c & b!=a)
    printf("ISOSCELES TRIANGLE\n\n");
    else if(a!=b & b!=c)
    printf("SCALENE TRIANGLE\n\n");
    else if(b==c & a!=c)
    printf("ISOSCELES TRIANGLE\n\n");
    else if(a==b & a!=c)
    printf("ISOSCELES TRIANGLE");
}
