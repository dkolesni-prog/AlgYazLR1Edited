#include <iostream>
#include <cmath>
#include <iomanip>

int main () {
    int x, b, R3;
    unsigned short R4, c, d, e, f;
    unsigned int  a;
    bool k, l, m, n, R2;
    float R0, R1;

    std::cout << "Hello, user" << std::endl; //std::cout << "Hello, World!" << std::endl;
    std::cout<<"Задача 1"<<std::endl;
    std::cin >> x;
    std::cout<<std::setprecision(3) << 8 * pow(x, 3) + 2 * pow(x, 4) - 1 <<  std::endl;



    std::cout<<"Задача 2"<<std::endl;
    std::cin >> a;
    R1 = 2* abs(int (a)) - 3 * sqrt(a + 1);
    std::cout<< std::showpos << R1 << std::endl;

    std::cout<<"Задача 3"<<std::endl;
    std::cout << "set values for k,l,m,n"<<std::endl;
    std::cin >> k>> l>> m>> n;
    std::cout<<std::boolalpha<< (m != k || (!l && n))<<std::endl;

    std::cout<<"Задача 4"<<std::endl;
    std::cin >> b;
    R3 = pow(2, b);
    std::cout <<"DEC: " << R3 << std::endl;
    std::cout<< "OCT: " << std::oct << R3 << std::endl;


    std::cout<<"Задача 5"<<std::endl;
    std::cout<<"set values for c,d,e,f "<<std::endl;
    std::cin >> c >> d>> e>> f;
    std::cout<<std::showbase << std::internal<< std::hex << std::setw(6)<< std::setfill('0') <<  (f & ( ~ (e | (c ^ d )))) ;
    return 0;
}