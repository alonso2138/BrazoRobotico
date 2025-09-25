#include <BrazoRobotico.cpp>

class BrazoRobotico(){
	private:
		int x;
		int y;
		int z;
		bool sujetandoObjeto;
	public:
		BrazoRobotico();
		getX();
		getY();
		getZ();
		getSujetandoObjeto();
		coger();
		soltar();
		mover(double _x, double _y, double _z);
}
