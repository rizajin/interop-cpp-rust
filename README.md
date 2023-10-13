# interop-cpp-rust
![Rusty Crabbie by Midjourney](rustycrabi.jpg)
## minimal sample(s) of interoperations between c++ and rust

### sample 1
for cpp-user and rust-lib, do cargo build first, then cmake .. / cmake --build . or your own.  

### sample 2
rust-user-2 and cpp-lib-2  
this one expects c++ project to be built first, then dll and lib copied to root in rust project, and the running the magical b.bat, I tried to get it to work with cargo but it does not seem to take the 'cargo:rustc-link-lib=dylib <- cppLib' [(Official doc)](https://doc.rust-lang.org/cargo/reference/build-scripts.html#rustc-link-lib) nor 'native' search into account. So, fixing those, near.. future... 

### sample 3?
