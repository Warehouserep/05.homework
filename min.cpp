#include "min.h"

#include <iostream>
#include <math.h>
#include <limits>

Min::Min() : m_min{std::numeric_limits<double>::max()} {
}

void Min::update(double next) {
    if ( abs(next - static_cast<int>(next)) >= 0) {
        if (next < m_min) {
            std::cout << "min \n";
            m_min = next;
        }
    }
}

double Min::eval() const {
    return m_min;
}

const char *Min::name() const {
    return "min";
}


