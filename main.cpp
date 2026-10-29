#include <iostream>
#include "fields.h"

using namespace std;

int main(){
    //create electric field objects
    Electric_Field E_default;
    Electric_Field E_components(1e5, 10.9, 7e2);
    Electric_Field E_setters;

    //set electric field componenets for setters
    E_setters.setX(2.0);
    E_setters.setY(4.0);
    E_setters.setZ(8.0);

    //output all electric field magnitudes, etc.
    cout << "Electric Fields" << endl;

    cout << "Default Magnitude: " << E_default.calculateMagnitude() << endl;

    cout << "Component Magnitude: " << E_components.calculateMagnitude() << endl;

    cout << "Setters Magnitude: " << E_setters.calculateMagnitude() << endl;

    cout << "Electric Field Inner Product With Components: " << E_components.calculateInnerProduct() << endl;

    cout << "Electric Field Inner Product With Setters: " << E_setters.calculateInnerProduct() << endl;

    cout << "Electric Field Components: (" << E_components.getX() << ", " << E_components.getY() << ", " << E_components.getZ() << ")" << endl;

    cout << "Electric Field Setters: (" << E_setters.getX() << ", " << E_setters.getY() << ", " << E_setters.getZ() << ")" << endl;

    //create magnetic field objects
    Magnetic_Field B_default;
    Magnetic_Field B_components(2.0, 4.0, 8.0);
    Magnetic_Field B_setters;

    //set magnetic field componenets for setters
    B_setters.setX(5.0);
    B_setters.setY(10.0);
    B_setters.setZ(3.0);

    //output all magnetic field magnitudes, etc.
    cout << "Magnetic Fields" << endl;

    cout << "Default Magnitude: " << B_default.calculateMagnitude() << endl;

    cout << "Component Magnitude: " << B_components.calculateMagnitude() << endl;

    cout << "Setters Magnitude: " << B_setters.calculateMagnitude() << endl;

    cout << "Unit Vector With Components: " << endl;
    B_components.calculateUnitVector();

    cout << "Unit Vector With Setters: " << endl;
    B_setters.calculateUnitVector();

    cout << "Magnetic Field Components: (" << B_components.getX() << ", " << B_components.getY() << ", " << B_components.getZ() << ")" << endl;

    cout << "Magnetic Field Setters: (" << B_setters.getX() << ", " << B_setters.getY() << ", " << B_setters.getZ() << ")" << endl;

}
