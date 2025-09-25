#include <iostream.h>
#include <BrazoRobotico.h>

int main(){

	BrazoRobotico brazo = new BrazoRobotico();
	brazo.mover(2.0, 4.0, 1.0);
	brazo.coger();
	std::cout >> "Objeto cogido";
	return 0;
}
