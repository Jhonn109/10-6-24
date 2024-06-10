#include<iostream>
using namespace std;
int main(int argc, char*argv[])
{
  int x;
  int *apuntador =&x; //creamos un apuntador a la memoria x
  cout << "Ingrese su edad: ";
  cin >> *apuntador; //almacenamos en la memoria del dato




  if(*apuntador>18){
    cout << "usted es mayor de edad" <<endl;
  }
   else {
    cout <<"usted es menor de edad" <<endl;
   }
  
  cout << "el numero que ustd ingreso es :"  << *apuntador <<endl;
  delete [] apuntador; //despues de operar con punteros es necesario linberar memoria.
  apuntador=NULL;

   
  cout << "el espacio de memoria de la variable es: "<<&apuntador <<"\n";






    return 0;
}