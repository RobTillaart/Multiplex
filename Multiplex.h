#pragma once
//
//    FILE: Multiplex.h
//  AUTHOR: Rob Tillaart
// VERSION: 0.1.0
// PURPOSE: Arduino library to multiplex streams 
//    DATE: 2021-01-09
//     URL: https://github.com/RobTillaart/Multiplex


#include "Arduino.h"
#include "Print.h"


#define MULTIPLEX_LIB_VERSION      (F("0.1.0"))


const uint8_t MAX_MULTIPLEX = 4;


class Multiplex: public Print
{
public:
  Multiplex();
  
  // CORE
  size_t  write(uint8_t c);
  bool    add(Stream * stream);  // returns true on success
  void    reset();

  // CONTROL
  uint8_t count()       { return _count; };
  uint8_t size()        { return _size; };
  void    enable(uint8_t n);
  void    disable(uint8_t n);
  bool    isEnabled(uint8_t n);

private:
  Stream * _stream[MAX_MULTIPLEX];
  bool    _enabled[MAX_MULTIPLEX];  // bitmask max 8 ...
  uint8_t _count = 0;
  uint8_t _size  = 0;
};

// -- END OF FILE --
