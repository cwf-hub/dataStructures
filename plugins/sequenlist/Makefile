CROSS 	= arm-none-linux-
AR 		= ar
CC64 	= gcc
CC 		= $(CROSS)gcc


TARGET = libsequenlist.a
DEPS = $(shell find -name "*.h")
SRC = $(shell find -name "*.c")

CFLAGS = -I./include
OBJ = $(SRC:%.c=%.o)
all:$(TARGET)

%.o:%.c $(DEPS)
	$(CC64) $(CFLAGS) -c $< -o $@

$(TARGET):$(OBJ)
	$(AR) -rc $(TARGET) $^
clean:
	rm -rf $(TARGET)
	rm -rf $(OBJ)

