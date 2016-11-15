#include "millis.h"
#include <stdio.h>

static millis_t mocked = 0;

millis_t millis(void) {
  mocked += 1;
  return mocked;
}

void set_millis(millis_t t) {
  mocked = t;
}
