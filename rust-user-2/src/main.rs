use std::ffi::CStr;
use std::slice;

// some stuff to get cross (as in c++ side)
#[repr(C)]
struct Data{
    d: *const u8,
    length: i32,
}

extern "C" {
    fn get_data() -> Data;
    fn free_data(d: Data);
}

fn main() {
    unsafe{ // yes.. I dont feel safe.
        let data = get_data(); // <- ownership comes here.
        let data_slice = slice::from_raw_parts(data.d as *const u8, data.length as usize);
        let this_is_the_str_you_are_looking_for = CStr::from_bytes_with_nul_unchecked(data_slice).to_str().unwrap();
        // lets print the what ever?
        println!("{}", this_is_the_str_you_are_looking_for);

        // remember, it was not made with Rust so lets ensure the outside allocation gets free'd.
        free_data(data);
    }
}
