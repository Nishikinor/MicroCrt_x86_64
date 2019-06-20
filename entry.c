#include "microcrt.h"

void microcrt_entry(void)
{
  int ret = main(int argc, char **argv, char **envp);
  exit(ret);
}
