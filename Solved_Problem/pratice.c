#include<stdio.h>
int main (){
    printf ("Enter the 1st number -> ");
    int x;
    scanf ("%d",&x);
     printf ("Enter the 2nd number -> ");
    int y;
    scanf ("%d",&y);
    int reminder  = x%y; // process 
    printf("The reminder is -> %d",reminder);
    return 0;


} 
// variable -> as your wish. 
//mod-> reminder
// integer-  0,1,2,3,4,5,6;   int  -> %d
// decimal - 1.3,1.4,1.5;   float -> %f
// charecter - a,b,c,d,e,A,B,   char -> %c
//  c language case sensitive-> a,A reja,Reja