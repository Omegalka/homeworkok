#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
class MobilePhone
{
private:
     int size = 16;
     int width = 7;
     string brand = "iphone";
     int serial_number = 15;
     string color = "black";
     string alarm = "loud";
     int battery = 100;
     string name = "aaaaa";
     int g = 1;
     int camera = 2;
     int button = 3;
     string light = "light";
public:
    
//mobile_phone() : mobile_phone("iphone", 15, 1, "aaaaa") {}
//
//mobile_phone(string color, int camera) : mobile_phone("iphone", 15, 1, "aaaaa") {}
//
//mobile_phone(string alarm, int size, int width) : mobile_phone("iphone", 100, 3, "light") {}
//            
//        mobile_phone(string brand, int battery, int button, string light)
//        {
//            SetBrand(brand);
//            SetBattery(battery);
//        }


    void Noize(string alarm);
    void Call(string ringtone);
    void Count(string calculator);
    void Update();
    void Discharge();
    void SetBattery(int battery);
    int GetBattery() const;
    void SetBrand(string brand);
    string GetBrand()const;
    void SetAlarm(string alarm);
    string GetAlarm()const;
    void SetSerialNumber(int serial_number);
    int GetSerialNumber() const;
    void SetColor(string color);
    string GetColor() const;
};


