# MPPT-for-Solar-Car
Maximum Power Point Tracker for solar powered cars
The purpose of this article is to design and implement maximum power point tracker which has
simple structure and high efficiency for the Eskişehir Technical University Solar Car Team. In order
to see the results in advance, the designs were first tried in simulation programs. In solar-powered
systems, curve of power has parabolic structure so the system must be kept constant at a certain
voltage value to obtain maximum power. Devices that hold the system at this maximum power point
are called the Maximum Power Point Tracker (Mppt). There are different algorithms to find the
maximum power. In this project, Perturb and Observe Algorithm has been used. The working
principle of this algorithm is to calculate the output power of the panel and change it by increasing or
decreasing the voltage and recalculate the output power after each change. If the output power
increases, the change is repeated in the same direction, otherwise the change direction is reversed.
According to the result of this algorithm, the processor produces a signal with a specific duty cycle.
The generated signal comes to the switching element of the Buck-Boost Converter. Buck-Boost
converters are a type of DC-DC converter that can increase or decrease the output voltage, and these
converters change the voltage according to the signal with the specific duty cycle sent by the
processor. Thus, the system reaches the required voltage value for maximum power.
This project prepare with using Proteus. You can open with Proteus sim files
