CC=arm-vita-eabi-gcc
FW=365
CFLAGS=-Os -fno-builtin-printf -fPIC -fno-builtin-memset -Wall -Wextra -Wno-unused-variable -DFW_$(FW)
OBJCOPY=arm-vita-eabi-objcopy
LDFLAGS=-nodefaultlibs -nostdlib

all: ensooriginal_$(FW).e2xp
	
ensooriginal_$(FW).e2xp: ensooriginal_$(FW)
	$(OBJCOPY) -O binary $^ $@
	
ensooriginal_$(FW): ensooriginal.o
	$(CC) -o $@ $^ $(LDFLAGS) -T ensooriginal.x

