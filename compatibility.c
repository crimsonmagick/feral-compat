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
