#ifndef _MEM_H_
#define _MEM_H_

#include "multiboot.h"
#include "stddef.h"

#define PAGE_SIZE       4096
#define PAGE_ADDR_MASK  0xFFFFF000  // Upper bits of page-aligned addresses

extern uint32_t mem_first_unused;

void init_mem(multiboot_info_t *mboot);

#endif
