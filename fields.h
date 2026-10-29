#ifndef FIELDS_H
#define FIELDS_H

#include <cmath>
#include <iostream>

using namespace std;

class Electric_Field{
    private:
	double *E;

    public:
	//default constructor
	Electric_Field(){
	    E = new double[3];
	    E[0] = 0.0;
	    E[1] = 0.0;
	    E[2] = 0.0;
	}

	//constructor with 3 componenets
	Electric_Field(double x, double y, double z){
	    E = new double[3];
	    E[0] = x;
	    E[1] = y;
	    E[2] = z;
	}

	//destructor
	~Electric_Field(){
	    delete[] E;
	}

	//getters
	double getX() {return E[0];}
	double getY() {return E[1];}
	double getZ() {return E[2];}

	//setters
	void setX(double x) {E[0] = x;}
	void setY(double y) {E[1] = y;}
	void setZ(double z) {E[2] = z;}

	//calculate magnitude
	double calculateMagnitude(){
	    return sqrt((E[0] * E[0]) + (E[1] * E[1]) + (E[2] * E[2]));
	}

	//calculate inner product
	double calculateInnerProduct(){
	    return (E[0] * E[0]) + (E[1] * E[1]) + (E[2] * E[2]);
	}
};

class Magnetic_Field{
    private:
	double *B;

    public:
	//default constructor
	Magnetic_Field(){
	    B = new double[3];
	    B[0] = 0.0;
	    B[1] = 0.0;
	    B[2] = 0.0;
	}

	//constructor with 3 components
	Magnetic_Field(double x, double y, double z){
	    B = new double[3];
	    B[0] = x;
	    B[1] = y;
	    B[2] = z;
	}

	//destructor
	~Magnetic_Field(){
	    delete[] B;
	}

	//getters
	double getX() {return B[0];}
	double getY() {return B[1];}
	double getZ() {return B[2];}

	//setters
	void setX(double x) {B[0] = x;}
	void setY(double y) {B[1] = y;}
	void setZ(double z) {B[2] = z;}

	//calculate magnitude
	double calculateMagnitude(){
	    return sqrt((B[0] * B[0]) + (B[1] * B[1]) + (B[2] * B[2]));
	}

	//calculates unit vector
	void calculateUnitVector(){
	     double magnitude = calculateMagnitude();

	     if(magnitude == 0.0){
		cout << "The unit vector is undefined!" << endl;
		return;
	     }

	     cout << "(" << B[0]/magnitude << "," << B[1]/magnitude << "," << B[2]/magnitude << ")" << endl;
	}
	
};

#endif
