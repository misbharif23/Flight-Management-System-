#include <iostream>
#include <string.h>
#include <windows.h>
#include <algorithm>


#define UNDERLINE "\033[4m"

#define CLOSEUNDERLINE "\033[0m"
using namespace std;
void clearScreen() {
    std::cout << "\033[2J\033[1;1H";  // ANSI escape code to clear screen
}
void plane()
{
    cout << "                                                                                                    \n";
    Sleep(100);
    cout << "                                                                                                    \n";
    Sleep(100);
    cout << "                                                                                                    \n";
    Sleep(100);
    cout << "                                                                                                    \n";
    Sleep(100);
    cout << "                            :::                             \n";
    Sleep(100);
    cout << "                           .: :.                            \n";
    Sleep(100);
    cout << "                           -   -                            \n";
    Sleep(100);
    cout << "                           -   -                            \n";
    Sleep(100);
    cout << "                          :     -                           \n";
    Sleep(100);
    cout << "                          =     -                           \n";
    Sleep(100);
    cout << "                          -     -                           \n";
    Sleep(100);
    cout << "                          -     -                           \n";
    Sleep(100);
    cout << "                          -     -                           \n";
    Sleep(100);
    cout << "                        .:.     .:.                         \n";
    Sleep(100);
    cout << "                  ::. ::.          ::  ::.                  \n";
    Sleep(100);
    cout << "                 .:.=:               :-:.:                  \n";
    Sleep(100);
    cout << "                 .-                     :.                  \n";
    Sleep(100);
    cout << "               .:.                       .:.                \n";
    Sleep(100);
    cout << "         .-.-::                             ::.-::          \n";
    Sleep(100);
    cout << "          : :            .:     ..            :...          \n";
    Sleep(100);
    cout << "        ::           :::. =     = .:::.          ::         \n";
    Sleep(100);
    cout << "      ::        .:::.     -     -      :.:.        ::       \n";
    Sleep(100);
    cout << "   .:.      :::.          -     -          .:::.     .:.    \n";
    Sleep(100);
    cout << "  .:   .:::.              =     -               :::.   .:   \n";
    Sleep(100);
    cout << "  .-::.                   -     -                   .::::   \n";
    Sleep(100);
    cout << "                          -     -                           \n";
    Sleep(100);
    cout << "                          :.    -                           \n";
    Sleep(100);
    cout << "                           -   -                            \n";
    Sleep(100);
    cout << "                           =   =                            \n";
    Sleep(100);
    cout << "                          ::   .:.                          \n";
    Sleep(100);
    cout << "                       .:.       .:.                        \n";
    Sleep(100);
    cout << "                     ::             ::                      \n";
    Sleep(100);
    cout << "                    - .......-....... :.                    \n";
    Sleep(100);
    cout << "                    :.               .:                     \n";
    Sleep(100);

    cout<<"AIR";
    Sleep(1000);
    cout<<"                          TRAFFIC";
    Sleep(1000);
    cout<<"                          CONTROL"<<endl;
    Sleep(2000);
}

const int MAX_USERS = 100;

struct User {
    string username;
    string password;
};

class UserManager {
private:
    User users[MAX_USERS];
    int userCount;

public:
    UserManager() : userCount(0) {}

    bool registerUser(const string& username, const string& password) {
        if (userCount >= MAX_USERS) {
            cout << "Max user limit reached." << endl;
            return false;
        }
        users[userCount++] = { username, password };
        return true;
    }

