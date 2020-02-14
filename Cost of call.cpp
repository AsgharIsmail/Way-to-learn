#include <iostream>
using namespace std;
 int main()
 {
     int time , duration ; 
     double cost;
     char day1,day2;
     
     cout<<"Enter the Start time of Call"<<endl;
     cout<<"Enter time in 24 hour notation"<<endl;
     cin>>time;
     cout<<"Enter the duration of Call"<<endl;
     cout<<"Enter duration in round off value e.g. 9.50 round off to 10"<<endl;
     cin>>duration;
     cout<<"Enter the day of week"<<endl;
     cout<<"Enter first two letter of day e.g. Monday as MO or mo"<<endl;
     cin>>day1>>day2;
     
     if( ((day1 == 'M') || (day2 == 'm'))  && ((day1 = 'O') || (day2 == 'o')) )
     {
     if((time>=800) || (time<= 1800))
     {
     cost = 0.40*duration;
    
     }
     else
         {
     cost = 0.25*duration;
     }
     }
else if( ((day1 == 'T') || (day2 == 't'))  && ((day1 = 'U') || (day2 == 'u')) )
     {
     if((time>=800) || (time<= 1800))
     {
     cost = 0.40*duration;
     
     }
     else
         {
     cost = 0.25*duration;
     }
     }
                    
else if( ((day1 == 'W') || (day2 == 'w'))  && ((day1 = 'E') || (day2 == 'e')) )
     {
     if((time>=800) || (time<= 1800))
     {
     cost = 0.40*duration;
     
     }
     else
         {
     cost = 0.25*duration;
     }
     }    
else if( ((day1 == 'T') || (day2 == 't'))  && ((day1 = 'H') || (day2 == 'h')) )
     {
     if((time>=800) || (time<= 1800))
     {
     cost = 0.40*duration;
     
     }
     else
         {
     cost = 0.25*duration;
     }
     }   
else if( ((day1 == 'F') || (day2 == 'f'))  && ((day1 = 'R') || (day2 == 'r')) )
     {
     if((time>=800) || (time<= 1800))
     {
     cost = 0.40*duration;
     
     }
     else
         {
     cost = 0.25*duration;
     }
     }   
else if( ((day1 == 'S') || (day2 == 's'))  && ((day1 = 'A') || (day2 == 'a')) )
     {
     
     cost = 0.15*duration;
     }
else if( ((day1 == 'S') || (day2 == 's'))  && ((day1 = 'U') || (day2 == 'u')) )
     {
     
     cost = 0.15*duration;
     }     
    
 cout<<"Cost of call is  $ "<<cost<<endl;              
 }