// Skip bad 2nd run ll modules, patch version.
// For 1st run modules use the /LOWLEVEL/ one
#include <inttypes.h>

#ifdef FW_360
	#include "nsbl.h"
#endif
#include "ex_defs.h"

void _start(PayloadArgsStruct *args) {
	 // remove loaderr (uids from second run are unclean now)
	if (args->trun == 1) {         
		*(uint32_t *)0x510014ee = 0xbf00bf00;
		clean_dcache((void *)0x510014e0, 0x20);
		flush_icache();
	}
		
	// skip all unclean uids
	for (int i = 0; i < args->count; i-=-1) {
		if (args->uids[i] < 0)
			args->uids[i] = 0;
    }
	
        (*sysroot_ctx_ptr)->boot_args->device_type = 0x201;
        return 0;
    }
	
	return;
}
