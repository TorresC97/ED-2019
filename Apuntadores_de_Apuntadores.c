#include<stdio.h>
#include<stdlib.h>
#include<string.h>





int main(){
    int i;
    char * ArrNew[4];
    char bufffer[100];
    for(i=0;i<4;i++){
        printf("ingrese el valor %d",i+1);
        scanf("%s",bufffer);
        ArrNew[i] = (char*) malloc((strlen(bufffer)+1)*sizeof(char));
        strcpy(ArrNew[i], bufffer);
    }

}

