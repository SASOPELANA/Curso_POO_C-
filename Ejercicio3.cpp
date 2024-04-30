/*  Ejercicio 3 POO
    Realice un programa en C++, de tal manera que se construya una solucion para la jeraquia(herencia) de clases mostrara en la siguiente figura.
            Persona
    Empleado      Estudiante
                  Universitario

*/

#include <iostream>
#include <string>
using namespace std;

class Persona{
    private:
        string nombre;
        int edad;
    public:
        Persona(string,int);
        void mostrar_datos();
};

class Estudiante : public Persona{
    private:
        string materia;
        float nota;
    public:
        Estudiante(string,int,string,float);
        void mostrar_alumno(); 
};

class Universitario : public Persona{
    private:
        string universidad;
        string sede;
    public:
        Universitario(string,int,string,string);
        void mostrar_facultad();
};

class Empleado : public Persona{
    private:
        string trabajo;
        string lugar;
    public:
        Empleado(string,int,string,string);
        void mostrar_trabajo();
};

// clase persona. Inicio cons.
Persona::Persona(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

// clase estudiante. Inicio cons.
Estudiante::Estudiante(string _nombre, int _edad, string _materia, float _nota) : Persona(_nombre, _edad){
    materia = _materia;
    nota = _nota;
}

// clase Universitario. Inicio cons.
Universitario::Universitario(string _nombre, int _edad, string _universidad, string _sede) : Persona(_nombre, _edad){
    universidad = _universidad;
    sede = _sede;
}

// Clase Empleado. Inicio cons.
Empleado::Empleado(string _nombre, int _edad, string _trabajo, string _lugar) : Persona(_nombre, _edad){
    trabajo = _trabajo;
    lugar = _lugar;
}

//clase persona. Metodo
void Persona::mostrar_datos(){
    cout << "El mombre: " << nombre << endl;
    cout << "Su edad: " << edad << " años." << endl;
}

// clase estudiante. Metodo
void Estudiante::mostrar_alumno(){
    Persona::mostrar_datos();
    cout << "Materia: " << materia << endl;
    cout << "Nota final:" << nota << endl;
}

// clase Universitario. Metodo
void Universitario::mostrar_facultad(){
    Persona::mostrar_datos();
    cout << "Universidad: " << universidad << endl;
    cout << "Sede: " << sede << endl;
}

// Clase Empleado. Metodo
void Empleado::mostrar_trabajo(){
    Persona::mostrar_datos();
    cout << "Trabajo: " << trabajo << endl;
    cout << "Lugar de trabajo: " << lugar << endl;
}


int main(){

    Universitario u1("Sergio",36,"UTN","Pacheco");
    Empleado e1("Alejandro",26,"GNA","Campo de Mayo");

    u1.mostrar_facultad();
    cout << endl;
    e1.mostrar_trabajo();

    return 0;
}