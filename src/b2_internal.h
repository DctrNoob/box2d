// Manual addition to suppress selected clang/GCC diagnostic messages

#ifndef B2_INTERNAL_H
#define B2_INTERNAL_H

#if defined(__clang__)
  #pragma clang diagnostic ignored "-Wconversion"
#elif defined(__GNUC__)
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wconversion"
#endif

#endif
