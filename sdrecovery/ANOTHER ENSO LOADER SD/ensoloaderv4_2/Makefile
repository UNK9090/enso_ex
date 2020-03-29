CC=arm-vita-eabi-gcc
FW=360
CFLAGS=-Os -fno-builtin-printf -fPIC -fno-builtin-memset -Wall -Wextra -Wno-unused-variable -DFW_$(FW)
OBJCOPY=arm-vita-eabi-objcopy
LDFLAGS=-nodefaultlibs -nostdlib

all: enso_$(FW).e2xp
	
enso_$(FW).e2xp: enso_$(FW)
	$(OBJCOPY) -O binary $^ $@
	
enso_$(FW): enso.o
	$(CC) -o $@ $^ $(LDFLAGS) -T enso.x
