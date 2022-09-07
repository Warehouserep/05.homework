#ifndef PERCENT95_H
#define PERCENT95_H

#include "istatistics.h"

//-------------------------------------------------------------------
//Вычисление_95-го_процентиля
class Percent95 : public IStatistics {
public:
    Percent95();

    //переопределение_функции_update
    void update(double elements) override;

    //переопределение_функции_eval
    double eval() const override;

    //переопределение_функции_name
    const char* name() const override;

private:
    double m_percent95;
    int m_counter = 0;	//счетчик_элементов

};


#endif // PERCENT95_H
