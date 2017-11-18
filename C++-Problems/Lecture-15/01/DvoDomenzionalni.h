
#ifndef INC_02_DVODOMENZIONALNI_H
#define INC_02_DVODOMENZIONALNI_H


#include "Oblik.h"

class DvoDomenzionalni : public Oblik{
private:
    int x;
    int y;
    static int dvoDomenzionalniCount;
public:
    explicit DvoDomenzionalni(int x = 0, int y = 0);

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

    double Area() override;

    double Peremiter() override;

    double Volume() override;

    static int getDvoDomenzionalniCount();

    const string toString() override;


    ~DvoDomenzionalni() override;

};


#endif //INC_02_DVODOMENZIONALNI_H
