// Herencia en POO

#include <iostream>
#include <string>
using namespace std;

class Persona{
    private: // Atributos
        string nombre;
        int edad;
    public: // Metodos
        Persona(string, int); // Constructor
        void mostra_persona();
};

// Herencia de la clase padre class Persona
class Alumno : public Persona{
    private: // Atributos propios
        string codigo_alumno;
        float nota;
    public: // Metodos
        Alumno(string, int, string, float); // Constructor de la clase alumno
        void mostra_alumno();
};

// Constructor de la clase Persona (Clase Padre) Clase gigachad
Persona::Persona(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

// Constructor clase alumno
Alumno::Alumno(string _nombre, int _edad, string _codigo_alumno, float _nota) : Persona(_nombre, _edad){
    codigo_alumno = _codigo_alumno;
    nota = _nota;   
}

void Persona::mostra_persona(){
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

void Alumno::mostra_alumno(){
    mostra_persona(); // poner directamente mostar persona
    cout << "Codigo del alumno: " << codigo_alumno << endl;
    cout << "Nota final: " << nota << endl;
}

int main(){

    Alumno alumno1("Sergio",20,"89352",9.9);

    alumno1.mostra_alumno();

    return 0;
}