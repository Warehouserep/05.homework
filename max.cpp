#include "max.h"

#include <iostream>
#include <limits>
#include <math.h>


Max::Max() : m_max{std::numeric_limits<double>::lowest()} {
}

void Max::update(double back) {
    if (abs(back - static_cast<int>(back) ) >= 0) {
        if (back > m_max) {
            std::cout << "max \n";
            m_max = back;
        }
    }
}

double Max::eval() const {
    return m_max;
}

const char *Max::name() const {
    return "max";
}

