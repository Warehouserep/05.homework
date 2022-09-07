#ifndef PERCENT90_H
#define PERCENT90_H

#include "istatistics.h"

//-------------------------------------------------------------------
//Вычисление_90-го_процентиля
class Percent90 : public IStatistics {
public:
    Percent90();

    //переопределение_функции_update
    void update(double elements) override;

    //переопределение_функции_eval
    double eval() const override;

    //переопределение_функции_name
    const char* name() const override;

private:
    double m_percent90;
    int m_counter = 0;	//счетчик_элементов
};

#endif // PERCENT90_H
