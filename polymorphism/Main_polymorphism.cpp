#include <iostream>
#include <string>

// Абстрактный класс Machine
class Machine{
    public:
        virtual void Info(){
            std::cout<<"The machine"<<std::endl;
        }
};
// Наследник класса Machine
class CoffeeMachine: public Machine{
    public:
        void Info() override{
                std::cout<<"The coffee machine"<<std::endl;
        }
};
// Наследник класса Machine
class Printer: public Machine{
    public:
        void Info() override{
                std::cout<<"The printer"<<std::endl;
        }
};
// Класс проверяющий какой тип машины был ему передан
class Person{
    public:
        void InfoMachine(Machine *machine){  // Можем передавать всех наследников Machine
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