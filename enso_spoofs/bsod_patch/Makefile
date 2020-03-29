CC=arm-vita-eabi-gcc
FW=360
CFLAGS=-Os -fno-builtin-printf -fPIC -fno-builtin-memset -Wall -Wextra -Wno-unused-variable -DFW_$(FW)
OBJCOPY=arm-vita-eabi-objcopy
LDFLAGS=-nodefaultlibs -nostdlib

all: bsod_patch_$(FW).e2xp
	rm *.o && rm bsod_patch_$(FW)
	
bsod_patch_$(FW).e2xp: bsod_patch_$(FW)
	$(OBJCOPY) -O binary $^ $@
	
bsod_patch_$(FW): bsod_patch.o
	$(CC) -o $@ $^ $(LDFLAGS)
