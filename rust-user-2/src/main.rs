use std::ffi::CStr;

// some stuff to get cross (as in c++ side)
#[repr(C)]
struct Data{
    d: *const u8,
    length: i32,
}

fn main() {
    println!("Hello, world!");
}
