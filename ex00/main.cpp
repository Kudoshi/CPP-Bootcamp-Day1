#include <iostream>
#include "Vec2.hpp"

int main(){

    const Vec2 a = Vec2(3,4);
    Vec2 b = Vec2(1,2);
    const Vec2 sum = a.plus(b);

    // std::cout << "hello, gauntlet\n";

    // std::cout << a.x();
    std::cout << "a = (" << a.x() << ", " << a.y() << "), length " << a.length() << "\n";
    std::cout << "b = (" << b.x() << ", " << b.y() << "), length " << b.length() << "\n";
    std::cout << "a + b = (" << sum.x() << ", " << sum.y() << ")\n";
   
    b.setX(10);
   
    std::cout << "b now (" << b.x() << ", " << b.y() << ")\n";
    
    return 0;
}
