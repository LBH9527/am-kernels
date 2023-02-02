#include <klibtest.h>

void (*entry)() = NULL; // mp entry

static const char *tests[256] = {
  ['p'] = "printf test",
  ['m'] = "memset test",
};

int main(const char *args) {
  switch (args[0]) {
    CASE('p', test_printf);
    CASE('m', test_memset);

    case 'H':
    default:
      printf("Klib test, ");
      printf("Usage: make ARCH=native(riscv64-nemu) mainargs=* run(gdb) \n");
      for (int ch = 0; ch < 256; ch++) {
        if (tests[ch]) {
          printf("  %c: %s\n", ch, tests[ch]);
        }
      }
  }
  return 0;
}