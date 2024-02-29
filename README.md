# devCode-
Devices message count algorithme

code1 Explanation:

This code defines a Device class representing a device with a name and a message count.
In the main function, three Device objects (dev1, dev2, dev3) are created with names "dev1", "dev2", and "dev3" respectively.
Messages are simulated by calling sendMessage() for each device.
Total messages received are calculated by summing the totalMessages() of each device.


code2 Explanation:

This code is essentially the same as Code 1, but instead of individual variables for each device, it uses an array deviceHolder to store instances.
The loop at the end calculates the total number of messages received by iterating over the array.

code 3 :
This code uses static variables within the Device class to keep track of the total number of messages received.
Each device instance increments the static messageCount variable whenever sendMessage() is called.
The main function demonstrates creating device instances and sending messages, and then prints the total messages received.
static variables offer a powerful mechanism for managing shared data, promoting encapsulation, and improving program efficiency in object-oriented programming. They are particularly useful when certain properties or behaviors need to be consistent across all instances of a class or when centralized data storage and access are required just like in our case .
code4:
This code is similar to Code 3 but introduces a deviceIndex static variable to ensure each device has a unique name.
Each time a device is created, its name is automatically generated based on the current value of deviceIndex.
The rest of the code is similar to Code 3, with devices sending messages and the total message count being printed.

How to Run:
To run each code snippet, copy and paste the code into a C++ compiler or an online C++ compiler like https://www.onlinegdb.com/online_c++_compiler.
Compile and execute the code to see the output in the console.
Each code snippet simulates devices sending messages, and the output displays the total number of messages received.
Thanks for you attention.





