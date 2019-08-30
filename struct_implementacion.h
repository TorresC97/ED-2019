#include<stdio.h>
#include<string.h>

typedef struct lib{
    char titulo[50];
    char autor[50];
    char editorial[50];
    int numPaginas;
}Libro ;

Libro obtenerLibro(void);

void desplegarLibro(Libro lib);

char * obtenerTitulo(Libro lib);

char * obtenerEditorial(Libro lib);

int obtenerPaginas(Libro lib);
