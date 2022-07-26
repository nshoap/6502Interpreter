#ifndef CPU_HPP
#define CPU_HPP

#include <cstdint>

class CPU
{
public:

protected:
  /* Registers */
  uint16_t program_counter;
  uint8_t accumulator;
  uint8_t x;
  uint8_t y;
  uint8_t status;
  uint8_t stack_pointer;
};

#endif