# Seat Monitoring System 

This project is a simulated seat monitoring system designed to emulate real-world applications in embedded systems. It monitors vibration levels and temperature, triggering alerts and actions when thresholds are exceeded. The system is implemented in C and runs as a console-based application.

## Features
- Simulates vibration and temperature sensor readings.
- Displays data on a simulated LCD output.
- Triggers alerts for high vibration.
- Controls a fan based on temperature thresholds.

---

## Requirements
- A C compiler (e.g., GCC, MinGW, or Visual Studio).
- Supported platforms:
  - Windows (uses `Sleep()` for delay).
  - Linux/macOS (uses `usleep()` for delay).

---

## How to Run

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/your-username/seat-monitoring-system.git
   cd seat-monitoring-system
