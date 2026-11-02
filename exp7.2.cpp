#include<iostream>
using namespace std;
class vehicle
{
public:
vehicle()
{
cout<<"This is vehicle"<<endl;
}
};
class FourWheeler
{
public:
FourWheeler()
{
cout<<"This is a 4 Wheeler"<<endl;
}
};
class car: public vehicle,public FourWheeler
{
public:
car()
{
cout<<"This 4 Wheeler vehicle is a car"<<endl;
}
};
int main()
{
car obj;
return 0;
}

