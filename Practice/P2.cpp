#include <iostream>
using std::cout;

namespace Geometry{
    class shape{
        public:
            void print(){
                cout << "Geometry";
            }
    };
}

namespace Graphics{
    class shape{
        public:
            void print(){
                cout << "Graphics";
            }
    };
}

int main(){
    Geometry::shape s1;
    Graphics::shape s2;
    s1.print();
    s2.print();
    return 0;
}