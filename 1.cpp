#include<stdio.h>
int main(){
float s1, s2;
    int i;
    printf("\n              HOSGELDINIZ\n\n") ; 
    printf("\nLutfen yapmak istediginiz islemi secin\n");
    printf("\n 1-TOPLAMA ISLEMI\n 2-CIKARMA ISLEMI\n 3-CARPMA ISLEMI\n 4-BOLME ISLEMI\n\n");
    scanf("%d", &i);
    printf("\n1.SAYIYI GIRIN:\n");
    scanf("%f", &s1);
    printf("\n2.SAYIYI GIRIN:\n");
    scanf("%f", &s2);
    switch (i)
        { 
        case 1: printf("\n->%.1f+%.1f: %.1f",s1 ,s2, s1+s2); break;
        case 2: printf("\n->%.1f-%.1f: %.1f",s1 ,s2, s1-s2); break;
        case 3: printf("\n->%.1f*%.1f: %.1f",s1 ,s2, s1*s2); break;
        case 4: printf("\n->%.1f/%.1f: %.3f",s1 ,s2, s1/s2); break;
        default: printf("TANIMSIZ"); break;
        }
    return(0);}