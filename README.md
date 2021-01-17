
[![Arduino CI](https://github.com/RobTillaart/Multiplex/workflows/Arduino%20CI/badge.svg)](https://github.com/marketplace/actions/arduino_ci)
[![License: MIT](https://img.shields.io/badge/license-MIT-green.svg)](https://github.com/RobTillaart/Multiplex/blob/master/LICENSE)
[![GitHub release](https://img.shields.io/github/release/RobTillaart/Multiplex.svg?maxAge=3600)](https://github.com/RobTillaart/Multiplex/releases)


# Multiplex

Arduino Library implementing a stream multiplexer.

## Description

To elaborate


## Interface

### Core

- **size_t write(uint8_t c)** workhorse of the print interface.
- **bool add(Print \* stream)** add another print stream. Returns false if no space left.


### Control

- **uint8_t count()** returns # streams, MAX 4 in initial release
- **void enable(uint8_t n)** enable a stream.
- **void disable(uint8_t n) ** disable a stream.
- **bool isEnabled(uint8_t n)** checks if a stream is enabled.

## Future

- bright
- **free()** but ddifferent name.


## Operation

See examples
