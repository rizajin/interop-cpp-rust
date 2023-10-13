#ifdef LIB_EXPORTS
#define COOLEST_API __declspec(dllexport)
#else
#define COOLEST_API __declspec(dllimport)
#endif

#include <cstdint>
#include <cstring>

// some stuff to send cross (as in rust side)
struct Data
{
    const char* d;
    int32_t length;
};

extern "C" 
{
    COOLEST_API Data get_data();
    COOLEST_API void free_data(Data d);
}

// what ever you want "block" just, lets use our imagination. given we have one.

extern "C"
{
    Data get_data()
    {
        const char* raw_data = "I love C++! Maybe!";
        // lets allocate a some
        char* copy = new char[strlen(raw_data) + 1];
        strcpy(copy,raw_data);

        Data d;
        d.d = copy;
        d.length = strlen(copy);

        return d;
    }

    void free_data(Data d)
    {
        delete[] d.d; // pun accident?
    }
}
