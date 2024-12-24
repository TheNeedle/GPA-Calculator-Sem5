#include <iostream>
#include <iomanip>
#include <Windows.h>

int main() {

int hours_t;

std::cout << "How many hours are you taking ? : ";
std::cin >> hours_t;  
std::cout << std::endl;

//Subject marks
double Aja {};
double Eng {};
double Bdn {};
double Deen {};
double Math365 {};
double Math364 {};
double Physics {};
double WTN {};
double Chem {};
double Arab {};

std::cout << "Type in your expected marks" << std::endl;
std::cout << "Expected marks for Aja103 : ";
std::cin >> Aja; 
std::cout << "Expected marks for Eng301 : ";
std::cin >> Eng; 
std::cout << "Expected marks for BDN212 : ";
std::cin >> Bdn; 
std::cout << "Expected marks for Deen 301 : ";
std::cin >> Deen; 
std::cout << "Expected marks for Math364 : ";
std::cin >> Math364; 
std::cout << "Expected marks for Math365 : ";
std::cin >> Math365;
std::cout << "Expected marks for Arabic301 : ";
std::cin >> Arab;
std::cout << "Expected marks for Physics312 : ";
std::cin >> Physics;
std::cout << "Expected marks for Watan201 : ";
std::cin >> WTN;
std::cout << "Expected marks for Chem317 : ";
std::cin >> Chem;

// Weighing the Marks
Aja = Aja*2;
Eng = Eng*4;
Bdn = Bdn*2;
Deen = Deen*2;
Math364 = Math364*4;
Math365 = Math365*2;
Physics = Physics*4;
WTN = WTN*2;
Chem = Chem*2;
Arab =Arab*2 ;

//Calculating the GPA

double sum = Aja + Eng + Bdn + Deen + Math364 + Math365 + Physics + WTN + Chem + Arab;

double GPA = sum / hours_t;

std::cout << "Your GPA will be : " << std::fixed << std::setprecision(2) << GPA << std::endl;

Sleep(20000);
return 0;

}