// Basic function optimization in cpp.
// Factorial is the product of the number and all number below that number

#include <iostream>
using namespace std;

unsigned long int computeFactorial(int,int);
inline unsigned long int factorial(int);

int main()
{
    computeFactorial(1,20);
}

unsigned long int computeFactorial(int num, int max)
{
    cout << "Factiorial of " << num << " :"; 
    cout << factorial(num) << endl;
    num++;
    if (num > max) return 0;
    else computeFactorial(num,max);
}

// unsigned long int factorial(int num)
// {
//     unsigned long int result;
//     if (num == 1) result = 1 ;
//     else result = (factorial(num-1)*num);
//     return result;
// }

// unsigned long int factorial(int num)
// {
//     unsigned long int result;
//     if (num == 1) result = 1 ;
//     else result = (factorial(num-1)*num);
//     return result;
// }

inline unsigned long int factorial(int num)
{return (num==1) ? 1:(factorial(num-1)*num);}