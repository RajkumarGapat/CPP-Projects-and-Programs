#include<iostream>
#include<string.h>
using namespace std;
class GovtVehicle
{
   string vehicleType;
   string color;
   int vehicleNo;
 public: friend class Ola;
 
};

class Ola
{
   public:GovtVehicle ob; //global object of GovtVehicle class
    string Source;
    string Destination;
    public: Ola()
    {
        
    ob.vehicleType="Car";
    ob.color="White";        
    ob.vehicleNo=29836;
   
         
    }
    public:void BookNow()
    {
        cout<<"Enter Source Location of Booking = ";
        cin>>Source;
        cout<<"Enter Source Location of Booking = ";
        cin>>Destination;
    }
    public:void BookingDetails()
    {
        cout<<"Booking is Confirmed , Please find arriving vehicle details:- \n";
        cout<<"Your Booked Vehicle Type = "<<ob.vehicleType<<endl;
        cout<<"Your Booked Vehicle color = "<<ob.color<<endl;
        cout<<"Your Booked Vehicle Number = "<<ob.vehicleNo<<endl;
    }

};

class Uber
{


 public:GovtVehicle ob; //global object of GovtVehicle class
    string Source;
    string Destination;
    public: Uber()
    {
        
   /* ob.vehicleType="Car"; //not accessable private members of GovtVehicle class as uber is not friend class of GovtVehicle 
    ob.color="White";        
    ob.vehicleNo=29836;
    */
   
         
    }
};

int main()
{

    Ola user; //parameterised constructor of Ola class
    user.BookNow();
    user.BookingDetails();
    return 0;
}
