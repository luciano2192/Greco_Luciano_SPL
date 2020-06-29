#ifndef PILOTO_H_INCLUDED
#define PILOTO_H_INCLUDED

typedef struct {
    int idPiloto;
    char nombre[100];
} Piloto;

#endif // PILOTO_H_INCLUDED
void vuelo_columnasListaPilotos();
Piloto* piloto_new();
Piloto* piloto_newParametros(char* idPiloto,char* nombre);
int piloto_setIdPiloto(Piloto* this,int idPiloto);
int piloto_getIdPiloto(Piloto* this,int* idPiloto);
int piloto_setNombre(Piloto* this,char* nombre);
int piloto_getNombre(Piloto* this,char* nombre);
int parser_PilotoFromText(FILE* pFile, LinkedList* pArrayList);
int piloto_loadFromText(char* path, LinkedList* pArrayList);
Piloto* piloto_buscarPorID( LinkedList* pArrayList , int id );
int piloto_filtrarPilotoAlexLifeson(void* element);
int piloto_filtrarPilotoPorNombre(void* element,char* cadena);
int piloto_listarPilotos(LinkedList* pArrayListPilotos);
char* piloto_filtrarPiloto(void* element);