    bool authenticateUser(const string& username, const string& password) const {
        for (int i = 0; i < userCount; ++i) {
            if (users[i].username == username && users[i].password == password) {
                return true;
            }
        }
        return false;
    }
};
class Airports{
protected:
    string map;
    int NumofAirports;
    string AirportsList;
    string A1;
    string A2;
    string A3;
    string A4;
    string A5;
public:
    Airports():map("                                                                                          \n"
                   "                                                                                          \n"
                   " --------------------------------------------------------------------------------------------                                                                                         \n"
                   "|                                                                                            | \n"
                   "|                                                                                            |\n"
                   "|                         -=+##=+*+#%%%+-.     .:            .:                              |\n"
                   "|                   :.=:=-***.-#%@@@@@@@:     :=:      ...    :=+-.    ..                    |\n"
                   "|                  *+*+:==*#+.   %@@@@%*         .    -= :=-+@@@@%#*+*:-==:.    .            |\n"
                   "|        .+@@%%#*%%####+##+-=@=  #@@%+=-:     .*%@%+:=**%%%#@@@@@@@@@@@@@@@@@%%@%+-.         |\n"
                   "|        *@@%@@@@@@@@@@@((A1))*+:  -%-   .:    +@%+%@@@@@@@@@@@@@@@@@@@@@@@@@@@*#%#-         |\n"
                   "|        =+:. :*@@@@@@@@+: +@##           := ((A2))@@@@@@@@@@@@@@@@@@@@@@@@%.. .@.           |\n"
                   "|               #@@@@@@@@@*@@%##         .-#+%@((A3))@@@@@@@@@@@@@@@@@@@@@@@@@%-  :          |\n"
                   "|               +@@@@@@@@@@@#+...         -+%#%#@@==+@*+@#%@@@@@@@@@((A4))@%=:.              |\n"
                   "|               *@@@@@@@@@@-              ##--:---*%%@@-@@@@@@@@@@@@@@%++:.+                 |\n"
                   "|                +%@@@%%##:              :%@@@#+++==@@@%@@@@@@@@@@@@@@@# ..                  |\n"
                   "|                 =#@*   =              =@@@@@@@@@@%*@@#**-+@@@@#@@@@%#=                     |\n"
                   "|                   +*=%. -:.           #@@@@@@@@@((A5))@%+.  .@%- .#@%:  -                  |\n"
                   "|                      .+:-*==.         =@@@@@@@@@@@@%*=     :+   .++: .--                   |\n"
                   "|                        .%@@@@%:        .:. :%@@@@@@@*           :*-:*#:.                   |\n"
                   "|                        *@@@@@@@@#+          =@@@@@@-             .+-+:=  :#*-:             |\n"
                   "|                         #@@@@@@@@+           @@@@@@= -                .:== =.              |\n"
                   "|                          -@@@@@@@           :@@@@@= %-              .-#@@@%@-   .          |\n"
                   "|                          :@@@@@:             +@@@*  :               #@@@@@@@@-             |\n"
                   "|                          -@@@#:               ++-                   =+=:-#@@*    .         |\n"
                   "|                          =@%=                                             -:    :-.        |\n"
                   "|                          -@=                                                   -.          |\n"
                   "|                           *- .                                                             |\n"
                   " --------------------------------------------------------------------------------------------"),NumofAirports(10),A1("A1.Hartsfield-Jackson Atlanta International Airport (ATL)"),A2("A2.London Heathrow Airport"),A3("A3.Paris-Charles de Gaulle Airport (CDG)"),A4("A4.Beijing Capital International Airport (PEK)"),A5("A5.Dubai International Airport (DXB)\n"){}
  void displayAp()
  {
      clearScreen();

      int maxLength = max({A1.length(), A2.length(), A3.length(), A4.length(), A5.length()});
        cout<<map<<endl;
        cout<<"List of Airports:\n"<<endl;cout << "+" << string(maxLength + 2, '-') << "+" << endl;

      // Print each airport name with borders
      cout << "| " << A1 << string(maxLength - A1.length(), ' ') << " |" << endl;
      cout << "| " << A2 << string(maxLength - A2.length(), ' ') << " |" << endl;
      cout << "| " << A3 << string(maxLength - A3.length(), ' ') << " |" << endl;
      cout << "| " << A4 << string(maxLength - A4.length(), ' ') << " |" << endl;
      cout << "| " << A5 << string(maxLength - A1.length(), ' ') << " |" << endl;
      cout << "+" << string(maxLength + 2, '-') << "+" << endl;

      // Print the bottom border of the box
     // cout << "+" << string(maxLength + 2, '-') << "+" << endl;
  }
};
 string name(string a) {
    if (a == "A1") {
        return "Hartsfield-Jackson Atlanta International Airport (ATL)";
    } else if (a == "A2") {
        return "London Heathrow Airport";
    } else if (a == "A3") {
        return "Paris-Charles de Gaulle Airport (CDG)";
    } else if (a == "A4") {
        return "Beijing Capital International Airport";
    } else if (a == "A5") {
        return "Dubai International Airport";
    } else {
        return "Unknown Airport";
    }
}

