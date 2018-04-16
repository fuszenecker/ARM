#include <stdio.h>
#include <malloc.h>
#include <stdint.h>
#include <limits.h>

#include <iostream>
#include <set>
#include <string>
#include <map>

//#define DEBUG

#include "memory_allocator.h"

#define MEMSIZE   4096
#define BLOCKSIZE 16

using namespace std;

typedef set<int> Set;

uint8_t memory_map[MEMSIZE / BLOCKSIZE];
unsigned char memory[MEMSIZE];

IMPLEMEMENT_MEMORY_ALLOCATOR(unsigned char, memory, MEMSIZE, uint8_t, memory_map, BLOCKSIZE);

extern int stress_test();

int main()
{
    printf("Salve, munde\n");

    cout << "Integer test" << endl;
    int *ints = new int[12];
    ints[0] = 123;
    cout << "Should be 123: " << ints[0] << endl;

    cout << "Character test" << endl;
    char *chars = new char[13];
    chars[12] = 'D';
    cout << "Should be 'D': " << chars[12] << endl;

    cout << "Set test" << endl;
    Set uints;
    uints.insert(120);
    uints.insert(555);
    uints.insert(666);
    uints.insert(777);
    uints.insert(888);

    cout << "Should be \"Found\": ";

    if (uints.find(888) != uints.end())
        cout << "Found" << endl;

    cout << "Map test" << endl;
    map<string, int> my_map;
    my_map["Hello"] = 1978;
    my_map["Welt"] = my_map["Hello"];
    cout << "Should be 1978: " << my_map["Welt"] << endl;

    cout << "String test" << endl;
    string *str = new string("Hello operator_new()");
    cout << "Should be \"Hello operator_new()\": " << *str << endl;

    delete str;

    delete[] ints;
    delete[] chars;

    stress_test();

    return 0;
}


