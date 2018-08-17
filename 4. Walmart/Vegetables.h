#ifndef VEGETABLES_H
#define VEGETABLES_H
#include <iostream>
#include <string>
using namespace std;

class Vegetables {
    public:
        Vegetables();
        void setName(string x)
        {
            name = x;
        }
        string getName()
        {
            return name;
        }

    private:
        string name;
};


#endif