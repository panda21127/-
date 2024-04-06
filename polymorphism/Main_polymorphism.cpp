#include <iostream>
#include <string>

class Machine{
    public:
        virtual void Info(){
            std::cout<<"The machine"<<std::endl;
        }
};

class CoffeeMachine: public Machine{
    public:
        void Info() override{
                std::cout<<"The coffee machine"<<std::endl;
        }
};

class Printer: public Machine{
    public:
        void Info() override{
                std::cout<<"The printer"<<std::endl;
        }
};

class Person{
    public:
        void InfoMachine(Machine *machine){
            machine -> Info();
        }

};

int main(int argc, char **argv){
    CoffeeMachine coffeeMachine;
    Printer printer;
    Person person;
    person.InfoMachine(&printer);
    person.InfoMachine(&coffeeMachine);
    return 0;
}