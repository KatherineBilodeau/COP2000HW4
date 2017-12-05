// Katherine Bilodeau COP2000 HW4

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Function Prototypes
void get_race_times (string &, double &);
void find_winner_calculation (string, string, string, double, double, double);
void welcome_function ();
double race_average (double, double, double);


int main () 
{
    //declare all variables for the program here (racers, times, average)
    string name_of_racer;
    string name_of_racer_1;
    string name_of_racer_2;
    string name_of_racer_3;
    double time_racer_1;
    double time_racer_2;
    double time_racer_3;
    double racer_race_time;
    double race_time_average;
    
    
    // call the functions (welcome_function, get_race_times (call three times b/c three racers),find_winner_calculation,race_average)
    welcome_function ();
    // When calling get race times it continues to ask for names of racers, even though I only call the function three times. I really don't know what is going on. 
    get_race_times (name_of_racer_1, time_racer_1);
    get_race_times (name_of_racer_2, time_racer_2);
    get_race_times (name_of_racer_3, time_racer_3);
    find_winner_calculation (name_of_racer_1,name_of_racer_2,name_of_racer_3,time_racer_1,time_racer_2,time_racer_3);
    race_average (time_racer_1,time_racer_2,time_racer_3);
    
    
    return 0;
}

// Function Definitions
void welcome_function ()
{
    cout << "Welcome to Race Results Program" << endl;
    cout << "You will be asked to enter three racers names" << endl;
    cout << "and their associated race times." << endl;
    cout << "Please enter a real number for race time. The race time must be greater than 0. " << endl;
}
void get_race_times (string &name_of_racer, double &racer_race_time)
{
    // Use cout and cin functions to get user Input

    
    cout << "Please enter the racer's first name: " << endl;
    cin >> name_of_racer;
    cout << "Please enter the racer's time: " << endl;
    cin >> racer_race_time;
    
    // Validation
    while (racer_race_time <= 0)
    {
        cout << "Invalid Input, Please Try Again" << endl;
        
        cin >> racer_race_time;
        
    }

    
    cout << "Please enter the racer's first name: " << endl;
    cin >> name_of_racer;
    cout << "Please enter the racer's time: " << endl;
    cin >> racer_race_time;
    
}
void find_winner_calculation (string name_of_racer_1, string name_of_racer_2, string name_of_racer_3, double time_racer_1, double time_racer_2, double time_racer_3)
{
    
    //Use If Statements to find the winner (is racer 1 less than three and so on. Remember to cover ties )
    if (time_racer_1 > time_racer_2 && time_racer_1 > time_racer_3)
    cout << name_of_racer_1 << " wins, with the time of : " << time_racer_1 << endl;
    
    else if (time_racer_2 > time_racer_1 && time_racer_2 > time_racer_3)
    cout << name_of_racer_2 << " wins, with the time of : " << time_racer_2 << endl;
    
    else if (time_racer_3 > time_racer_2 && time_racer_3 > time_racer_1)
    cout << name_of_racer_3 << " wins, with the time of : " << time_racer_3 << endl;
    
    else if (time_racer_3 > time_racer_2 && time_racer_3 == time_racer_1)
    cout << name_of_racer_3 << " and " << name_of_racer_1 << " tie, with the time of : " <<  time_racer_3 << endl;
    
    else if (time_racer_3 > time_racer_1 && time_racer_3 == time_racer_2)
    cout << name_of_racer_3 << " and " << name_of_racer_2 << " tie, with the time of : " <<  time_racer_3 << endl;
    
    else if (time_racer_2 > time_racer_3 && time_racer_2 == time_racer_1)
    cout << name_of_racer_2 << " and " << name_of_racer_1 << " tie, with the time of : " <<  time_racer_2 << endl;
    
    else if (time_racer_1 == time_racer_2 == time_racer_3)
    cout << name_of_racer_1 << ", " << name_of_racer_2 << ", and " << name_of_racer_3 << " tie, with a time of : " << time_racer_1 << endl;
    
    else 
    cout << "There was an issue finding the winner of the race." << endl;
    
    
    
    
}
double race_average (double time_racer_1, double time_racer_2, double time_racer_3)
{
    const int total_number_of_racers = 3;
    double race_time_average = ((time_racer_1 + time_racer_2 + time_racer_3)/total_number_of_racers);
    
    cout << "The Overall Race Average is " << setprecision(2) << fixed << race_time_average << endl; 
    return race_time_average;
}

