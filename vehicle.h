/* Praktikum 3 vehicle.h
 * Created by Lucas Stadtfeld on 01/12/2019.
 *      Klasse, Konstruktor, Getter, Setter, print deklariert
 *      simulate deklariert
 *      Default Parameter in Konstruktor
 *  LS 03/12/2019: getVehicleString geschrieben
 *      #includes aufgeräumt
 *      simulate, roll, etc zu complex umgebaut
 */

#ifndef PRAKTIKUM3_VEHICLE_H
#define PRAKTIKUM3_VEHICLE_H

#include <iostream>
#include <string>
#include <complex>

using namespace std;

class Vehicle {
public:
    explicit Vehicle(complex<double> v = 0, complex<double> a= 0, complex<double> s = 0, complex<double> fAkt = 0
            , double mass = 1000, double dt = 1, double fMax = 1000); //Konstruktor

    void printVehicle();
    //string getVehicleString();
    void simulate();
    void roll();
    void accel();
    void decel();
    void up();
    void down();

    // Alle Getter
    double getXPos();
    double getYPos();
    complex<double> getComplexPos();
    complex<double> getSpeed();
    complex<double> getAccel();
    double getMaxForce();
    complex<double> getAktForce();
    double getMass();
    double getTime();

    // Alle Setter
    void setPos(double positionToSet);
    void setSpeed(double speedToSet);
    void setAccel(double accelerationToSet);
    void setMaxForce(double maxForceToSet);
    void setAktForce(double aktForceToSet);
    void setMass(double massToSet);
    void setTime(double timeToSet);

private:
    complex<double> v, a, s, F_akt;
    double F_max,dt, mass;
};

#endif //PRAKTIKUM3_VEHICLE_H
