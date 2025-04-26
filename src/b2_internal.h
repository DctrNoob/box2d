// Manual addition to suppress selected clang/GCC diagnostic messages

#ifndef B2_INTERNAL_H
#define B2_INTERNAL_H

#ifdef _MSC_VER
  #pragma warning(disable : 4456) // Declaration hides previous declaration
#elif defined(__clang__)
  #pragma clang diagnostic ignored "-Wconversion"
#elif defined(__GNUC__)
  #pragma GCC diagnostic ignored "-Wconversion"
#endif

#endif
