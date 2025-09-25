#include <iostream.>
#include <BrazoRobotico.h>

int main(){
	BrazoRobotico brazo;
	
	brazo.mover(2.0, 4.0, 1.0);
	brazo.coger();
	
	std::cout << "Está sujetando un objeto? =>" << brazo.getSujetandoObjeto(); << std::endl;
	std::cout << "Posición actual: X:"<< brazo.getX() << " Y:" << brazo.getY() << " Z:" << brazo.getZ(); << std::endl;
	
	return 0;
}
