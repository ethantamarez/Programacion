#include"stack.h"


TlistaS::TlistaS(int total)
{
  tamaño = total;
  longitud = 0;
  elementos = new void*[tamaño];
}

TlistaS::~TlistaS()
{
    for(int i = 0; i < longitud; i++)
    delete [] elementos;
    longitud = 0;
    tamaño = 0;
}

void TlistaS:: añadir(void*elementoNuevo)
{
    if (tamaño > longitud)
        elementos[longitud] = elementoNuevo;
    else
    {
        if(tamaño ==longitud)
        {
            tamaño *= 2;
            void** nuevoArreglo = new void*[tamaño];
            for (int i = 0; i <= longitud - 1; i++)
                nuevoArreglo[i] = elementos[i];
            nuevoArreglo[longitud] = elementoNuevo;
            delete [] elementos;
            elementos = nuevoArreglo;
        }
    }
    longitud++;
}
void* TlistaS::Eliminar(int pos)
{
    if ((pos < 0 )||(pos >= longitud))throw ElistOutOfRange();)
    void* elemntoDevolver = elementos[pos];
    for (int i = pos +1; i < longitud; i++ )
        elementos[i -1] = elementos[i];
    longitud--;
    return elemntoDevolver;
}
void TPilaSec :: añadir(void*elementoNuevo)
{
    TlistaS :: añadir(elementoNuevo);
    primero++;
};
void* TPilaSec :: primero() const
{
    if (longitud == 0) throw EVacia();
        return elementos[primero];
};