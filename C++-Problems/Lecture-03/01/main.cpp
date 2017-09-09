/*
 * 1. Да се формира класа Квадар (скриени елементи: должина, ширина и висина;
 * јавни функции: плоштина, волумен). Од неа да се имплементира поле од објекти.
 * Да се најде оној кој има најмала плоштина, а не е коцка. Да се креира мени:
a)	Креирај нов објект
b)	Постави ги димензиите
c)	Печати ги димензиите на сите објекти
d)	Печати ги димензиите за поедин објект
e)	Печати ги оние кои го задоволуваат условот
 */
#include <iostream>
#include <vector>


using namespace std;

class Box {
private:
    int width, height, length;
public:
    explicit Box(int width = 0, int height = 0, int length = 0) {
        this->width = width;
        this->height = height;
        this->length = length;
    }

    void setBox(int width = 0, int height = 0, int length = 0) {
        this->width = width;
        this->height = height;
        this->length = length;
    }

    bool isCube() {
        return this->width == this->height && this->height == this->length;
    }

    double area() {
        return 2 * width * height + 2 * width * length + 2 * height * width;
    }

    double volume() {
        return width * height * length;
    }

    void printBox() {
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
        cout << "Length: " << length << endl;
    }
};

class BoxList {
private:
    vector<Box> boxes;
public:
    void addBox(int width = 0, int height = 0, int length = 0) {
        boxes.emplace_back(Box(width, height, length));
    }

    void editBox(int width = 0, int height = 0, int length = 0, int boxID = 0) {
        boxes[boxID - 1].setBox(width, height, length);
    }

    void printAllBoxes() {
        unsigned long n = boxes.size();
        for (int i = 0; i < n; ++i) {
            cout << "Box id = " << i + 1 << endl;
            boxes[i].printBox();
            cout << endl;
        }
    }

    void printBox(int boxID) {
        cout << "Box id = " << boxID << endl;
        boxes[boxID - 1].printBox();
        cout << endl;
    }

    void printConditionBox() {
        Box min = boxes[0];
        unsigned long n = boxes.size();
        for (int i = 1; i < n; ++i) {
            if (!boxes[i].isCube() && boxes[i].area() < min.area()) {
                min = boxes[i];
            }
        }
        cout << "Box is:" << endl;
        min.printBox();
    }
};

int menu() {
    int choice;
    cout << "Menu" << endl
         << "1)\tКреирај нов објект\n"
         << "2)\tПостави ги димензиите\n"
         << "3)\tПечати ги димензиите на сите објекти\n"
         << "4)\tПечати ги димензиите за поедин објект\n"
         << "5)\tПечати ги оние кои го задоволуваат условот\n"
         << "6) Крај";
    cin >> choice;
    return choice;
}

int main() {
    BoxList list;

    int choice = menu();

    int width, height, length, id;
    while (choice >= 1 && choice <= 5) {
        switch (choice) {
            case 1:
                cout << "Enter Width Height Length";
                cin >> width >> height >> length;
                list.addBox(width, height, length);
                break;
            case 2:
                cout << "Enter ID";
                cin >> id;
                cout << "Current Box" << endl;
                list.printBox(id);
                cout << "Enter new Width Height Length";
                cin >> width >> height >> length;
                list.editBox(width, height, length, id);
                break;
            case 3:
                list.printAllBoxes();
                break;
            case 4:
                cout << "Enter ID";
                cin >> id;
                list.printBox(id);
                break;
            case 5:
                list.printConditionBox();
                break;
            default:
                cout << "Error";
                break;
        }
        choice = menu();
    }

    return 0;
}