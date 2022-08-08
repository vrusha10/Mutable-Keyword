#include <iostream>
using namespace std;
class Test
{
    public:
    int a;
    int b;
    mutable int c;
    Test()
    {
        a=1;
        b=2;
        c=3;
    }
};
int main()
{
    const Test t1;
    t1.c=12;
    cout<<" A= "<<t1.a<< " B= "<<t1.b<< " C= "<<t1.c<<endl;
}