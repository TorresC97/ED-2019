#include<stdio.h>
#include<stdlib.h>

void puede_cambiar(int * a, int * b){
    a = b;
    printf("Values os var a: = %p", a);
}

void cambiar(int ** a, int * b){
    *a = b;
    printf("\nValues os var a: = %p", a);
}



int main(){
int a = 1;
int b = 3;
int c = 4;
int * x = &a;
int * y = &b;
int * z = &c;
int **p = &a;
    printf("Addres of the var a: %p \n", &a);
    //printf("Addres of te ")

    puede_cambiar(x, z);
     printf("Addres of the var x: %p \n", x); //X va a tomar la direccion de Z.
      printf("Addres of the var z: %p \n", z);

      cambiar(p, z);
       printf("Addres of the var x: %p \n", x);
}

