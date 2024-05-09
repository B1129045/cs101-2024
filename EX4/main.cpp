#include <iostream>
#include <string>
using namespace std;

class Fueltank{

    private:

        int m_FueltankCapacity;

        int m_Gas_grade;

        

    public:

        Fueltank(int m_FueltankCapacity=3000, int gas = 98){

            m_FueltankCapacity = m_FueltankCapacity;

            m_Gas_grade = gas;

        }

        

        void fuel_up(int v, int gas){

            cout<<"fuel_up: "<<v<<" Gas_grade: "<<gas<<endl;

        }

        

        void set_Gas_grade(int Gas_grade){

            m_Gas_grade = Gas_grade;

            cout<<"Set Gas_grade = "<<Gas_grade<<endl;

        }

        int get_Gas_grade(){

            return m_Gas_grade;

        }

};

class Car {
    protected:
    string m_DriveMode;
    private:
    Fueltank m_Fueltank;
    int m_MaxSeating;
    int m_Price;
    void m_UpdatePrice(int base = 500000){
        m_Price = m_MaxSeating * base;
    }
    public:
    string m_brand;
    string m_model;
    int m_year;
    Car(string x, string y, int z, int s){
        m_brand = x;
        m_model = y;
        m_year = z;
        m_MaxSeating = s;
        Fueltank m_Fueltank;
    }
    int get_MaxSeating(){
        return m_MaxSeating;
    }
    int get_Price(){
        return m_Price;
    }
    string get_DriveMode(){
        return m_DriveMode;
    }
            string get_brand(){

            return m_brand;

        }

        int get_Gas_grade(){

            return m_Fueltank.get_Gas_grade();

        }

        

        void set_gas_grade(int gas = 98){

            m_Fueltank.set_Gas_grade(gas);

        }

        

        void fuel_up(int v, int gas = 98){

            m_Fueltank.fuel_up(v, gas);

        }
};

class BMW_Car : public Car {
    public:
    BMW_Car(string y, int z, int s) : Car("BMW", y, z, s){
        cout << "Constructing BMW_Car\n";
        m_DriveMode = "Rear-wheel";
    }
    string get_DriveMode(){
        return m_DriveMode;
    }
};
class AUDI_Car : public Car {
    public:
    AUDI_Car(string y, int z, int s) : Car("AUDI", y, z, s){
        cout << "Constructing AUDI_Car\n";
        m_DriveMode = "Front-wheel";
    }
    string get_DriveMode(){
        return m_DriveMode;
    }
};
class BENZ_Car : public Car {
    public:
    BENZ_Car(string y, int z, int s) : Car("BENZ", y, z, s){
        cout << "Constructing BENZ_Car\n";
        m_DriveMode = "Front-wheel";
    }
    string get_DriveMode(){
        return m_DriveMode;
    }
};

int main(){
    BMW_Car car_1("X5", 2023, 6);
    cout << car_1.m_brand;
    cout << " : Drive Mode = " << car_1.get_DriveMode() << endl;

    AUDI_Car car_2("A1", 2023, 5);
    cout << car_2.m_brand;
    cout << " : Drive Mode = " << car_2.get_DriveMode() << endl;

    BENZ_Car car_3("C300", 2023, 5);
    cout << car_3.m_brand;
    cout << " : Drive Mode = " << car_3.get_DriveMode() << endl;
    
    AUDI_Car car2("A1", 2021, 2);

   cout << car2.get_brand() << " Gas grade = "<< car2.get_Gas_grade()<<endl;

   car2.set_gas_grade(95);

   cout<<car2.get_brand()<<" Gas_grade = "<<car2.get_Gas_grade()<<endl;

   

   car2.fuel_up(300, 95);

   

   return 0;
}
