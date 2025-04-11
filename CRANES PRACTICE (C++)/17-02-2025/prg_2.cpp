#include<iostream>
using namespace std;
class student{
    private:
    int regdno;
    char name[20];
    public:
    void readDetails()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the registration number:";
        cin>>regdno;
    }
    void displayDetails() {
        cout << "\nStudent Details:\n";
        cout << "Name: " << name << endl;
        cout << "Registration Number: " << regdno << endl;
    }
};

int main() {
    student s1;
    s1.readDetails();
    s1.displayDetails();
    return 0;
}