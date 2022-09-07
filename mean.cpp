#include "mean.h"

#include <iostream>
#include <limits>

Mean::Mean() : m_mean{0} {
}

void Mean::update(double elements) {
    if (abs(elements - static_cast<int>(elements))  >= 0) {
        if (elements) {
            m_counter++;
            std::cout << "mean \n";
            m_sum += elements;
            if (m_sum) {
                m_mean = m_sum / m_counter;
            }
        }
    }
}

double Mean::eval() const {
    return m_mean;
}

const char *Mean::name() const {
    return "mean";
}
