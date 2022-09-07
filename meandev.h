#ifndef MEANDEV_H
#define MEANDEV_H

#include "istatistics.h"

//----------------------------------------------------------------------
//Вычисление_среднеквадратичного_отклонения
class MeanDev : public IStatistics {
public:
    MeanDev();

    //переопределение_функции_update
    void update(double elements) override;

    //переопределение_функции_eval
    double eval() const override;

    //переопределение_функции_name
    const char* name() const override;

private:
    double m_meandev;
    int m_counter = 0;	//счетчик_элементов
    double m_sum = 0;		//промежуточная_сумма_для_среднего
    double m_meantemp = 0;
    double m_bigsum = 0;	//финальная_сумма

};

#endif // MEANDEV_H
