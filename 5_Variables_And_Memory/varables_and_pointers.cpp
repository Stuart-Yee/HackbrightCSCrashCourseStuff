#include <iostream>
#include <string>
#include <array>
using namespace std;

int main() {

    array<string, 3> list = {"tacos", "burritos", "chimichangas"};

    // Pass by value
    array<string, 3> yourList = list;

    

    cout << "My original list" << endl;
    for (const auto item: list) {
        cout << item << endl;
    }

    yourList[0] = "tamale";

    cout << "\nYour list copied from mine" << endl;
    for (const auto item: yourList) {
        cout << item << endl;
    }

    // pass by reference

    cout << "\nCopy by reference and changing first item to chicken tamales" << endl;
    array<string, 3> *copy = &list;

    (*copy)[0] = "chicken tamales";

    for (const auto& item: *copy) {
        cout << item << endl;
    }

    cout << "\nMy original list:" << endl;

    for (const auto item: list) {
        cout << item << endl;
    }
}