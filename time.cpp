// #include <iostream>
// #include <ctime>
// using namespace std;

// int main() 
// {
//    // current date and time on the current system
//    time_t now = time(0);
//     cout<<now<<endl;
//    // convert now to string form
//    char* date_time = ctime(&now);

//    cout << "The current date and time is: " << date_time << endl;
// }

                        //Separate time and date.
#include <iostream>
#include <ctime>
int main() 
{
    // current date and time on the current system
    std::time_t now = std::time(0);

    // convert now to std::tm form
    std::tm* date_time = std::localtime(&now);

    // Extracting date and time components from std::tm
    int year = date_time->tm_year + 1900; // Years since 1900
    int month = date_time->tm_mon + 1;    // Months since January (0 to 11)
    int day = date_time->tm_mday;         // Day of the month (1 to 31)
    int hour = date_time->tm_hour;        // Hours since midnight (0 to 23)
    int minute = date_time->tm_min;       // Minutes after the hour (0 to 59)
    int second = date_time->tm_sec;       // Seconds after the minute (0 to 61)

    // Printing date and time separately
    std::cout << "Current Date: " << year << "-" << month << "-" << day << std::endl;
    std::cout << "Current Time: " << hour << ":" << minute << ":" << second << std::endl;

    return 0;
}