class Distance : public Airports {
public:
void DistanceFunc(string x, string y) {
    if (x == "A1" && y == "A2") {
        cout << "The total distance from " << A1 << " to " << A2 << " is 6757.635 km" << endl;
    } else if (x == "A1" && y == "A3") {
        cout << "The total distance from " << A1 << " to " << A3 << " is 7,055.74 km" << endl;
    } else if (x == "A1" && y == "A4") {
        cout << "The total distance from " << A1 << " to " << A4 << " is 10,289 km" << endl;
    } else if (x == "A1" && y == "A5") {
        cout << "The total distance from " << A1 << " to " << A5 << " is 12,254 km" << endl;
    } else if (x == "A2" && y == "A1") {
        cout << "The total distance from " << A2 << " to " << A1 << " is 6757.635 km" << endl;
    } else if (x == "A2" && y == "A2") {
        cout << "That's the same Airport" << endl;
    } else if (x == "A2" && y == "A3") {
        cout << "The total distance from " << A2 << " to " << A3 << " is 347.17 km" << endl;
    } else if (x == "A2" && y == "A4") {
        cout << "The total distance from " << A2 << " to " << A4 << " is 8,175 km" << endl;
    } else if (x == "A2" && y == "A5") {
        cout << "The total distance from " << A2 << " to " << A5 << " is 5,491.97 km" << endl;
    } else if (x == "A3" && y == "A1") {
        cout << "The total distance from " << A3 << " to " << A1 << " is 7,055.74 km" << endl;
    } else if (x == "A3" && y == "A2") {
        cout << "The total distance from " << A3 << " to " << A2<< " is 347.17 km" << endl;
    } else if (x == "A3" && y == "A3") {
        cout << "That's the same Airport" << endl;
    } else if (x == "A3" && y == "A4") {
        cout << "The total distance from " << A3 << " to " << A4 << " is 8,211 km" << endl;
    } else if (x == "A3" && y == "A5") {
        cout << "The total distance from " << A3 << " to " << A5 << " is 5,238.58 km" << endl;
    } else if (x == "A4" && y == "A1") {
        cout << "The total distance from " << A4 << " to " <<A1 << " is 10,289 km" << endl;
    } else if (x == "A4" && y == "A2") {
        cout << "The total distance from " << A4<< " to " << A2<< " is 8,175 km" << endl;
    } else if (x == "A4" && y == "A3") {
        cout << "The total distance from " << A4<< " to " << A3<< " is 8,211 km" << endl;
    } else if (x == "A4" && y == "A4") {
        cout << "That's the same Airport" << endl;
    } else if (x == "A4" && y == "A5") {
        cout << "The total distance from " << A4 << " to " << A5 << " is 5,888 km" << endl;
    } else if (x == "A5" && y == "A1") {
        cout << "The total distance from " << A5 << " to " << A1 << " is 12,254 km" << endl;
    } else if (x == "A5" && y == "A2") {
        cout << "The total distance from " << A5 << " to " <<A2 << " is 5,491.97 km" << endl;
    } else if (x == "A5" && y == "A3") {
        cout << "The total distance from " << A5 << " to " << A3 << " is 5,238.58 km" << endl;
    } else if (x == "A5" && y == "A4") {
        cout << "The total distance from " << A5 << " to " << A4 << " is 5,888 km" << endl;
    } else if (x == "A5" && y == "A5") {
        cout << "That's the same Airport" << endl;
    } else {
        cout << "Select valid Airports from the list." << endl;
    }
}

};
const int MAX_FLIGHTS = 100;
struct Flight {
    string flightNumber;
    string from;
    string destination;
    string date;
    int availableSeats;
};
class FlightBookingSystem {
private:
    Flight flights[MAX_FLIGHTS];
    int flightCount;
public:
    FlightBookingSystem() : flightCount(0) {}
    void addFlight(const string& flightNumber,const string& from, const string& destination, const string& date, int availableSeats) {
        if (flightCount < MAX_FLIGHTS) {
            flights[flightCount++] = { flightNumber,from, destination, date, availableSeats };
        } else {
            cout << "Max flights limit reached." << endl;
        }}
    void searchFlights(const string& from,const string& destination) const {
        bool found = false;
        for (int i = 0; i < flightCount; ++i) {
            if (flights[i].destination == destination && flights[i].from == from) {
                cout << "Flight Number: " << flights[i].flightNumber
                     << ", from: " << flights[i].from
                     << ", Destination: " << flights[i].destination
                     << ", Date: " << flights[i].date
                     << ", Available Seats: " << flights[i].availableSeats << endl;
                found = true;
            }}
        if (!found) {
            cout << "No flights found for the specified destination and date." << endl;
        }}
    bool reserveSeat(const string& flightNumber) {
        for (int i = 0; i < flightCount; ++i) {
            if (flights[i].flightNumber == flightNumber && flights[i].availableSeats > 0) {
                flights[i].availableSeats--;
                return true;
                }}
        return false;
    }
    string getdate(string from,string destination)
    {     for (int i = 0; i < flightCount; ++i) {
            if (flights[i].destination == destination && flights[i].from == from)
            {
                return(flights[i].date);
            }}}
};
const int MAX_CITIES = 100;
struct CityWeather {
    string city;
    string weather;
    string date;
};
class WeatherService:public Airports {
private:
    CityWeather weatherData[MAX_CITIES];
    int cityCount;
public:
    WeatherService() : cityCount(0) {}
    void setWeather(const string& city, const string& weather, const string& date) {
        for (int i = 0; i < cityCount; ++i) {
            if (weatherData[i].city == city && weatherData[i].date == date) {
                weatherData[i].weather = weather;
                return;}}
        if (cityCount < MAX_CITIES) {
            weatherData[cityCount++] = { city, weather, date };
        } else {
            cout << "Max cities limit reached." << endl;
        }}
    string getWeather(const string& city, const string& date) const {
        for (int i = 0; i < cityCount; ++i) {
            if (weatherData[i].city == city && weatherData[i].date == date) {
                return weatherData[i].weather;
            }}
        return "Weather data not available.";
    }
    void printWeather(const string& city, const string& date) const {
        string weather = getWeather(city, date);
        cout << "Weather in " << city << " on " << date << ": " << weather << endl;
    }
};


