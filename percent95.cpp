#include "percent95.h"

#include <iostream>
#include <limits>
#include <math.h>

Percent95::Percent95() : m_percent95{ std::numeric_limits<double>::min() } {
}

void Percent95::update(double elements) {
    if ( abs(elements - static_cast<int>(elements)) >= 0 ) {
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
            m_percent95 = m_counter * 0.95 - 1;
        }
    }
}

double Percent95::eval() const {
    return m_percent95;
}

const char *Percent95::name() const {
    return "m_percent95";
}
