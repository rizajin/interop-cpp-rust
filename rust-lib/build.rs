use std::fs;

fn main(){
    // sorry.. laziness.. for demo purposes, debug only.
    let src = "target/debug/rust_lib.dll.lib";
    let dest = "target/debug/rust_lib.lib";

    if fs::metadata(src).is_ok() {
        fs::rename(src, dest).unwrap();
    }
}