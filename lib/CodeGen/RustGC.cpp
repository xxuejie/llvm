//===-- RustGC.cpp - Rust frametable GC strategy --------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file implements lowering for the llvm.gc* intrinsics and noteroot
// attributes compatible with Rust, which uses a liveness-accurate static stack
// map.
//
// The frametable emitter is in RustGCPrinter.cpp.
//
//===----------------------------------------------------------------------===//

#include "llvm/CodeGen/GCs.h"
#include "llvm/CodeGen/GCStrategy.h"

using namespace llvm;

namespace {

class RustGC : public GCStrategy {
public:
  RustGC();
};

GCRegistry::Add<RustGC>
X("rust", "Rust-compatible GC");

} // end unnamed namespace

void llvm::linkRustGC() { }

RustGC::RustGC() {
  NeededSafePoints = 1 << GC::PostCall;
  UsesMetadata = true;
}


