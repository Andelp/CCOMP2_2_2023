#include <string>
class student{
    private:
    std::string name;
    int age;
    
    public:
    explicit student(std::string n,int a):name(n),age(a){

    }
    void setname(std::string nombre){
        name=nombre;
    }
    void setage(int edad){
        age=edad;
    }
    std::string getname(){
        return name;
    }
    int getage(){
        return age;
    }
    bool older(){
        if(age>=18){
            return true;
        }
        else{
            return false;
        }
    }

};
