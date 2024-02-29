#include <iostream>
#include<string>
using namespace std;

class Device{
    public:
    static int deviceIndex;
    static int messageCount ;
    string name;

    Device( ){
        name = "dev"+to_string(deviceIndex);
        cout<<"device has been created named : "<<name<<endl;  
        deviceIndex++;
          }

    void sendMessage(){
        cout << "A message has been sent from device : "<<name<<endl;
        messageCount ++;
    }
};
int Device::deviceIndex = 1;
int Device::messageCount = 0;

int main(){
    Device dev1;
    Device dev2;
    Device dev3;
    
    dev1.sendMessage();
    dev2.sendMessage();
    dev3.sendMessage();
    dev2.sendMessage();

    cout << "Total number of messages received is : " << Device::messageCount<<endl;

    dev2.sendMessage();
    dev3.sendMessage();

    cout << "Total number of messages received is : " << Device::messageCount<<endl;




    return 0;
}