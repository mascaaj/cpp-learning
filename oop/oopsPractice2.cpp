#include <iostream>
#include <string>

using namespace std;

class Dog
{
    private:
        int age,weight;
        string color,bark;
    public:
        void getBark() {cout << bark << endl;}
        // void setAge(int yrs){age = yrs;}
        // void setWeight(int lbs){weight = lbs;}
        Dog(int age, int weight, string bark):age(age),weight(weight),bark(bark){ }
        Dog();
        ~Dog();
        void getAge() {cout<< age << endl;}
        void getWeight() {cout<< weight << endl;}
};

Dog::Dog()
{
    this-> age = 100;
    this-> weight = 200;
    this-> bark = "Grr";
    
}

Dog::~Dog(){

}
int main() {
    Dog Fido(75,65,"Meao");
    Fido.getAge();
    Fido.getWeight();
    Fido.getBark();

    Dog Rambo;
    Rambo.getAge();
    Rambo.getWeight();
    Rambo.getBark();

}