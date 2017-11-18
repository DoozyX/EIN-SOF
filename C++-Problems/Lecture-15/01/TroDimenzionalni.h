#ifndef INC_02_TRODIMENZIONALNI_H
#define INC_02_TRODIMENZIONALNI_H

#include "DvoDomenzionalni.h"

class TroDimenzionalni : public DvoDomenzionalni{
private:
    int z;
    static int troDimenzionalniCount;
public:
    TroDimenzionalni(int x, int y, int z);


    double Area() override;

    double Peremiter() override;

    double Volume() override;

    int getZ() const;

    void setZ(int z);

    const string toString() override;

    ~TroDimenzionalni() override;
};


#endif //INC_02_TRODIMENZIONALNI_H
