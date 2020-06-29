#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller_Greco.h"
#include "Vuelo.h"
#include "Piloto.h"
#include "utn_funciones.h"

int main()
{
    int opcion = 0;
    LinkedList* listaVuelos = ll_newLinkedList();
    LinkedList* listaPilotos = ll_newLinkedList();

    do{
        opcion = Controller_Greco_menuPrincipal();
        switch(opcion)
        {
            case 1:
                Controller_Greco_cargarArchivo( listaVuelos );
                break;
            case 2:
                Controller_Greco_ListVuelos( listaVuelos , listaPilotos );
                break;
            case 3:
                Controller_Greco_cantPasajeros( listaVuelos );
                break;
            case 4:
                Controller_Greco_cantPasajerosADestinoX( listaVuelos );
                break;
            case 5:
                Controller_Greco_cargarVuelosCortos( listaVuelos );
                break;
            case 6:
                Controller_Greco_ListVuelosDestinoX( listaVuelos , listaPilotos );
                break;
            case 7:
                Controller_Greco_ListVuelosFiltrandoPiloto( listaVuelos , listaPilotos );
                break;
            case 8:
                Controller_Greco_FiltrarPilotoPorNombre( listaPilotos );
                break;
            case 9:
                break;
        }
    } while(opcion != 9);

    return 0;
}
