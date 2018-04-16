#include <iostream>
#include <string>

using namespace std;

class Example
{
    class Container
    {
        public:
            int *z;
            unsigned h[70];
    };

    Container container;
    public:
        Example()
        {
            cout << "Example created at " << (void *)this << endl;
        }
};

int other()
{
    cout << "Salve, OTHER" << endl;

    Example *ex[120];

    for (unsigned int u = 0; u < 10; u++)
        ex[u] = new Example();

    for (unsigned int u = 0; u < 10; u++)
        if (ex[u])
            delete ex[u];

    return 0;
}
