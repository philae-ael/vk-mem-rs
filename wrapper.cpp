#define VMA_IMPLEMENTATION

// #define WITH_VMA_LOG_LEAK
#ifdef WITH_VMA_LOG_LEAK
#define VMA_LEAK_LOG_FORMAT(format, ...)                                       \
  do {                                                                         \
    printf((format), __VA_ARGS__);                                             \
    printf("\n");                                                              \
  } while (false)
#endif

#include "vk_mem_alloc.h"
