# Flight-Management-System-

A comprehensive C++ console application designed to simulate an integrated Air Traffic Control and Flight Booking environment. This project utilizes Object-Oriented Programming (OOP) to manage users, flight schedules, distances, and real-time weather data.

🚀 Features
Animated UI: Includes a custom ASCII art plane animation and a world map visualization using ANSI escape codes.

User Authentication: Secure sign-up and sign-in system using a UserManager class.

Flight Search & Distance Logic: Automatically calculates the distance between five major global hubs (ATL, LHR, CDG, PEK, DXB).

Weather Integration: Provides weather forecasts for origin and destination airports synchronized with the flight date.

Seat Reservation: Interactive booking system that tracks and updates available seat counts per flight.

📍 Supported Airport Hubs
The system manages data for the following international airports:

A1: Hartsfield-Jackson Atlanta International Airport (ATL)

A2: London Heathrow Airport

A3: Paris-Charles de Gaulle Airport (CDG)

A4: Beijing Capital International Airport (PEK)

A5: Dubai International Airport (DXB)

🛠️ Technical Architecture
The project is built using a modular class structure:

UserManager: Handles registration and authentication of up to 100 users.

Airports: Contains the map rendering and airport naming conventions.

Distance: Inherits from Airports to calculate travel spans.

FlightBookingSystem: Manages flight objects, searching, and seat decrementing.

WeatherService: Stores and retrieves city-specific weather conditions based on flight dates.

💻 How to Run
Prerequisites
Windows OS (required for <windows.h> and Sleep() functions).

A C++ compiler (e.g., MinGW, GCC).

Execution
Clone the repository:

Bash
git clone https://github.com/your-username/flight-management-system.git
Compile:

Bash
g++ main.cpp -o FlightSystem.exe
Run:

Bash
./FlightSystem.exe
📝 Usage Note
When prompted for a flight search, use the airport codes A1 through A5 for both the "from" and "destination" fields to ensure the system correctly calculates distances and retrieves weather data.