int main() {
    plane();
    clearScreen();


    UserManager userManager;
    FlightBookingSystem flightSystem;
    string opt;
    string u;
    string p;
    clearScreen();
    cout << "                                ------------------------------    " << endl;
    cout << "                                 SIGN IN OR CREATE AN ACCOUNT    " << endl;
    cout << "                                ------------------------------    " << endl;
    getline(cin, opt);

    if (opt == "create") {
        cout << "Username: " << endl;
        getline(cin, u);
        cout << "Password: " << endl;
        getline(cin, p);
        cout<<"Creating your account"<<endl;

        Sleep(2000);
        cout << "Your Account was created successfully." << endl;

        userManager.registerUser(u, p);
    }



    cout << endl << endl;
    cout<<"Redirecting to sign in page.";
    Sleep(1000);
    clearScreen();

    cout << "Sign in to your account" << endl << endl;

    do {
        cout << "Username:" << endl;
        getline(cin, u);
        cout << "Password:" << endl;
        getline(cin, p);

        if (userManager.authenticateUser(u, p)) {


            cout << "signing into your account" << endl;
            Sleep(1000);
            break;

        } else {
            cout << "wrong username/password" << endl;
        }
    } while (true);
    if ((userManager.authenticateUser(u,p))==true)
    {
        WeatherService w;
        Airports A;
        A.displayAp();
        Distance d;
       flightSystem.addFlight("FL101", "A1", "A2", "2024-06-01", 150);
       flightSystem.addFlight("FL102", "A1", "A3", "2024-06-02", 200);
       flightSystem.addFlight("FL103", "A1", "A4", "2024-06-03", 180);
       flightSystem.addFlight("FL104", "A2", "A1", "2024-06-04", 160);
       flightSystem.addFlight("FL105", "A2", "A3", "2024-06-05", 170);
       flightSystem.addFlight("FL106", "A2", "A4", "2024-06-06", 190);
       flightSystem.addFlight("FL107", "A2", "A5", "2024-06-07", 220);
       flightSystem.addFlight("FL108", "A3", "A1", "2024-06-08", 160);
       flightSystem.addFlight("FL109", "A3", "A2", "2024-06-09", 150);
       flightSystem.addFlight("FL110", "A3", "A4", "2024-06-10", 180);
       flightSystem.addFlight("FL111", "A3", "A5", "2024-06-11", 200);
       flightSystem.addFlight("FL112", "A4", "A1", "2024-06-12", 170);
       flightSystem.addFlight("FL113", "A4", "A2", "2024-06-13", 160);
       flightSystem.addFlight("FL114", "A4", "A3", "2024-06-14", 190);
       flightSystem.addFlight("FL115", "A4", "A5", "2024-06-15", 210);
       flightSystem.addFlight("FL116", "A5", "A1", "2024-06-16", 180);
       flightSystem.addFlight("FL117", "A5", "A2", "2024-06-17", 170);
       flightSystem.addFlight("FL118", "A5", "A3", "2024-06-18", 200);
       flightSystem.addFlight("FL119", "A5", "A4", "2024-06-19", 190);

w.setWeather("Hartsfield-Jackson Atlanta International Airport (ATL)", "sunny", "2024-06-01");
w.setWeather("London Heathrow Airport", "sunny", "2024-06-01");
w.setWeather("Paris-Charles de Gaulle Airport (CDG)", "sunny", "2024-06-02");
w.setWeather("Hartsfield-Jackson Atlanta International Airport (ATL)", "sunny", "2024-06-02");
w.setWeather("Beijing Capital International Airport", "sunny", "2024-06-03");
w.setWeather("Dubai International Airport", "sunny", "2024-06-03");
w.setWeather("London Heathrow Airport", "sunny", "2024-06-04");
w.setWeather("Paris-Charles de Gaulle Airport (CDG)", "sunny", "2024-06-04");
w.setWeather("Beijing Capital International Airport", "sunny", "2024-06-05");
w.setWeather("Dubai International Airport", "sunny", "2024-06-05");
w.setWeather("Hartsfield-Jackson Atlanta International Airport (ATL)", "sunny", "2024-06-06");
w.setWeather("London Heathrow Airport", "sunny", "2024-06-06");
w.setWeather("Paris-Charles de Gaulle Airport (CDG)", "sunny", "2024-06-07");
w.setWeather("Beijing Capital International Airport", "sunny", "2024-06-07");
w.setWeather("Dubai International Airport", "sunny", "2024-06-08");
w.setWeather("Hartsfield-Jackson Atlanta International Airport (ATL)", "sunny", "2024-06-08");
w.setWeather("London Heathrow Airport", "sunny", "2024-06-09");
w.setWeather("Paris-Charles de Gaulle Airport (CDG)", "sunny", "2024-06-09");
w.setWeather("Beijing Capital International Airport", "sunny", "2024-06-10");
w.setWeather("Dubai International Airport", "sunny", "2024-06-10");
w.setWeather("Hartsfield-Jackson Atlanta International Airport (ATL)", "sunny", "2024-06-11");
w.setWeather("London Heathrow Airport", "sunny", "2024-06-11");
w.setWeather("Paris-Charles de Gaulle Airport (CDG)", "sunny", "2024-06-12");
w.setWeather("Beijing Capital International Airport", "sunny", "2024-06-12");
w.setWeather("Dubai International Airport", "sunny", "2024-06-13");
w.setWeather("Hartsfield-Jackson Atlanta International Airport (ATL)", "sunny", "2024-06-13");
w.setWeather("London Heathrow Airport", "sunny", "2024-06-14");
w.setWeather("Paris-Charles de Gaulle Airport (CDG)", "sunny", "2024-06-14");
w.setWeather("Beijing Capital International Airport", "sunny", "2024-06-15");
w.setWeather("Dubai International Airport", "sunny", "2024-06-15");
w.setWeather("Hartsfield-Jackson Atlanta International Airport (ATL)", "sunny", "2024-06-16");
w.setWeather("London Heathrow Airport", "sunny", "2024-06-16");
w.setWeather("Paris-Charles de Gaulle Airport (CDG)", "sunny", "2024-06-17");
w.setWeather("Beijing Capital International Airport", "sunny", "2024-06-17");
w.setWeather("Dubai International Airport", "sunny", "2024-06-18");
w.setWeather("Hartsfield-Jackson Atlanta International Airport (ATL)", "sunny", "2024-06-18");
w.setWeather("London Heathrow Airport", "sunny", "2024-06-19");
w.setWeather("Paris-Charles de Gaulle Airport (CDG)", "sunny", "2024-06-19");
w.setWeather("Beijing Capital International Airport", "sunny", "2024-06-19");
w.setWeather("Dubai International Airport", "sunny", "2024-06-19");

       cout<<endl<<endl;
       int choice;
        do {
            cout<<endl<<endl;
            cout << "Flight Booking System Menu:\n";
            cout << "1. Search for flights\n";
            cout << "2. Reserve a seat\n";
            cout << "0. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;
            cin.ignore(); // To ignore any newline characters in the buffer

            if (choice == 1) {
                string destination,from ;
                cout << "from: ";
                getline(cin, from);
                cout << "Enter destination: ";
                getline(cin, destination);
                cout<<endl<<endl;
                d.DistanceFunc(from,destination);
                cout<<endl<<endl;
                flightSystem.searchFlights(from,destination );
                cout<<endl<<endl;
                string d=flightSystem.getdate(from,destination);
                w.printWeather(name(from), d);
                cout<<endl<<endl;
                w.printWeather(name(destination), d);
                cout<<endl<<endl;

            } else if (choice == 2) {
                string flightNumber;
                cout << "Enter flight number: ";
                getline(cin, flightNumber);
                cout<<endl<<endl;
                if (flightSystem.reserveSeat(flightNumber)) {
                    cout << "Seat reserved successfully." << endl;
                } else {
                    cout << "Seat reservation failed. Either the flight number is incorrect or no seats are available." << endl;
                }
            }
            else if(choice!=1 || choice !=2 || choice !=0)
            {
                cout<<"INVALID CHOICE"<<endl;
            }
        } while (choice != 0);
    }

        cout<<" \n BYEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE<3"<<endl;
        return 0;
}
