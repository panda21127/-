#include <iostream>
#include <string>

// Абстрактный класс Machine
class Machine{
    public:
        std::string manufacturer = "ALMA";
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

int main(int argc, char **argv){

    CoffeeMachine coffeeMachine;
    Printer printer;

    std::cout<< coffeeMachine.manufacturer<< std::endl;
    std::cout<< printer.manufacturer<< std::endl;
    return 0;
}