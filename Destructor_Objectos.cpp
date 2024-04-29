// Destructor de Objectos

#include <iostream>
#include <string>
using namespace std;

class Perro{
    private: // Atributos
        string nombre, raza;
    public:
        Perro(string, string); // Constructor
        ~Perro(); // Destructor
        void mostras_datos();
        void jugar();
};

// Contructor, para inicializar los atributos de la clase
Perro::Perro(string _nombre, string _raza){
    nombre = _nombre;
    raza = _raza;
}

// Destructor
Perro::~Perro(){
}

// Funcion o Metodo
void Perro::mostras_datos(){
    cout << "Nombre del canino: " << nombre << endl;
    cout << "Raza del canino: " << raza << endl;
}

// Metodo
void Perro::jugar(){
    cout << "Pasa tiempo del canino " << nombre << ", jugar con la pelota." << endl;
}

int main(){

    Perro perro1("Firulai", "Pastor Aleman");

    perro1.mostras_datos();
    perro1.jugar();
    perro1.~Perro(); // Destructor del objecto. Limpia memoria

    cout << endl;

    return 0;
}