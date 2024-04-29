#include <iostream>
#include <string>
using namespace std;

// Clases en C++
class Persona{
    private: // Atributos
        int edad;
        string nombre;

    public: //Metodos
        Persona(int,string); // Constructor de la Clase
        void leer();
        void correr();
};

// Constructor, nos sirve para incializar los atributos de la Clase
Persona::Persona(int _edad,string _nombre){
    edad = _edad;
    nombre = _nombre;
}

void Persona::leer(){
    cout << "Soy " << nombre << " y estoy leyendo un libro." << endl;
}

void Persona::correr(){
    cout << "Soy " << nombre << " y estoy corriendo una maraton y tengo " << edad << " años. "<< endl;
}

int main(){

    Persona p1 = Persona(35, "Sergio");
    Persona p2(19, "Gisel");
    Persona p3(25, "Alejandro");
    
    p1.leer();
    p2.correr();
    p3.correr();
    p3.leer();

    return 0;
}