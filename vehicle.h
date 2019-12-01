/* Praktikum 3 vehicle.h
 * Created by Lucas Stadtfeld on 01/12/2019.
 *      Klasse, Konstruktor, Getter, Setter, print deklariert
 *      simulate deklariert
 *      Default Parameter in Konstruktor
 */

#ifndef PRAKTIKUM3_VEHICLE_H
#define PRAKTIKUM3_VEHICLE_H

class Vehicle {
public:
    explicit Vehicle(double v = 0, double a= 0, double s = 0, double mass = 1000, double dt = 1, double fMax = 1000, double fAkt = 0); //Konstruktor

    void printVehicle();
    void simulate();
    void roll();
    void accel();
    void decel();

    // Alle Getter
    double getPos();
    double getSpeed();
    double getAccel();
    double getMaxForce();
    double getAktForce();
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
    double v, a, s, dt, mass;
    double F_max, F_akt;
};

#endif //PRAKTIKUM3_VEHICLE_H
