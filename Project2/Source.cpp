#include <iostream>
#include <math.h>
int main()
{
    double x(0.43);
    double a(0.7);
    double b(0.05);
    double R;
    R = pow(x,2)*(x+1)/(b -  pow(sin(x-a),2));
      
    std::cout << "R = " << R << std::endl;
    std::cin.get();
    return 0;
}
//R = x2(x + 1) / b - sin2(x - a);// 