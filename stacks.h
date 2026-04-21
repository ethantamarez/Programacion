#ifndef PilaColaH
#define PilaColaH
//
class ElistException{};
class ElistOutOfMemory : public ElistExeception{};
class ElistOutOfRange : public ElistException{};
class EVacia : public ElistException{};

//
class TlistaS
{
public:
 Tlistas(int);
 ~TlistaS();
 void añadir(void*)
 void* Eliminar(int);
 int Longitud(){return longitud;}
 bool Vacia(){return !longitud;}
protected:
int longitud;
int tamaño;
void** elementos;
};


class TPilaSec : public TlistaS
{
public:
 TPilaSec(int valor) : TlistaS(valor){primero = -1;}
 ~TPilaSec
