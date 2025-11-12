#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

class visitor {
     private:
     string visitorname;
     int ticketbought;
     public:
     void displayinfo();
     visitor();
     visitor(string name);
     ~visitor();
 };







#endif
