# Capacitor Charge/Discharge & LED Delay Circuit

A simple electronic circuit built on Tinkercad demonstrating capacitive energy storage, transient RC response, and LED turn-off delay powered by a 5V DC Power Supply.

## 🔗 Live Simulation
You can test and run the full simulation directly on Tinkercad:
[Run Tinkercad Simulation](https://www.tinkercad.com/things/8RpQ2Xjjmr6-bushbuttonampcapacitorciruit)

## 📸 Circuit Overview
* **Power Supply:** 5V DC
* **Control:** Push Button (Tactile Switch)
* **Storage Element:** Capacitor (Connected in parallel across rails)
* **Resistor:** Current-limiting resistor
* **Output:** Red LED
* **Measured Current:** ~13.5 mA (When button is pressed)

## 🛠️ How It Works
1. When the push button is pressed, the circuit closes, lighting up the LED and charging the capacitor simultaneously.
2. When the push button is released, the capacitor discharges its stored energy through the LED and resistor, causing the LED to gradually fade out (decay delay) rather than turning off instantly.