#include <iostream>
#include <string>
using namespace std;

class Media
{
protected:
    string title, publication;

public:
    virtual void read()
    {
        cout << "Enter title: ";
        getline(cin >> ws, title);

        cout << "Enter publication: ";
        getline(cin, publication);
    }

    virtual void show()
    {
        cout << "Title: " << title << endl;
        cout << "Publication: " << publication << endl;
    }
};

class Book : public Media
{
    int pages;
    float price;

public:
    void read() override
    {
        Media::read();

        cout << "Enter number of pages: ";
        cin >> pages;

        cout << "Enter price of book: ";
        cin >> price;
    }

    void show() override
    {
        Media::show();

        cout << "Pages: " << pages << endl;
        cout << "Price: Rs. " << price << endl;
    }
};

class Tape : public Media
{
    float playtime, price;

public:
    void read() override
    {
        Media::read();

        cout << "Enter playing time in minutes: ";
        cin >> playtime;

        cout << "Enter price of tape: ";
        cin >> price;
    }

    void show() override
    {
        Media::show();

        cout << "Playing Time: " << playtime
             << " minutes" << endl;
        cout << "Price: Rs. " << price << endl;
    }
};

int main()
{
    Book b;
    Tape t;
    Media *ptr;

    cout << "--- Enter Book Details ---\n";
    ptr = &b;
    ptr->read();

    cout << "\n--- Book Details ---\n";
    ptr->show();

    cout << "\n--- Enter Tape Details ---\n";
    ptr = &t;
    ptr->read();

    cout << "\n--- Tape Details ---\n";
    ptr->show();

    return 0;
}
