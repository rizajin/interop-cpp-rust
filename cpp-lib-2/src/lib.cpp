#ifdef LIB_EXPORTS
#define COOLEST_API __declspec(dllexport)
#else
#define COOLEST_API __declspec(dllimport)
#endif

// TODO: C-Linkage stuff.. DIY.