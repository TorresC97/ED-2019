#include "struct_implementacion.h"
#include "bliblioteca.h"
Biblioteca inicializar(int i ){
    Biblioteca bib;
    bib.coleccion=(*Libro)malloc(i*sizeof(Libro));
    bib.capacidad=i;
    bib.tamanio=0;

}
