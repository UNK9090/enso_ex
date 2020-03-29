CC=arm-vita-eabi-gcc
FW=360
CFLAGS=-Os -fno-builtin-printf -fPIC -fno-builtin-memset -Wall -Wextra -Wno-unused-variable -DFW_$(FW)
OBJCOPY=arm-vita-eabi-objcopy
LDFLAGS=-nodefaultlibs -nostdlib


all: testkit_spoof_$(FW).e2xp retail_spoof_$(FW).e2xp devkit_spoof_$(FW).e2xp prototype_spoof_$(FW).e2xp test_$(FW).e2xp
	rm *.o && rm testkit_spoof_$(FW) rm *.o && rm retail_spoof_$(FW) rm *.o && rm devkit_spoof_$(FW) rm *.o && rm prototype_spoof_$(FW) rm *.o && rm test_$(FW)
	
testkit_spoof_$(FW).e2xp: testkit_spoof_$(FW)
	$(OBJCOPY) -O binary $^ $@
	
retail_spoof_$(FW).e2xp: retail_spoof_$(FW)
	$(OBJCOPY) -O binary $^ $@

devkit_spoof_$(FW).e2xp: devkit_spoof_$(FW)
	$(OBJCOPY) -O binary $^ $@
	
prototype_spoof_$(FW).e2xp: prototype_spoof_$(FW)
	$(OBJCOPY) -O binary $^ $@
	
test_$(FW).e2xp: test_$(FW)
	$(OBJCOPY) -O binary $^ $@
	
testkit_spoof_$(FW): testkit_spoof.o
	$(CC) -o $@ $^ $(LDFLAGS)
	
retail_spoof_$(FW): retail_spoof.o
	$(CC) -o $@ $^ $(LDFLAGS)
	
devkit_spoof_$(FW): devkit_spoof.o
	$(CC) -o $@ $^ $(LDFLAGS)
	
prototype_spoof_$(FW): prototype_spoof.o
	$(CC) -o $@ $^ $(LDFLAGS)
	
test_$(FW): test.o
	$(CC) -o $@ $^ $(LDFLAGS)
