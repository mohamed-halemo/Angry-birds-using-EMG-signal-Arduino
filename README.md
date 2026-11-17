# Angry Birds with an EMG Signal (Arduino)

Play Angry Birds with your muscles. I built an EMG circuit, read the signal with an Arduino, and a Python script turns each muscle contraction into a key press that controls the game.

## How it works

1. EMG pads on the arm feed my EMG circuit.
2. The Arduino (`sketch_dec23a.ino`) reads the signal and sends a control signal over USB when it detects a contraction.
3. `arduino_reader.py` listens on the serial port and presses the space bar, which controls the game.

Needs an Arduino Uno, EMG pads, and Python with `pyserial` and `pynput`.

The PC-side reader is based on the [DIYEMG](DIYEMG-main/DIYEMG-main/README.txt) project.
