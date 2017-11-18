#include <iostream>
#include <vector>

#include "Artikl.h"
#include "Pantaloni.h"
#include "Kosuli.h"

static const int MENU_N = 5;
static const int TYPE = 3;

int menu() {
    int n;
    cout << "1. Nov Artikl\n"
         << "2. Pecati lista od grupa\n"
         << "3. Prikazi lista\n"
         << "4. Прикажување на сите артикли кои треба да се набават во рок од 1 недела и пари кои треба да се потрошат за да се набават потребните артикли\n"
         << "5. Izlez\n"
         << "Izbor: ";
    cin >> n;
    if (n > 0 && n < MENU_N) {
        return n;
    }
    return MENU_N;
}

int tip() {
    int n;
    cout << "1. Pantaloni\n"
         << "2. Kosula\n"
         << "Izbor: ";
    cin >> n;
    if (n > 0 && n < TYPE) {
        return n;
    }
    return TYPE;
}

int main() {
    vector<Artikl *> pantaloni;
    vector<Artikl *> kosuli;

    int choice;
    while ((choice = menu()) != MENU_N) {
        switch (choice) {
            case 1: {
                int type = tip();
                if (type != TYPE) {
                    switch (type) {
                        case 1: {
                            Artikl *pantalon = new Pantaloni();
                            pantalon->setArtikl();
                            pantaloni.push_back(pantalon);
                        }
                            break;
                        case 2: {
                            Artikl *kosula = new Kosuli();
                            kosula->setArtikl();
                            kosuli.push_back(kosula);
                        }
                            break;
                        default:
                            cout << "Gresen Izbor" << endl;
                            break;
                    }
                }

            }
                break;
            case 2: {
                int type = tip();
                if (type != TYPE) {
                    switch (type) {
                        case 1: {
                            auto n = static_cast<int>(pantaloni.size());
                            for (int i = 0; i < n; ++i) {
                                cout << pantaloni[i]->toString() << endl;
                            }
                        }
                            break;
                        case 2: {
                            auto m = static_cast<int>(kosuli.size());
                            for (int i = 0; i < m; ++i) {
                                cout << kosuli[i]->toString() << endl;
                            }
                        }
                            break;
                        default:
                            cout << "Gresen Izbor" << endl;
                            break;
                    }
                }
            }
                break;


            case 3: {
                auto n = static_cast<int>(pantaloni.size());
                for (int i = 0; i < n; ++i) {
                    cout << pantaloni[i]->toString() << endl;
                }
                auto m = static_cast<int>(kosuli.size());
                for (int i = 0; i < m; ++i) {
                    cout << kosuli[i]->toString() << endl;
                }
            }
                break;

            case 4: {
                int price = 0;
                auto n = static_cast<int>(pantaloni.size());
                for (int i = 0; i < n; ++i) {
                    if (pantaloni[i]->presmetajNabavka()) {
                        cout << pantaloni[i]->toString() << endl;
                        price += pantaloni[i]->getCena();
                    }
                }
                auto m = static_cast<int>(kosuli.size());
                for (int i = 0; i < m; ++i) {
                    if (kosuli[i]->presmetajNabavka()) {
                        cout << kosuli[i]->toString() << endl;
                        price += kosuli[i]->getCena();
                    }
                }
                cout << "Total Price: " << price << endl;
            }
                break;
            default:
                cout << "Gresen Izbor" << endl;

        }
    }

    return 0;
}