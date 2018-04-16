#include <stdlib.h>

#include <iostream>
#include <string>
#include <vector>

#define NR_OBJECTS  50
#define ITERATIONS  200000

using namespace std;

class Base
{
public:
    enum type_t
    {
        FREE = 0,
        STRING,
        INT,
        VECTOR,
//        MAP,
//        SET,
        __LAST
    };

    virtual Base *allocate() = 0;
    virtual bool deallocate() = 0;
};

class String_allocator : public Base
{
private:
    string *container;

public:
    Base *allocate()
    {
        container = new string("String class to test my memory allocator");

        if (container != NULL)
            return this;
        else
            return static_cast<Base *>(0l);
    }

    bool deallocate()
    {
        if (container != NULL)
            delete container;

        return true;
    }
};

class Int_allocator : public Base
{
private:
    int *container;

public:
    Base *allocate()
    {
        container = new int[7];

        if (container != NULL)
            return this;
        else
            return NULL;
    }

    bool deallocate()
    {
        if (container != NULL)
            delete[] container;

        return true;
    }
};

class Vector_allocator : public Base
{
private:
    vector<int> container;

public:
    Base *allocate()
    {
        container.push_back(12);
        container.push_back(24);
        container.push_back(36);
        container.push_back(48);
        container.push_back(60);

        return this;
    }

    bool deallocate()
    {
        return true;
    }
};

int stress_test()
{
    cout << "Salve, stress_test" << endl;

    Base *objects[NR_OBJECTS];

    if (objects == NULL)
        return 0;

    Base::type_t *types = new Base::type_t[NR_OBJECTS];

    if (types == NULL)
        return 0;

    for (unsigned int i = 0; i < NR_OBJECTS; i++)
    {
        types[i] = Base::FREE;
        objects[i] = NULL;
    }

    for (unsigned int i = 0; i < ITERATIONS; i++)
    {
        unsigned int index = random() % NR_OBJECTS;

        if (types[index] == Base::FREE)
        {
            unsigned int new_type = random() % (Base::__LAST - 1) + 1;

            switch (new_type)
            {
                case Base::FREE:
#ifdef DEBUG
                    printf("Programmer's knowledge is too little!\n");
#endif
                    return 0;

                case Base::STRING:
                {

                    String_allocator *ptr = new String_allocator;

                    if (ptr != NULL)
                    {
                        ptr->allocate();
                        types[index] = Base::STRING;
                        objects[index] = ptr;
                    }

                    break;
                }

                case Base::INT:
                {
                    Int_allocator *ptr = new Int_allocator;

                    if (ptr != NULL)
                    {
                        ptr->allocate();
                        types[index] = Base::INT;
                        objects[index] = ptr;
                    }

                    break;
                }

                case Base::VECTOR:
                {
                    Int_allocator *ptr = new Int_allocator;

                    if (ptr != NULL)
                    {
                        ptr->allocate();
                        types[index] = Base::INT;
                        objects[index] = ptr;
                    }

                    break;
                }
                default:
                {
#ifdef DEBUG
                    printf("Error in random number generation.\n");
#endif
                }
            }
        }
        else
        {
            objects[index]->deallocate();
            delete objects[index];
            types[index] = Base::FREE;
        }

    }

    return 0;
}
