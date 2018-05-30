# Heat-controlling-circuit-for-thermochromic-pigments

## Overview
Thermochromic inks are pigments that change color to colorless at certain temperature. There are many different types of thermochromic pigments including textile inks for textile screen printing.

You may use any heat source or your body heat to change the color of thermochromic prints. But also, we can use electricity to heat up certain parts of the fabric to achieve dynamic pattern on fabric.
When large current goes through low resistance conductive material, it emits heat. We can use this method to heat up conductive threads to change colors of the prints.

Pictures

## Calculations
All conductive threads have different properties, the resistance per meter is different in all of them.
The ideal conductive threads to build a heating source are made of steel or copper like Bekinox stainless steel thread from Bekaert or Copper thread from KarlGrimm.

The best scenario would be to have a 6-50 Ohm conductive thread with a current of 300-1000 mA flowing through it. The time the thermochromic ink takes to change its color is directly proportional to the amount of current. For 300mA it will need more time than for 1000mA.

To calculate the voltage we just need to use ohm's law formula:

Voltage equals Current times Resistance or V = I x R

We know our conductive thread resistance(measured with the multimeter), for example 32 ohm, the current has to be a value from 300mA to 1000mA.

For 300mA:

V = 0,3 * 32 => V = 9,6V

For 1000mA:

V = 1 * 32 => V = 32V

## Testing circuit

##### Materials
- Arduino UNO board
- Transistor, TIP122 or IRLZ24N or IRLB8743
- Conductive thread
- Jumper wires
- Protoboard
- Variable DC power supply

##### Wiring

##### Code

## Multiple conductive threads circuit

##### Materials
- Arduino MKR1000
- 8x Transistor BC817
- 8x Conductive thread

##### PCB

##### Code



## Powering




