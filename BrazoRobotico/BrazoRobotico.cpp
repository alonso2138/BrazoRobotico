#include "BrazoRobotico.h"

BrazoRobotico::BrazoRobotico(){
	x=0;
	y=0;
	z=0;
	sujetandoObjeto=false;
}

int BrazoRobotico::getX(){
	return x;
}

int BrazoRobotico::getY(){
	return y;
}

int BrazoRobotico::getZ(){
	return z;
}

bool BrazoRobotico::getSujetandoObjeto(){
	return sujetandoObjeto;
}

void BrazoRobotico::coger(){
	sujetandoObjeto=true;
}

void BrazoRobotico::soltar(){	
 	sujetandoObjeto=false;
}

void BrazoRobotico::mover(double _x, double _y, double _z){
	x=_x;
	y=_y;
	z=_z;
}





























 
	



	







		

