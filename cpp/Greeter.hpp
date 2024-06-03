#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>

using namespace std;

#ifndef GREETER_H
#define GREETER_H

class Greeter {
    private:
        string message;
    public:
        Greeter(string);
        friend ostream& operator<<(ostream&, const Greeter&);
};

Greeter::Greeter(string msg) {
    message = msg;
}

ostream& operator<<(ostream& os, const Greeter& g) {
    os << g.message;
    return os;
}

#endif
