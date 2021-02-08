#include <iostream>
#include <string>
#include <typeinfo>

int main(){
    int a,number=10, divisor=0;
    // std::string lang = "C++";

    // try{
    //     for(number =1; number<=20; number ++)
    //     {
    //         if(number>11) throw (number);
    //         else {
    //             std::cout << "number is " << number << std::endl;
    //         }
    //     }
    // }
    // catch(int num){
    //     std::cout << "error found at number" << num << std::endl;
    // }

    try{
        if (divisor==0) std::__throw_overflow_error("Divide by zero, really !");
        else{
                    a = number/divisor;
        }
        // lang.erase(4,6);
    }
    catch(std::exception &error){
        std::cout << "error is " << typeid(error).name() << std::endl;
        std::cout << "error is " << error.what() << std::endl;
    }
}