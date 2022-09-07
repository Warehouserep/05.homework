#ifndef MAX_H
#define MAX_H

#include "istatistics.h"

//-----------------------------------------------------------------------
//вычисление_максимального_значения
class Max : public IStatistics {
public:
    Max();

    //переопределение_функции_update
    void update(double back) override;

    //переопределение_функции_eval_
    double eval() const override;

    //переопределение_функции_name_
    const char* name() const override;
private:
    double m_max;
};

#endif // MAX_H
