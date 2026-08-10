# 5V LED Circuit with NPN Transistor & Push Button

A simple electronic circuit built on Tinkercad featuring a Red LED controlled by an NPN BJT Transistor acting as a low-side switch, triggered by a Push Button with a pull-down resistor setup.

## 🔗 Live Simulation
You can test and run the full simulation directly on Tinkercad:
[Run Tinkercad Simulation](https://www.tinkercad.com/things/64Q17dqTEXZ-5vledcircuitwithnpntransistoramppushbutton)

## 📸 Circuit Overview
* **Power Supply:** 5V DC
* **Transistor:** NPN BJT Transistor (Low-side switch)
* **Control:** Push Button (Tactile Switch)
* **Resistors:** 10k Ω Pull-Down Resistor, 330 Ω Base Resistor, 330 Ω Current-limiting Resistor
* **Output:** Red LED
* **Measured Current:** ~22.5 mA (When button is pressed)

## 🛠️ How It Works
1. In the default unpressed state, a 10k Ω pull-down resistor keeps the NPN transistor's base voltage LOW at Ground (0V), keeping the transistor OFF and current consumption at `0.00 A`.
2. When the push button is pressed, 5V power flows to the base pin through a 330 Ω resistor. This forward-biases the NPN base-emitter junction, turning the transistor ON.
3. Current flows from the 5V rail through the LED, current-limiting resistor, Collector, and out to Emitter to Ground, driving the Red LED safely with a current draw of `~22.5 mA`.