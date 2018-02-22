#include "Lista.h"

void Lista::inicializar()
{
    primernodo = NULL;
    ultimonodo = NULL;
}

void Lista2::inicializar2()
{
    primernodo2 = NULL;
    ultimonodo2 = NULL;
}

bool Lista::vacia()
{
    if (primernodo == NULL && ultimonodo == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Lista2::vacia2()
{
    if (primernodo2 == NULL && ultimonodo2 == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Lista::tamano()
{
    int cont = 0;

    Nodo * aux;
    aux = primernodo;
    while(aux != NULL)
    {
        cont++;
        aux = aux -> sig;
    }
    return cont;
}

void Lista::mostrar()
{
    Nodo *aux;
    aux = primernodo;
    cout<<"\nProcesos...";
    cout<<"\nNombre\t";
    cout<<"Prioridad\t";
    cout<<"T. Ejecucion\t";
    cout<<"T. Llegada\t";
    cout<<"Ejecutar\t";
    cout<<"\n";

    while(aux != NULL)
    {
        cout<<aux->nombre<<"\t\t";
        cout<<aux->prioridad<<"\t\t";
        cout<<aux->tiempo<<"\t\t";
        cout<<aux->tllegada<<"\t\t";
        cout<<aux->eject<<"\t\t";
        cout<<"\n";
        aux = aux ->sig;
    }
}

void Lista2::mostrar2()
{
    Nodo2 *aux2;
    aux2 = primernodo2;
    cout<<"\nProcesos...";
    cout<<"\nNombre\t\t\n";

    while(aux2 != NULL)
    {
        cout<<aux2->nombresp<<"\t\t\n";
        aux2 = aux2 ->sig2;
    }
}

void Lista::insertar(Nodo * nuevo)
{
    if(vacia())
    {
        primernodo = nuevo;
        ultimonodo = nuevo;
    }
    else
    {
        ultimonodo -> sig = nuevo;
        nuevo -> ant = ultimonodo;
        ultimonodo = nuevo;
    }
}
void Lista2::insertar2(Nodo2 * nuevo2)
{
    if(vacia2())
    {
        primernodo2 = nuevo2;
        ultimonodo2 = nuevo2;
    }
    else
    {
        ultimonodo2 -> sig2 = nuevo2;
        nuevo2 -> ant2 = ultimonodo2;
        ultimonodo2 = nuevo2;
    }
}

void Lista::ejecutar(string ejecu)
{
    cout<<"\nProcesos...";
    Nodo *aux;
    aux = primernodo;


    while(aux != NULL)
    {
        if (aux->nombre==ejecu)
        {
            aux->eject=1;
        }
        aux = aux ->sig;
    }
}
void Lista::ejecutar2()
{   string nombrep;
    int priorp=100;
    int contador=0;
    Nodo *aux;
    aux = primernodo;

    cout<<"\nProcesos...";
    cout<<"\nNombre\t";
    cout<<"Prioridad\t";
    cout<<"T. Ejecucion\t";
    cout<<"T. Llegada\t";
    cout<<"Ejecutar\t";
    cout<<"\n";

    /*while(aux != NULL)
    {
        if (aux->eject==1)
        {
           contador++;
        }
        aux = aux ->sig;
    }

    for (i =1, i<=contador,i++){

        while(aux != NULL)
        {
            if (aux->prioridad<priorp)
            {
                priporp=aux->prioridad;
            }
            aux = aux ->sig;
        }

    }*/


    while(aux != NULL)
    {
        if (aux->eject==1)
        {
          cout<<aux->nombre<<"\t\t";
          cout<<aux->prioridad<<"\t\t";
          cout<<aux->tiempo<<"\t\t";
          cout<<aux->tllegada<<"\t\t";
          cout<<aux->eject<<"\t\t";
          cout<<"\n";
        }
        aux = aux ->sig;
    }
}
