#include <iostream>

using namespace std;

class Family {
protected:
    string surname;
public:
    Family(string s) {
        surname = s;
    }
    void FamilySurname() {
        cout << "Surname of family: " << surname << endl;
    }
};

class Father : public Family {
    string name;
    int age;
public:
    Father(string s, string n, int a) : Family(s) {
        name = n;
        age = a;
    }

    void Fatherinfo() {
        cout << "\nInformation about father" << endl;
        FamilySurname();
        cout << "Name of father: " << name << endl;
        cout << "Years old: " << age << endl;
    }
};

class Mother : public Family {
    string name;
    int age;
public:
    Mother(string s, string n, int a) : Family(s) {
        name = n;
        age = a;
    }

    void Motherinfo() {
        cout << "Information about mother" << endl;
        FamilySurname();
        cout << "Name of mother: " << name << endl;
        cout << "Years old: " << age << endl;
    }
};

class Son : public Family {
    string name;
    int age;
public:
    Son(string s, string n, int a) : Family (s) {
        name = n;
        age = a;
    }

    void Soninfo() {
        cout << "Information about son" << endl;
        FamilySurname();
        cout << "Name of son: " << name << endl;
        cout << "Years old: " << age << endl;
    }

};

class Daughter : public Family {
    string name;
    int age;
public:
    Daughter(string s, string n, int a) : Family(s) {
        name = n;
        age = a;
    }

    void Daughterinfo() {
        cout << "Information about daughter" << endl;
        FamilySurname();
        cout << "Name of daughter: " << name << endl;
        cout << "Years old: " << age << endl;
    }
};

int main()
{
    string kids;
    string surname;
    string whichkid;
    string namef, namem, namek;
    int agef, agem, agek;
    cout << "Enter surname of your family: ";
    cin >> surname;
    cout << "Enter name of father: ";
    cin >> namef;
    cout << "Father age: ";
    cin >> agef;
    cout << "Name of mother: ";
    cin >> namem;
    cout << "Mother age: ";
    cin >> agem;
    cout << "Do you have son or daughter? (Yes / No) ";
    cin >> kids;
    Father f(surname, namef, agef);
    Mother m(surname, namem, agem);
    if (kids == "yes" || kids == "Yes" || kids == "YES" || kids == "YeS" || kids == "yES" || kids == "YEs" || kids == "yEs") {
        cout << "Son or daughter: ";
        cin >> whichkid;
        cout << "Name of " << whichkid << ": ";
        cin >> namek;
        cout << whichkid << " age: ";
        cin >> agek;
        cout << "-----Information about your family-----";
        f.Fatherinfo();
        m.Motherinfo();
        if (whichkid == "son") {
            Son s(surname, namek, agek);
            s.Soninfo();
        }
        else {
            Daughter d(surname, namek, agek);
            d.Daughterinfo();
        }
    }
    else {
        cout << "-----Information about your family-----";
        f.Fatherinfo();
        m.Motherinfo();
        cout << "NO children" << endl;
    }

}

