# 5V LED Circuit with PNP Transistor & Push Button

A simple electronic circuit built on Tinkercad featuring a Red LED controlled by a PNP BJT Transistor acting as a high-side switch, triggered by a Push Button with a pull-up resistor setup.

## 🔗 Live Simulation
You can test and run the full simulation directly on Tinkercad:
[Run Tinkercad Simulation](https://www.tinkercad.com/things/hYrTNhJaCeN-pnptransistorwithled)

## 📸 Circuit Overview
* **Power Supply:** 5V DC
* **Transistor:** PNP BJT Transistor (High-side switch)
* **Control:** Push Button (Tactile Switch)
* **Resistors:** 10k Ω Pull-Up Resistor, 330 Ω Base Resistor, 330 Ω Current-limiting Resistor
* **Output:** Red LED
* **Measured Current:** ~22.5 mA (When button is pressed)

## 🛠️ How It Works
1. In the default unpressed state, a 10k Ω pull-up resistor keeps the PNP transistor's base voltage HIGH at 5V, keeping the transistor OFF and current consumption at `0.00 A`.
2. When the push button is pressed, it pulls the base pin down to Ground (LOW). This forward-biases the PNP base-emitter junction, turning the transistor ON.
3. Current flows from the Emitter through the Collector, driving the Red LED safely with a current draw of `~22.5 mA`.