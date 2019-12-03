/*  Praktikum 3 vehicle.cpp
 *  Created by Lucas Stadtfeld on 01/12/2019.
 *      Getter, Setter, print definiert
 *      Simulate definiert
 *  LS 03/12/2019: getVehicleString geschrieben
 *      #includes aufgeräumt
 *      getVehicleString entfernt und printVehicle umgebaut
*/

#include "vehicle.h"

using namespace std;

Vehicle::Vehicle(complex<double> v, complex<double> a, complex<double> s, complex<double> fAkt, double mass, double dt, double fMax)
    :        v(v), a(a), s(s), mass(mass), dt(dt), F_max(fMax), F_akt(fAkt) {
}

void Vehicle::printVehicle() {
    cout << "a: " << this->a << ", v: " << this->v << ", s: " << this->s << ", F_akt: " << this->F_akt << endl;
}

/*string Vehicle::getVehicleString() {
    return "a: " + to_string(this->a) + ", v: " + to_string(this->v) + ", s: "
           + to_string(this->s) + ", F_akt: " + to_string(this->F_akt);
}*/

void Vehicle::simulate() {
    this->a = this->F_akt / this->mass;
    //cout << "a  " << this->a << endl;
    this->F_akt = {0,0};
    this->v = this->v + this->a * this->dt;
    this->s = this->s + this->v * dt + (this->a * this->dt * this->dt) / 2.;
}
void Vehicle::roll() {
    this->F_akt = {0,0};
}
void Vehicle::accel() {
    this->F_akt = {this->F_max, 0};
}
void Vehicle::decel() {
    this->F_akt = {this-> F_max * -1, 0};
}
void Vehicle::up() {
    this->F_akt = {0, this->F_max};
}
void Vehicle::down() {
    this->F_akt = {0, this->F_max * -1};
}

//Definitionen Getter
double Vehicle::getXPos() {
    return this->s.real();
}
double Vehicle::getYPos() {
    return this->s.imag();
}
complex<double> Vehicle::getComplexPos() {
    return this->s;
}
complex<double> Vehicle::getSpeed() {
    return this->v;
}
complex<double> Vehicle::getAccel() {
    return this->a;
}
double Vehicle::getTime() {
    return this->dt;
}
double Vehicle::getMaxForce() {
    return this->F_max;
}
complex<double> Vehicle::getAktForce() {
    return this->F_akt;
}
double Vehicle::getMass() {
    return this->mass;
}

//Definitionen Setter
void Vehicle::setMass(double massToSet) {
    this->mass = massToSet;
}
void Vehicle::setAccel(double accelerationToSet) {
    this->a = accelerationToSet;
}
void Vehicle::setPos(double positionToSet) {
    this->s = positionToSet;
}
void Vehicle::setSpeed(double speedToSet) {
    this->v = speedToSet;
}
void Vehicle::setTime(double timeToSet) {
    this->dt = timeToSet;
}
void Vehicle::setMaxForce(double maxForceToSet) {
    this->F_max = maxForceToSet;
}
void Vehicle::setAktForce(double aktForceToSet) {
    this->F_akt = aktForceToSet;
}
