/*

4 ISLEM YAPABILEN BIR HESAP MAKINESI ALGORITMASI

A CALCULATOR WITH 4 OPERATIONS 

*/

#include<stdio.h>
int main(){
float s1, s2;
    int i;
    printf("\n              WELCOME          \n\n") ; 
    printf("\nPLEASE CHOSE THE ACTION YOU WANT TO DO \n");
    printf("\n 1-ADDITION \n 2-SUBTRACTION \n 3-MULTIPLICATION \n 4-DIVISION \n\n");
    scanf("%d", &i);
    printf("\n1. NUMBER:\n");
    scanf("%f", &s1);
    printf("\n2. NUMBER :\n");
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
