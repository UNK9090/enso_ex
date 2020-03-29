CC=arm-vita-eabi-gcc
FW=360
CFLAGS=-Os -fno-builtin-printf -fPIC -fno-builtin-memset -Wall -Wextra -Wno-unused-variable -DFW_$(FW)
OBJCOPY=arm-vita-eabi-objcopy
LDFLAGS=-nodefaultlibs -nostdlib


all: firstmbrloader_mod_$(FW).e2xp
	rm *.o && rm firstmbrloader_mod_$(FW)
	
firstmbrloader_mod_$(FW).e2xp: firstmbrloader_mod_$(FW)
	$(OBJCOPY) -O binary $^ $@


firstmbrloader_mod_$(FW): firstmbrloader_mod.o
	$(CC) -o $@ $^ $(LDFLAGS)
