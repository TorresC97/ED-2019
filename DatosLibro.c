#include<stdio.h>
#include<string.h>
#include "struct_implementacion.h";

Libro obtenerLibro(void){
    Libro lib;
    fflush(stdin);
    printf("Dame titulo");
    scanf("%s",lib.titulo);
    printf("Dame editoriall");
    scanf("%s",lib.editorial);
    printf("Dame autor");
    scanf("%s",lib.autor);
    return lib;
}


//Libro obtenerLibro(void);

void desplegarLibro(Libro lib){
    printf("\n Titulo: %s", lib.titulo);
    printf("\n Autor: %s", lib.autor);
    printf("\n Editorial: %s", lib.editorial);

}

char * obtenerTitulo(Libro lib){
    return lib.titulo;

}

char * obtenerAutor(Libro lib){
    return lib.autor;

}
char * obtenerEditorial(Libro lib){
    return lib.editorial;

}

int obtenerPaginas(Libro lib){
    return lib.numPaginas;

}
