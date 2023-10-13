@echo off
cargo rustc --bin best_executable -- -L ./ -l dylib=cppLib