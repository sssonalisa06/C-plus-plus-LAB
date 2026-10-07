#include <iostream>
using namespace std;

class Student
{
protected:
    int rollNo;
    char name[50];

public:
    void getStudent()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;
    }
};

class Exam : public Student
{
protected:
    int marks[6];

public:
    void getMarks()
    {
        cout << "\nEnter marks of 6 subjects:\n";

        for(int i = 0; i < 6; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
};

class Result : public Exam
{
    int total;

public:
    inline void calculate()
    {
        total = 0;

        for(int i = 0; i < 6; i++)
        {
            total = total + marks[i];
        }
    }

    void display()
    {
        cout << "\n--- RESULT ---\n";
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;

        for(int i = 0; i < 6; i++)
        {
            cout << "Subject " << i + 1 << ": " << marks[i] << endl;
        }

        cout << "Total Marks: " << total << endl;
    }
};

int main()
{
    Result r;

    r.getStudent();
    r.getMarks();
    r.calculate();
    r.display();

    return 0;
}

