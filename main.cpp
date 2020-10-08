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
    if (x< (pow(2, 31)-1) || (x> -1 * pow(2, 31)))
    {
        R0 = 8 * pow(x, 3) + 2 * pow(x, 4) - 1;
        std::cout<<std::setprecision(4) << R0 <<  std::endl;
    }
    else
    {
        std::cout<< "invalid input"<<std::endl;
    }

    std::cout<<"Задача 2"<<std::endl;
    std::cin >> a;

    R1 = 2* abs(int (a)) - 3 * sqrt(a + 1);
    std::cout  << R1 << std::endl;

    std::cout<<"Задача 3"<<std::endl;
    std::cout << "set values for k,l,m,n"<<std::endl;
    std::cin >> k>> l>> m>> n;
    R2 = m ^ k | ((!l) & n);
    if (R2==0)
    {
        std::cout<<" false "<<std::endl;
    }
    if (R2==1)
    {
        std::cout<<" true "<<std::endl;
    }

    std::cout<<"Задача 4"<<std::endl;
    std::cin >> b;
    if (b >= 0 && b <= 7) {
        R3 = pow(2, b);
        std::cout <<" DEC: " << R3 << std::endl;
        std::cout<< "OCT: " << std::oct << R3 << std::endl;
    } else {
        std::cout << " Invalid input "<<std::endl;
    }

    std::cout<<"Задача 5"<<std::endl;
    std::cout<<"set values for c,d,e,f "<<std::endl;
    std::cin >> c >> d>> e>> f;
    R4 = f & !(e | (c ^ d));
    std::cout << R4 << std::endl;
    return 0;
}