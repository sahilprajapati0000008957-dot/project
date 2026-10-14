
#include <iostream>
#include <string>
using namespace std;
class Room
{
protected:
    int roomnumber;
    string guestname;
    int nights;

public:
    // Constructor
    Room(int r, string g, int n)
    {
        roomnumber = r;
        guestname = g;
        nights = n;
    }
    void showDetails()
    {
        cout << "Room Number: " << roomnumber << endl;
        cout << "Guest Name: " << guestname << endl;
        cout << "Nights: " << nights << endl;
    }

    // Virtual function
    virtual int calculateBill()
    {
        return 0;
    }
};
class StandardRoom : public Room
{
public:
    StandardRoom(int r, string g, int n)
        : Room(r, g, n)
    {
    }

    int calculateBill() override
    {
        return nights * 1000;
    }
};
class DeluxeRoom : public Room
{
public:
    DeluxeRoom(int r, string g, int n)
        : Room(r, g, n)
    {
    }

    int calculateBill() override
    {
        return nights * 2000;
    }
};
class SuiteRoom : public Room
{
public:
    SuiteRoom(int r, string g, int n)
        : Room(r, g, n)
    {
    }

    int calculateBill() override
    {
        return nights * 3000;
    }
};
int main()
{

    StandardRoom s(101, "Rahul", 2);
    DeluxeRoom d(102, "Aman", 3);
    SuiteRoom su(103, "Rohit", 2);

    cout << "Standard Room Booking" << endl;
    s.showDetails();
    cout << "Bill: Rs. " << s.calculateBill() << endl;

    cout << "\nDeluxe Room Booking" << endl;
    d.showDetails();
    cout << "Bill: Rs. " << d.calculateBill() << endl;

    cout << "\nSuite Room Booking" << endl;
    su.showDetails();
    cout << "Bill: Rs. " << su.calculateBill() << endl;

    return 0;
}
