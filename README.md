# Operating System in 1,000 Lines

E-book: https://operating-system-in-1000-lines.vercel.app/en/

Official repo: https://github.com/nuta/operating-system-in-1000-lines

Compiler Explorer: https://godbolt.org/
Compiler to choose: RISC-V rv32gc clang (trunk)

Risc-V emulators:
- https://github.com/d0iasm/rvemu
- https://github.com/qemu/qemu


## Risc-V arch

Risc-V spec: https://riscv.org/specifications/ratified/

### program counter
pc = program counter

### 32 general-purpose registers
- x0=zero: always set to zero
- x1=ra: return address
- x2=sp: stack pointer
- x3-x4: global and thread pointers
- x5-x7: temporaries
- x8=fp: stack frame pointer
- x10-x17=a0-a7:
    - a0-a1: function arguments and return values
    - a2-a7: function arguments
- x18-x27=s0-s11: callee-saved registers
- x28-x31=t3-t6: temporaries

### CSR

control and status registers: used for processor control, configuration, and exception handling

### Calling convention 

https://riscv.org/wp-content/uploads/2024/12/riscv-calling.pdf

### Virtual addresses

https://riscv-sv32-virtual-address.vercel.app/

### Scause exception codes

https://docs.openhwgroup.org/projects/cva6-user-manual/06_cv64a6_mmu/riscv/priv.html#scause

## QEMU

Docs: https://www.qemu.org/docs/master/system/riscv/virt.html

Commands:
- help: ctrl-A + H
- exit: ctrl-A + X
- open debug console: ctrl-A + C
- in the debug console: 
    - "info registers"
    - "q"

## Debugging guides

Debugging virtual paging: https://operating-system-in-1000-lines.vercel.app/en/11-page-table#appendix-debugging-paging

## Virtio legacy spec

https://ozlabs.org/~rusty/virtio-spec/virtio-0.9.5.pdf