// Polimorfismo POO

#include <iostream>
#include <string>
using namespace std;

class Persona{
    private:
        string nombre;
        int edad;
    public:
        Persona(string,int);
        virtual void mostrar(); // Polimorfismo
}; 

class Alumno : public Persona{
    private:
        float nota;
    public:
        Alumno(string, int, float);
        void mostrar();
};

class Profesor : public Persona{
    private:
        string materia;
    public:
        Profesor(string,int,string);
        void mostrar();
};

Persona::Persona(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

Alumno::Alumno(string _nombre,int _edad,float _nota) : Persona(_nombre, _edad){
    nota = _nota;
}

void Persona::mostrar(){
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

void Alumno::mostrar(){
    Persona::mostrar();
    cout << "Nota Final: " << nota << endl;
}

Profesor::Profesor(string _nombre, int _edad, string _materia) : Persona(_nombre, _edad){
    materia = _materia;
}

void Profesor::mostrar(){
    Persona::mostrar();
    cout << "Materia: " << materia << endl;
}

int main(){

    Persona *vector[3];
    vector[0] = new Alumno("Sergio", 35,9.8);
    vector[1] = new Alumno("Maria", 22,8);
    vector[2] = new Profesor("Jose",40,"Programacion 1");
    vector[3] = new Persona("Alejandro", 25);

    vector[0]->mostrar();
    cout << endl;
    vector[1]->mostrar();
    cout << endl;
    vector[2]->mostrar();
    cout << endl;
    vector[3] ->mostrar();

    return 0;
}