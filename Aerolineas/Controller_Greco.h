#ifndef CONTROLLER_H_INCLUDED
#define CONTROLLER_H_INCLUDED

#endif // CONTROLLER_H_INCLUDED

int Controller_Greco_menuPrincipal();
int Controller_Greco_loadFromText(char* path, LinkedList* pArrayList);
int Controller_Greco_loadFromBinary(char* path, LinkedList* pArrayList);
int Controller_Greco_cargarArchivo( LinkedList* pArrayList );
int Controller_Greco_ListVuelos(LinkedList* pArrayListVuelos,LinkedList* pArrayListPilotos);
int Controller_Greco_cantPasajeros(LinkedList* pArrayListVuelos);
int Controller_Greco_cantPasajerosADestinoX(LinkedList* pArrayListVuelos);
int Controller_Greco_cargarVuelosCortos( LinkedList* pArrayList );
int Controller_Greco_saveVuelosCortos(char* path, LinkedList* pArrayList);
int Controller_Greco_ListVuelosDestinoX(LinkedList* pArrayListVuelos,LinkedList* pArrayListPilotos);
int Controller_Greco_ListVuelosFiltrandoPiloto(LinkedList* pArrayListVuelos,LinkedList* pArrayListPilotos);
int Controller_Greco_FiltrarPilotoPorNombre( LinkedList* pArrayListPilotos );
