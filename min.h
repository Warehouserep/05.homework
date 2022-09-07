#ifndef MIN_H
#define MIN_H

#include "istatistics.h"

//-----------------------------------------------------------------------
//вычисление_минимального_значения
class Min : public IStatistics {
public:
    Min();

    //переопределение_функции_update
    void update(double next) override;

    //переопределение_функции_eval
    double eval() const override;

    //переопределение_функции_name
    const char * name() const override;

private:
    double m_min;
};

#endif // MIN_H
