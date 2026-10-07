#include <iostream>
#include <cstring>
using namespace std;

class Person
{
    char name[64], address[64];
    int age;
    float basic, hra, ta, da, gross;

public:
    Person() {}

    Person(char n[], int a, char ad[], float b)
    {
        strcpy(name,n);
        age=a;
        strcpy(address,ad);
        basic=b;
        hra=.20*basic;
        ta=.10*basic;
        da=.15*basic;
        gross=basic+hra+ta+da;
    }

    inline static void youngEldest(Person p[])
    {
        int y=0,e=0;
        for(int i=1;i<10;i++)
        {
            if(p[i].age<p[y].age) y=i;
            if(p[i].age>p[e].age) e=i;
        }
        cout<<"\nYoungest: "<<p[y].name<<" ("<<p[y].age<<")";
        cout<<"\nEldest: "<<p[e].name<<" ("<<p[e].age<<")\n";
    }

    void slip()
    {
        cout<<"\nName: "<<name;
        cout<<"\nAge: "<<age;
        cout<<"\nAddress: "<<address;
        cout<<"\nBasic Salary: "<<basic;
        cout<<"\nHRA: "<<hra;
        cout<<"\nTA: "<<ta;
        cout<<"\nDA: "<<da;
        cout<<"\nGross Salary: "<<gross<<"\n";
    }
};

int main()
{
    Person p[10];
    char n[64],ad[64];
    int a;
    float b;

    for(int i=0;i<10;i++)
    {
        cout<<"\nPerson "<<i+1<<"\nName: ";
        cin>>ws;
        cin.getline(n,64);
        cout<<"Age: ";
        cin>>a;
        cout<<"Address: ";
        cin>>ws;
        cin.getline(ad,64);
        cout<<"Basic Salary: ";
        cin>>b;
        p[i]=Person(n,a,ad,b);
    }

    Person::youngEldest(p);

    for(int i=0;i<10;i++)
        p[i].slip();

    return 0;
}
