// Esta librería define la estructuras ocupadas en el trabajo, sus nodos y listas respectivas.

/*
Índice:
1.- USUARIO
2.- PELICULA
3.- SERIES

*/

#ifndef LISTA_STRUCT_H
#define LISTA_STRUCT_H

#include <stdio.h>

//                  ESTRUCTURAS / LISTAS A OCUPAR

//---------------------- USUARIO ----------------------

// Estructura para el usuario

struct usuario{
    
    int id;
    char nombre[25];
    struct usuario* siguiente_usuario;

};

// Nodo para el usuario

struct nodo_usuario{

    usuario usuario_dato;
    struct nodo* siguiente_nodo_usuario;
    nodo_usuario(){
        siguiente_nodo_usuario == NULL;
    }
    nodo_usuario(usuario x){
        nodo_usuario();
        usuario_dato = x;
    }


};

// Lista para el usuario (Crea el primer elemento)

struct Lista_usuario{
    struct nodo_usuario* primero_usuario;
    
    Lista_usuario(){
        primero_usuario = NULL;
    }


};

//---------------------- PELICULAS ----------------------

// Estructura para la pelicula 

struct pelicula{
        char titulo[30];
        int reproducciones;
        struct usuario* lista;
        struct pelicula* siguiente_pelicula;
};

// Nodo para Pelicula

struct nodo_pelicula{
    pelicula pelicula_dato;
    struct nodo_pelicula* siguiente_nodo_pelicula;
    nodo_pelicula(){
        siguiente_nodo_pelicula = NULL;
    }


};

// Lista para la pelicula

struct Lista_pelicula{
    struct nodo_pelicula* primero_pelicula;
    Lista_pelicula(){
        primero_pelicula = NULL;
    }

};

//---------------------- SERIES ----------------------

// Estructura para las series

struct serie{

    char titulo[30];
    int temporadas;
    int capitulos;
    int reproducciones;
    struct usuario* lista;
    struct serie* siguiente_serie;
    
};

// Nodo para las series

struct Nodo_serie{
    serie dato_serie;
    struct Nodo_serie* siguiente_nodo_serie;
    Nodo_serie(){
        siguiente_nodo_serie = NULL;
    }
};

// Lista para las series

struct Lista_serie{
    struct Nodo_serie* primero_serie;
    Lista_serie(){
        primero_serie = NULL;
    }


};



#endif