/* Praktikum 3 - main.cpp
 * Created by Lucas Stadtfeld on 01.12.2019
 *      Testimplementierung mit Konsoleneingabe
 * LS 03/12/2019 #includes aufgeräumt
 */

#include "vehicle.h"

using namespace std;

int main() {
    cout << "Beginn main():" << endl << endl;
    char consoleInput = '0';

    Vehicle veh1;

    complex<double> test = {0,1};
    cout << test << endl;
    //veh1.printVehicle();
    /*for (int i = 10; i > 0; i--) {
        veh1.accel();
        veh1.simulate();
        veh1.printVehicle();
    }*/
    do {
        cout << "Was tun? a, d, u, d, r, t, e" << endl;
        cin >> consoleInput;
        if (consoleInput == 'a') {
            veh1.accel();
        }
        if (consoleInput == 'd') {
            veh1.decel();
        }
        if (consoleInput == 'r') {
            veh1.roll();
        }
        if (consoleInput == 'u') {
            veh1.up();
        }
        if (consoleInput == 'd') {
            veh1.down();
        }
        if (consoleInput == 't') {
            veh1.simulate();
        }
        veh1.printVehicle();
        //cout << veh1.getVehicleString() << endl;
    } while (consoleInput != 'e');

    return 0;
}