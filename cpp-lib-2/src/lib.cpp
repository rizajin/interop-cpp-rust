#ifdef LIB_EXPORTS
#define COOLEST_API __declspec(dllexport)
#else
#define COOLEST_API __declspec(dllimport)
#endif

#include <cstdint>

// some stuff to send cross
struct Data
{
    const char* d;
    int32_t length;
};

