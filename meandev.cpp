#include "meandev.h"

#include <iostream>
#include <limits>
#include <math.h>

MeanDev::MeanDev() : m_meandev{ std::numeric_limits<double>::min() } {
}

void MeanDev::update(double elements) {
    if ( abs(elements - static_cast<int>(elements)) >= 0){
        if (elements) {
            m_counter++;
            std::cout << "meandev \n";
            m_sum += elements;
            m_meantemp = m_sum / m_counter;
            m_bigsum += pow((elements - m_meantemp),2);
            //В_тз_не_указана_какая_оценка_должна_быть_по_дефолту_делаю_не_смещенную
            //несмещенная_оценка
            m_meandev = sqrt(m_bigsum / (m_counter - 1));
            //смещенная_оценка
            //m_meandev = sqrt(bigsum/counter);
        }
    }
}

double MeanDev::eval() const {
    return m_meandev;
}

const char *MeanDev::name() const {
    return "m_meandev";
}
