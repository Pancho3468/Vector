
#include <iostream>

class vector
{
public:
    vector() : x(10), y(15), z(14)
    {}
public:
   vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
   {}
   void VectorLength()
   {
       std::cout << "x" << x << " " << "y" << y << " " << "z" << z;
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
