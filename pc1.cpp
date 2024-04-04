#include <iostream>
#include <string>
#include "student.h"


int main(){
    std::string nombre;
    int edad;

    student estudiante1("nr",2);
    student estudiante2("na",3);

    std::cout<<"ingrese su nombre: ";
    getline(std::cin,nombre);

    estudiante1.setname(nombre);

    std::cout<<"ingrese su edad: ";
    std::cin>>edad;

    estudiante1.setage(edad);
    std::cin.ignore();

    std::cout<<"ingrese su nombre: ";
    getline(std::cin,nombre);

    estudiante2.setname(nombre);

    std::cout<<"ingrese su edad: ";
    std::cin>>edad;

    estudiante2.setage(edad);

    




    std::cout<<estudiante1.getname()<<" "<<estudiante1.getage()<<std::endl;
    if(estudiante1.older()==0){
        std::cout<<"no es mayor de edad"<<std::endl;
    }
    else{
        std::cout<<"es mayor de edad"<<std::endl;
    }
    std::cout<<estudiante2.getname()<<" "<<estudiante2.getage()<<std::endl;
    if(estudiante2.older()==0){
        std::cout<<"no es mayor de edad"<<std::endl;
    }
    else{
        std::cout<<"es mayor de edad"<<std::endl;
    }

    
    return 0;
}
