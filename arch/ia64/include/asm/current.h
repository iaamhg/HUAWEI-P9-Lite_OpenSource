#ifndef _ASM_IA64_CURRENT_H
#define _ASM_IA64_CURRENT_H



#include <asm/intrinsics.h>

/*
 * In kernel mode, thread pointer (r13) is used to point to the current task
 * structure.
 */
#define current	((struct task_struct *) ia64_getreg(_IA64_REG_TP))

#endif /* _ASM_IA64_CURRENT_H */
