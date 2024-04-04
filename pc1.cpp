#include <iostream>
#include <string>
#include "student.h"


int main(){
    std::string nombre1;
    int edad1;
    std::string nombre2;
    int edad2;

    student estudiante1("nr",2);
    student estudiante2("na",3);

    std::cout<<"ingrese su nombre: ";
    getline(std::cin,nombre1);

    estudiante1.setname(nombre1);

    std::cout<<"ingrese su edad: ";
    std::cin>>edad1;

    estudiante1.setage(edad1);


    std::cout<<"ingrese su nombre: ";
    getline(std::cin,nombre2);

    estudiante2.setname(nombre2);

    std::cout<<"ingrese su edad: ";
    std::cin>>edad2;

    estudiante2.setage(edad2);

    




    std::cout<<estudiante1.getname()<<estudiante1.getage()<<std::endl;
    if(estudiante1.older()==0){
        std::cout<<"no es mayor de edad"<<std::endl;
    }
    else{
        std::cout<<"es mayor de edad"<<std::endl;
    }
    std::cout<<estudiante2.getname()<<estudiante2.getage()<<std::endl;
    if(estudiante2.older()==0){
        std::cout<<"no es mayor de edad"<<std::endl;
    }
    else{
        std::cout<<"es mayor de edad"<<std::endl;
    }

    
    return 0;
}