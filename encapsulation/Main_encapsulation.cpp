#include <iostream>
#include <string>

class Printer{
    private:
        //Скрытая функция, проверяющая напряжжение в сети
        bool CheckVoltage(){
            return true;  // попробуйте изменить значение на 'false'
        }

    public:
        //Публичная функция, запускающая принтер
        void Start(){
            if(CheckVoltage()){
                std::cout<<"Correct voltage"<<std::endl;
                std::cout<<"The printer is working"<<std::endl;
            }
            else{
                std::cout<<"Incorrect voltage"<<std::endl;
                std::cout<<"The printer is not working"<<std::endl;
            }
        }
};

int main(int argc, char **argv){
    Printer printer;
    printer.Start();
    //printer.CheckVoltage();
    //Если попытаемся вызвать printer.CheckVoltage(), то при комплиция вылезет ошибка, о том что мы не имеем права использовать эту функцию 
    return 0;
}