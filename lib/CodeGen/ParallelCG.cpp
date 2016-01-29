//===-- ParallelCG.cpp ----------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file defines functions that can be used for parallel code generation.
//
//===----------------------------------------------------------------------===//

#include "llvm/CodeGen/ParallelCG.h"
#include "llvm/Bitcode/ReaderWriter.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/IR/Module.h"
#include "llvm/Support/ErrorOr.h"
#include "llvm/Support/MemoryBuffer.h"
#include "llvm/Support/TargetRegistry.h"
#include "llvm/Support/thread.h"
#include "llvm/Target/TargetMachine.h"
#include "llvm/Transforms/Utils/SplitModule.h"

using namespace llvm;

std::unique_ptr<Module>
llvm::splitCodeGen(std::unique_ptr<Module> M,
                   ArrayRef<llvm::raw_pwrite_stream *> OSs, StringRef CPU,
                   StringRef Features, const TargetOptions &Options,
                   Reloc::Model RM, CodeModel::Model CM, CodeGenOpt::Level OL,
                   TargetMachine::CodeGenFileType FileType) {
  return M;
}
