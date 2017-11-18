#include <iostream>
#include <vector>

#include "Vlekaci.h"
#include "Ptici.h"
#include "Cicaci.h"

static const int MENU_N = 6;
static const int TYPE = 4;

int menu() {
    int n;
    cout << "1. Novo Zivotno\n"
         << "2. Brojna Sostojba\n"
         << "3. Zivotni od grupa\n"
         << "4. Cela Lista\n"
         << "5. Прикажување на сите животни кои треба да се вакцинираат во рок од 1 недела\n"
         << "6. Izlez\n"
         << "Izbor: ";
    cin >> n;
    if (n > 0 && n < MENU_N) {
        return n;
    }
    return MENU_N;
}

int tip() {
    int n;
    cout << "1. Vlekaci\n"
         << "2. Ptici\n"
         << "3. Cicaci\n"
         << "Izbor: ";
    cin >> n;
    if (n > 0 && n < TYPE) {
        return n;
    }
    return TYPE;
}

int main() {
    vector<Zivotno *> vlekaci;
    vector<Zivotno *> ptici;
    vector<Zivotno *> cicaci;

    int choice;
    while ((choice = menu()) != MENU_N) {
        switch (choice) {
            case 1: {
                int type = tip();
                if (type != TYPE) {
                    switch (type) {
                        case 1: {
                            Zivotno *vlekac = new Vlekaci();
                            vlekac->setZivotno();
                            vlekaci.push_back(vlekac);
                        }
                            break;
                        case 2: {
                            Zivotno *ptica = new Ptici();
                            ptica->setZivotno();
                            ptici.push_back(ptica);
                        }
                            break;
                        case 3: {
                            Zivotno *cicac = new Cicaci();
                            cicac->setZivotno();
                            cicaci.push_back(cicac);
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
                auto v = static_cast<int>(vlekaci.size()), p = static_cast<int>(ptici.size()), c = static_cast<int>(cicaci.size());
                cout << "Vlekaci: " << v
                     << "\nPtici: " << p
                     << "\nCicaci: " << c
                     << "\nVkupno: " << v + p + c << endl;
            }
                break;
            case 3: {
                int type = tip();
                if (type != TYPE) {
                    switch (type) {
                        case 1: {
                            auto n = static_cast<int>(vlekaci.size());
                            for (int i = 0; i < n; ++i) {
                                cout << vlekaci[i]->toString() << endl;
                            }
                        }
                            break;
                        case 2: {
                            auto m = static_cast<int>(ptici.size());
                            for (int i = 0; i < m; ++i) {
                                cout << ptici[i]->toString() << endl;
                            }
                        }
                            break;
                        case 3: {
                            auto p = static_cast<int>(cicaci.size());
                            for (int i = 0; i < p; ++i) {
                                cout << cicaci[i]->toString() << endl;
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


            case 4: {
                auto n = static_cast<int>(vlekaci.size());
                for (int i = 0; i < n; ++i) {
                    cout << vlekaci[i]->toString() << endl;
                }
                auto m = static_cast<int>(ptici.size());
                for (int i = 0; i < m; ++i) {
                    cout << ptici[i]->toString() << endl;
                }
                auto p = static_cast<int>(cicaci.size());
                for (int i = 0; i < p; ++i) {
                    cout << cicaci[i]->toString() << endl;
                }
            }
                break;

            case 5: {
                auto n = static_cast<int>(vlekaci.size());
                for (int i = 0; i < n; ++i) {
                    if (vlekaci[i]->presmetajVakcinacija()) {
                        cout << vlekaci[i]->toString() << endl;
                    }
                }
                auto m = static_cast<int>(ptici.size());
                for (int i = 0; i < m; ++i) {
                    if (ptici[i]->presmetajVakcinacija()) {
                        cout << ptici[i]->toString() << endl;

                    }
                }
                auto p = static_cast<int>(cicaci.size());
                for (int i = 0; i < p; ++i) {
                    if (cicaci[i]->presmetajVakcinacija()) {
                        cout << cicaci[i]->toString() << endl;

                    }
                }
            }
                break;
            default:
                cout << "Gresen Izbor" << endl;

        }
    }

    return 0;
}