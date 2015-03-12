#ifndef LISTAS_H_INCLUDED
#define LISTAS_H_INCLUDED

typedef struct NodoLista
{
    int informacion;
    struct NodoLista * siguiente;
}Nodo;

typedef struct
{
    int longitud;
    Nodo * primero;
}Lista;

void vacia(Lista *lista);
int esVacia(Lista lista);
void insertar(Lista *lista, int elemento, int posicion);
void eliminar(Lista *lista, int posicion);
int consultar(Lista lista, int posicion);
void destruir(Lista *lista);
void imprimir(Lista lista);

#endif // LISTAS_H_INCLUDED
