// So the construction follows hierarchy whenever a derived class abject  is created the constructor of the parent class is created first then the derived class constrtuctor is called...
// So the destructor  the reverse hierarchy as that of a constructor so while calling of a destructor the destructor follows a reverse hierrachy so first the derived class destructor will be called
// as we know that our compiler calls the default constructor so if we want the parmeterized constructor to be called we have to do it explictly do it...
#include<iostream>
using namespace std;
class vehicle{
    private:
        int maxSpeed;
    protected:
        int numTyres;
    public:
        string color;

    vehicle()
    {
        cout<<"Vehicle Constructor is called"<<endl;
    }
    vehicle(int z){                                                                                                                                 
       cout<<"Parameterised constructor is called "<<endl; 
       maxSpeed =z;
    }
    ~vehicle()
    {
        cout<<"Vehicle Destructor is called "<<endl;
    }
};
class car : public vehicle{                         
    public:                                                           
    int numGears;
    car(int x) : vehicle(x) {                                                    // so this not the correct way to pass value we should always prefer variable fo these 
        cout<<"Class car Constructor called"<<endl;
    }
    ~car(){
        cout<<"Class Car Destructor Called"<<endl;
    }

    void Print(){
    numTyres = 4;
        cout<<"NumTyres  " << numTyres <<endl;
        cout<<"Color  "<<color<<endl;
        cout<<"Numgears  "<<numGears<<endl;
    }
};
class HondaCity : public car{
    public:
        HondaCity(){
            cout<< "Honda City constructor called "<<endl;
        }
        ~HondaCity(){
            cout<<"Honda City Destructor Called"<<endl;
        }
};
int main(){
    car c(5);

}
