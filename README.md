# Midipal (Fork)

Midipal, the MIDI swiss army knife (forked version).

This is a fork of these read-only repos:
- https://github.com/pichenettes/midipal
- https://github.com/pichenettes/avril
- https://github.com/pichenettes/avril-firmware_tools

The main goals of this fork:
- refresh codebase so that it compiles with my environment (WSL Ubuntu)
- extend original Midipal featuresfor my own (creative) need.

Note: I've unsubmoduled the main repo to simplify as everything is read-only for a while.

# Midipal description

A midi in, a midi out, a small display, an encoder ; 20 awesome features:

* MIDI monitor
* BPM counter
* Keyboard splitter
* Note dispatcher / voice stealing / polyphonic driver
* Channels merger
* Channel filter
* Clock divider
* Clock source, with swing
* CC and NRPN knob
* 8 pots/sensors voltage reader/controller
* Drum pattern generator (including Euclidian patterns)
* Note, velocity and CC randomizer
* Chord memory
* Arpeggiator
* Sequencer
* CC lfo
* Tempo-synchronized note delay (with transposition and decay velocity)
* Slave start/stop synchronizer (à la Mungo Sync)
* Scale processor / harmonizer
* Ear training game

Features of this forked firmware are subject to change in a near future.

# Prerequisites

Ubuntu required libs:

```
sudo apt install avr-libc
sudo apt install libc6-dev-i386
sudo apt install gcc-avr
sudo apt install binutils-avr
sudo apt install avrdude
```
