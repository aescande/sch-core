#include "shared-tests/tests/common.h"

#ifdef ENABLE_SIGFPE
  #include <fenv.h>
#endif

using namespace sch;

void display() {}

/*
* main - this is the main programme.
*/
int main ()
{
  #ifdef ENABLE_SIGFPE
  feenableexcept(FE_ALL_EXCEPT & ~FE_INEXACT);
  #endif
  TestMaterial universe;
  universe.initializeUniverse();
  universe.GeneralTest();
  return 0;
}


