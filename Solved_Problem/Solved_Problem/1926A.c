#include<stdio.h>
int main (){
    int testCase;
    scanf("%d",&testCase);
    char enter;
    scanf("%c",&enter);
    for (int i=0;i<testCase;i++){
        char str[6];
        gets(str);
        int countA=0,countB=0;
        for (int j=0;j<5;j++){
            if (str[j]=='A') countA++;
            else countB++;
        }
        if (countA>countB) printf("A\n");
        else printf("B\n");
    }
}