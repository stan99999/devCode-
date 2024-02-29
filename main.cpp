#include <iostream>
#include <string>
using namespace std ;

class Device {
public:
int messageCount =0;
string devName;
Device(string name){
devName=name;
cout<<"device has been created named : "<<devName<<endl;
}
void sendMessage(){
 cout<<"a message has been sent from device : "<<devName<<endl;//sending message simulation because it needs a real enviroment code 
 messageCount++;
}
 int totalMessages(){
    return messageCount; 
 }  
};

int main() {
    Device dev1("dev1");
    Device dev2("dev2");
    Device dev3("dev3");
    Device dev4("dev4");
    
dev1.sendMessage();
dev2.sendMessage();
dev3.sendMessage();

//calculate the totat number of messages recived
int totalmessages=0;
totalmessages=dev1.totalMessages()+dev2.totalMessages()+dev3.totalMessages();
cout<<"total number of message recived are: "<<totalmessages;
    return 0;
}
//not very optimized because it is hard coded and it needs a lot of time to comm+plete if we have a large number of devices and messages sent 






