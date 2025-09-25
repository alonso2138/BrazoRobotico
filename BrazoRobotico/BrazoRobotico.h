#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

class BrazoRobotico {
private:
    int x, y, z;
    bool sujetandoObjeto;
public:
    BrazoRobotico();
    int  getX();
    int  getY();
    int  getZ();
    bool getSujetandoObjeto();
    void coger();
    void soltar();
    void mover(double _x, double _y, double _z);
};

#endif

