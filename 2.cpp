#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    double a,b,c;
    printf("Lutfen ucgenin kenarlarini giriniz...\n");
    scanf("%lf",& a);
    scanf("%lf",& b);
    scanf("%lf",& c);
    if(a==c & c==b)
    printf("ESKENAR UCGEN\n\n");
    else if(a==c & b!=a)
    printf("IKIZKENAR UCGEN\n\n");
    else if(a!=b & b!=c)
    printf("CESITKENAR UCGEN\n\n");
    else if(b==c & a!=c)
    printf("IKIZKENAR UCGEN\n\n");
    else if(a==b & a!=c)
    printf("IKIZKENAR UCGEN");
    getch();
    return(0); 
}