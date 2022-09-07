#ifndef MEAN_H
#define MEAN_H

#include "istatistics.h"

//-----------------------------------------------------------------------
//Вычисление_среднего_арифметического
class Mean : public IStatistics {
public:
    Mean();

    //переопределение_функции_update
    void update(double elements) override;

    //переопределение_функции_eval
    double eval() const override;

    //переопределение_функции_name
    const char* name() const override;

private:
    double m_mean;
    double m_sum = 0;
    int m_counter = 0;

};

#endif // MEAN_H
