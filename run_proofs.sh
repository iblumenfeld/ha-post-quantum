#!/bin/bash

clang -c -emit-llvm sha256.c
saw sha256.saw
saw merkle.saw
