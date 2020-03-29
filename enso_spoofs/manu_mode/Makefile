CC=arm-vita-eabi-gcc
FW=360
CFLAGS=-Os -fno-builtin-printf -fPIC -fno-builtin-memset -Wall -Wextra -Wno-unused-variable -DFW_$(FW)
OBJCOPY=arm-vita-eabi-objcopy
LDFLAGS=-nodefaultlibs -nostdlib

all: manufacturing_mode_spoof_$(FW).e2xp
	rm *.o && rm manufacturing_mode_spoof_$(FW)
	
manufacturing_mode_spoof_$(FW).e2xp: manufacturing_mode_spoof_$(FW)
	$(OBJCOPY) -O binary $^ $@
	
manufacturing_mode_spoof_$(FW): manufacturing_mode_spoof.o
	$(CC) -o $@ $^ $(LDFLAGS)
