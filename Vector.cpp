#include <math.h>
#include <iostream>

class vector
{
public:
    vector() : x(10), y(15), z(14)
    {}
public:
   void VectorLength()
   {
       double a = pow((x + y + z), 2);
       double g = sqrt(a);
       std::cout << "x" << x << " " << "y" << y << " " << "z" << z << "\n";
       std::cout << a << "\n";
       std::cout << g;
   }
private:
    double x;
    double y;
    double z;
};

int main()
{
    vector vec;
    vec.VectorLength();
    
}
