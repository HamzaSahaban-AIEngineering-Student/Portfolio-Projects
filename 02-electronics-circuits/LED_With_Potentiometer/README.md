# 5V LED Circuit with Potentiometer

A simple electronic circuit built on Tinkercad featuring a Red LED controlled by a Potentiometer (Variable Resistor) and powered by a 5V DC Power Supply through a current-limiting resistor.

## 🔗 Live Simulation
You can test and run the full simulation directly on Tinkercad:
[Run Tinkercad Simulation](https://www.tinkercad.com/things/iSAnzc3jJQf-ledwithpotentiometer)

## 📸 Circuit Overview
* **Power Supply:** 5V DC
* **Control:** 10k Ω Potentiometer (Variable Resistor)
* **Resistor:** 220 Ω (Current-limiting)
* **Output:** Red LED
* **Measured Current:** Variable (0.00 A to ~13.5 mA depending on potentiometer angle)

## 🛠️ How It Works
1. The potentiometer acts as a variable voltage divider / rheostat, controlling the current delivered from its wiper pin to the LED.
2. Rotating the knob alters the circuit's total resistance, allowing smooth dimming and brightening of the LED.
3. The fixed 220 Ω resistor remains in series to protect the LED from burning out when the potentiometer knob is turned to zero resistance.