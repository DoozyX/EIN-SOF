#include <iostream>
#include <vector>
#include "Vraboten.h"
#include "Profesor.h"
#include "Asistent.h"
#include "Demonstrator.h"

using namespace std;

static const int MENU_N = 3;
static const int VRABOTEN_N = 4;

int menu() {
    int n;
    cout << "1. Nov Vraboten\n"
         << "2. Pecati lista\n"
         << "3. Kraj\n"
         << "Izbor: ";
    cin >> n;
    if (n > 0 && n < MENU_N) {
        return n;
    }
    return MENU_N;
}

int vrabotenTip() {
    int n;
    cout << "1. Profesor\n"
         << "2. Asistent\n"
         << "3. Demonstrator\n"
         << "Izbor: ";
    cin >> n;
    if (n > 0 && n < VRABOTEN_N) {
        return n;
    }
    return VRABOTEN_N;
}

int main() {
    vector<Vraboten *> vraboteni;

    int choice;
    while ((choice = menu()) != MENU_N) {
        switch (choice) {
            case 1: {
                int type = vrabotenTip();
                if (type != VRABOTEN_N) {
                    switch (type) {
                        case 1: {
                            Vraboten *profesor = new Profesor();
                            profesor->setVraboten();
                            vraboteni.push_back(profesor);
                        }
                            break;
                        case 2: {
                            Vraboten *asistent = new Asistent();
                            asistent->setVraboten();
                            vraboteni.push_back(asistent);
                        }
                            break;
                        case 3: {
                            Vraboten *demonstrator = new Demonstrator();
                            demonstrator->setVraboten();
                            vraboteni.push_back(demonstrator);
                        }
                            break;
                        default:
                            cout << "Gresen Izbor" << endl;
                            break;
                    }
                }
                break;
            }
            case 2: {
                auto n = static_cast<int>(vraboteni.size());
                for (int i = 0; i < n ; ++i) {
                    cout << vraboteni[i]->toString() << endl;
                }
            }
                break;
            default:
                cout << "Gresen Izbor" << endl;

        }
    }

    cout << vraboteni[0]->toString() << endl;

    return 0;
}