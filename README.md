# Operating System in 1,000 Lines

E-book: https://operating-system-in-1000-lines.vercel.app/en/

Official repo: https://github.com/nuta/operating-system-in-1000-lines

Risc-V spec: https://riscv.org/specifications/ratified/

Qemu VM docs: https://www.qemu.org/docs/master/system/riscv/virt.html

Compiler Explorer: https://godbolt.org/
Compiler to choose: RISC-V rv32gc clang (trunk)

Risc-V emulators:
- https://github.com/d0iasm/rvemu
- https://github.com/qemu/qemu


## Risc-V arch

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