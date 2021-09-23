#ifndef SERIAL_DUMMY_H
#define SERIAL_DUMMY_H

#include <inttypes.h>

#include "Stream.h"

class SerialDummy
{
  public:
    void print(const __FlashStringHelper *ifsh);
    void print(const Printable& x);
    void println(void);
};

#endif
