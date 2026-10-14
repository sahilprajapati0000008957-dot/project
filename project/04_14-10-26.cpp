// // .data member (protected):roomnumber(int),guestname(string),nights(int)
// // .a constrector that receives these 3 values and storm them
// // .show detels(): print rum nombers,guest name and nights
// // .vatruale int and calcilatebill():simply returns 0,
// // step b: child class standerdroom,deluxeroom,suteroom
// // // .each one inherits from room using public inheritence
// // // .each has a constrector that passes 3 valve to the room constrectoe
// // // each override callculatebill()using own rate from the table above
// step c: the main ()function
// . creat one standerd room ,one deluxeroom and one suteroom objects using the simple deta below
// .for each booking call showdetails()  then print the bill using the calculatebill() function
#include <iostream>
using namespace std;
class room
{
protected:
    int roomnumber;
    string guestname;
    int nights;

public:
    room(int r, string g, int n)
    {
        roomnumber = r;
        guestname = g;
        nights = n;
    }

    void showdetels()
    {
        cout << "roomnumber:" << roomnumber << endl;
        cout << "gaustname:" << guestname << endl;
        cout << "nights:" << nights << endl;
    }
    virtual int calcollatebill()
    {
        return 0;
    }
};

class standerdroom : public room
{
public:
    standerdroom(int r, string g, int n)
        : room(r, g, n)
    {
    }
    int calcullatebill() override
}