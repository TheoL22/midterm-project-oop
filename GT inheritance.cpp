#include <iostream>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(string name) : name(name) {}

    string getName() {
        return name;
    }
};

class Singer : public Person {
private:
    string voiceType;

public:
    Singer(string name, string voiceType) : Person(name), voiceType(voiceType) {}

    void sing() {
        cout << name << " is singing with a " << voiceType << " range" << endl;
    }
};

class Dancer : public Person {
private:
    string danceStyle;

public:
    Dancer(string name, string danceStyle) : Person(name), danceStyle(danceStyle) {}

    void dance() {
        cout << name << " is performing a " << danceStyle << " dance" << endl;
    }
};

int main() {
    int choice;
    string name, inputType;

    cout << "Choose an option:" << endl;
    cout << "[1] Singer" << endl;
    cout << "[2] Dancer" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    cin.ignore(); // to clear the newline character from buffer

    if (choice == 1) {
        cout << "Enter your name: ";
        getline(cin, name);
        cout << "Enter your vocal range (e.g., Tenor, Soprano): ";
        getline(cin, inputType);

        Singer userSinger(name, inputType);
        userSinger.sing();
    }
    else if (choice == 2) {
        cout << "Enter your name: ";
        getline(cin, name);
        cout << "Enter your dance style (e.g., Hiphop, Ballet): ";
        getline(cin, inputType);

        Dancer userDancer(name, inputType);
        userDancer.dance();
    }
    else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
