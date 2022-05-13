# Background

I wanted to setup ATTiny85 and 433Mhz Transmitter for lower power consumption.

Though the following code works, but it is unreliable. It gives inconsistent results if there are any other 433Mhz devices.

So I am dropping this. It is not worth it.

The real way that other commercial remotes do it is via the EV1527 encoder chipset. I will attempt that in future.

I am keeping it in place in case I need to generate a square pulse on ATTINY85 in future.

# SML
Projects with microcontrollers with limited capacity (E.g.: ATtiny)

## SML01
Using ATtiny85 and a radio module transmitter, be able to communicate with an Arduino Uno with the radio module receiver
