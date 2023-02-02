#include "klibtest.h"

static const char *names[] = {
    [0] = "ESCAPE",
    [1] = "F1",
};

void test_printf() {
  for (int i = 0; i < 101; i ++) {
    printf("Hello, AM World @ " __ISA__ " , #%02d \n", i);
  }
  printf("Got  (kbd): %s  %s \n", names[0], names[1]);

}
