#ifndef LISTA_H
#define LISTA_H
#include <iostream>

using namespace std;

class Nodo
{
    public:
    int tllegada;
    string nombre;
    int prioridad;
    int tiempo;
    int eject;

    Nodo * sig;
    Nodo * ant;

        Nodo (int ctllegada, string cnombre, int cprioridad, int ctiempo, int ceject)
    {
        tllegada = ctllegada;
        nombre = cnombre;
        prioridad = cprioridad;
        tiempo = ctiempo;
        eject = ceject;
    }



    friend class Lista;
};
class Nodo2
{
    public:

    string nombresp;

    Nodo2 * sig2;
    Nodo2 * ant2;


    Nodo2 (string cnombresp)
    {
        nombresp = cnombresp;
    }


    friend class Lista2;
};

class Lista
{
    Nodo * primernodo;
    Nodo * ultimonodo;

public:
    void inicializar();
    bool vacia();
    int tamano();
    void mostrar();
    void insertar(Nodo * nuevo);
    void ejecutar(string ejecu);
    void ejecutar2();
};

class Lista2
{
    Nodo2 * primernodo2;
    Nodo2 * ultimonodo2;

public:
    void inicializar2();
    bool vacia2();
    void mostrar2();
    void insertar2(Nodo2 * nuevo2);
};

#endif // LISTA_H
