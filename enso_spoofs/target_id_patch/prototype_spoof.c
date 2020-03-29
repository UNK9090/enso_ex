// Prototype Spoof For Enso_Ex_v4 //

#include <inttypes.h>

#ifdef FW_360
	#include "nsbl.h"
#else
	#include "nsbl.h"
#endif

#include "ex_defs.h"

	
void _start(PayloadArgsStruct *boot_args) {
	if (boot_args->trun != 1)
        // boot args for Prototype
	(*sysroot_ctx_ptr)->boot_args->device_type = 0x001; //IsTest
	return ;
}