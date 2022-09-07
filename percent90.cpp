#include "percent90.h"

#include <iostream>
#include <limits>
#include <math.h>

Percent90::Percent90() : m_percent90{ std::numeric_limits<double>::min() } {
}

void Percent90::update(double elements) {
    if ( abs(elements - static_cast<int>(elements)) >= 0) {
        if (elements) {
            m_counter++;
            std::cout << "percent_90 \n";
            //создание_массива_переменной_длины_и_его_заполнение
            double* mass = new double[m_counter];
            for (int i = 0; i < m_counter; i++) {
                mass[i] = 2 * mass[i];
            }
            //1_сортировка_массива_по_возрастанию
            //(в_иделе_сортировка_нужна_TimSort_но_сделал_простую)



            //2_выделяем_значения_в_диапазоне_90
            m_percent90 = m_counter * 0.9 - 1;
        }
    }
}

double Percent90::eval() const {
    return m_percent90;
}

const char *Percent90::name() const {
    return "m_percent90";
}
