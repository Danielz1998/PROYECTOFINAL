#include <iostream>
#include "Lista.h"
#include <conio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    Lista l;
    Lista2 l2;
    l.inicializar();
    l2.inicializar2();

    int cantidad = 0;
    int opc=0;
    int ejecutar;


    do
    {
        cout<<"\n";
        cout<<"\t<<Simulador SO>>";
        cout<<"\n";
        cout<<"\nEscoja una opcion:";
        cout<<"\n1.Configuracion de Procesos";
        cout<<"\n2.Definicion de Lista de Ejecucion";
        cout<<"\n3.Ver procesos";
        cout<<"\n4.Salir";
        cout<<"\nOpcion:";
        cin>>opc;
        cout<<"\n";

        if(opc==1)
        {
            //system("cls");
            cout<<"\t<<Configuracion de Procesos>>";
            cout<<"\n";
            cout<<"\nIngrese la cantidad de procesos: ";
            cin>>cantidad;

            for(int i=0; i<= (cantidad-1); i++)
            {
                cout<<"\nTiempo de Llegada:"<<i;
                string u_nombre;
                int u_prioridad;
                int u_tiempo;

                cout<<"\nIngrese el nombre del proceso: ";
                cin>>u_nombre;
                cout<<"\nIngrese el nivel de prioridad del proceso: ";
                cin>>u_prioridad;
                cout<<"\nIngrese el tiempo del preceso: ";
                cin>>u_tiempo;
                cout<<""<<endl;
                ejecutar=0;

                Nodo * n = new Nodo(i, u_nombre, u_prioridad, u_tiempo, ejecutar);
                l.insertar(n);
            }
            opc=0;


        };

        if(opc==2)
        {
            int opcpro=0;

            cout<<"\t<<Definicion de la Lista de Ejecucion>>";
            cout<<"\n";

            do
            {
                cout<<"\n";
                cout<<"\t<<EJECUTAR PROCESOS>>";
                cout<<"\n";
                cout<<"\nEscoja una opcion:";
                cout<<"\n1.Selecionar proceso";
                cout<<"\n2.Ejecutar procesos";
                cout<<"\n3.Cinfiguracion SO";
                cout<<"\nOpcion:";
                cin>>opcpro;
                cout<<"\n";


                if(opcpro==1)
                {

                    string spnombre;
                    cout<<"\t<<Selecionar proceso de la lista>>";
                    l.mostrar();

                    cout<<"\n Ingrese el nombre del proceso: ";
                    cin>>spnombre;

                    //Nodo2 * a = new Nodo2(spnombre);
                    //l2.insertar2(a);
                    l.ejecutar(spnombre);
                    opcpro=0;
                }

                if(opcpro==2)
                {
                    cout<<"\t<<Ejecutar Procesos>>";
                    l.ejecutar2();

                    //l.mostrar();
                    //l2.mostrar2();
                    opcpro=0;

                }

                if(opcpro==3)
                {
                    int quantum;

                    cout<<"\t<<Cinfiguracion SO>>";

                    cout<<"\n Defina el Quantum: ";
                    cin>>quantum;

                }

            }
            while(opcpro != 3);

            opc==0;


        };

        if(opc==3)
        {
            l.mostrar();
            opc==0;
        };



        if(opc==4)
        {
            return 0;
            opc==0;
        };

    }
    while(opc != 4);

}
