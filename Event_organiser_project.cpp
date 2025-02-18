//Assessment - Event organiser project. 
#include <iostream>
using namespace std;
#include <math.h>

class Event{
    char event_name[50];
    int no_guest;
    int time;
    double CostPerHour;
    double CostPerMinute;
    double CostOfDinner;
    public:
        char name[50];
        Event(){ 
            CostPerHour = 18.50;
            CostPerMinute = 0.40;
            CostOfDinner = 20.70;
        }
        void get_details(){
            cout<<"\nEnter event name : ";
            gets(event_name);
            cout<<"\nEnter your first and last name : ";
            gets(name);
            cout<<"\nEnter number of guests : ";
            cin>>no_guest;
            cout<<"\nEnter number of minutes : ";
            cin>>time;
        }
        float get_server(){
            int i = 0;
            if (no_guest % 20 != 0){
                    i+= 1;
            }
            return (no_guest / 20) + 1;
        }
        float cost_of_one_server(){
            int cost = 0;
            cost+= (time / 60) * CostPerHour;
            cost+= (time % 60) * CostPerMinute;
            return cost;
        }
        float cost_of_food(){
            return no_guest * CostOfDinner;
        }
        float average_cost(){
            return cost_of_food()/no_guest;
        }
        float total_cost(){
            return cost_of_food() + (cost_of_one_server() * get_server());
        }
        
};


main(){
    Event e;
    cout<<"--------------- Event Managemen System ---------------\n";
    e.get_details();
    cout<<"--------------- Event estimate for : "<<e.name<<"---------------\n";
    cout<<"\nNumber of server : "<<e.get_server();
    cout<<"\nThe cost for servers : "<<e.cost_of_one_server();
    cout<<"\nThe cost for food : "<<e.cost_of_food();
    cout<<"\nAverage cost Per Person : "<<e.average_cost();
    cout<<"\n\nTotal cost : "<<e.total_cost();
    cout<<"\nPlease deposite a 25% deposite to reserve the event";
    cout<<"\nThe deposite needed is : "<<(e.total_cost() * 0.25);
}   