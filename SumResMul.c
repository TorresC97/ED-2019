#include<stdio.h>
#include<stdlib.h>
int suma(int a, int b){
    return a+b;
}
int resta(int a, int b){
    return a - b;
}
int multiplica(int a, int b){
    return a * b;
}
int main(){
    //Apuntador a funciones
int (*fun_ptr_arr[])(int, int) = {suma, resta, multiplica};
    int a =5;
    int b = 6;
    printf("El resultado es: %d",(*fun_ptr_arr[2])(a,b));

    return 0;
}