/**
 * This is free and unencumbered software released into the public domain.
 * Anyone is free to copy, modify, publish, use, compile, sell, or distribute this software, either in source code form or as a compiled binary, for any purpose, commercial or non-commercial, and by any means.
 */
#include <stddef.h>
#include <sys/mman.h>
#include <sys/syscall.h>
#include <unistd.h>

int mprotect(void *addr, size_t len, int prot) {
    if (prot == PROT_EXEC) {
        prot |= PROT_READ;
    }
    return syscall(__NR_mprotect, addr, len, prot);
}
