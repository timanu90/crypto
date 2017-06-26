# Main Makefile

OUTFILE := crypto.elf

all: $(OUTFILE)

# Compiler
CC=gcc

# C Files
CFILES= 	main.c						\
		set1/hex_to_base64/hex_base64.c						

OBJS=$(patsubst %.c,%.o,$(CFILES)) 

# ==================================================================
# Header flags
HEADERS= -Iset1/hex_to_base64

CC_FLAGS= -O2 $(HEADERS)

LD_FLAGS=

# ==================================================================
# Compile rules

$(OUTFILE): $(CFILES)
	$(CC) $(LD_FLAGS) $(CC_FLAGS) -o $@ $(CFILES)

%.o: %.c
	$(CC) $(CC_FLAGS) -o $@ $<

.PHONY: clean
clean:
	rm -f $(OBJS) $(OUTFILE) 



