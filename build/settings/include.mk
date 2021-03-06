# common Makefile to include - entrypoint

ifndef BASE_DIR
$(error variable BASE_DIR (where src exists) is not set)
endif

include $(BASE_DIR)/build/settings/functions.mk
include $(BASE_DIR)/build/settings/variables.mk

$(call require_v, NAME, target name)
$(call require_v, TARGET_MODE, debug or release)
$(call require_v, TARGET_TYPE, a or so)

# common variables
CC = gcc
SRC_DIR := $(BASE_DIR)/src
CFLAGS := -Wall -Wextra -Werror -std=c99 -pedantic -I$(SRC_DIR)/includes
LDFLAGS :=
SRCS := $(shell sh $(BASE_DIR)/build/scripts/get-srcs.sh $(SRC_DIR))
OBJS := $(SRCS:%.c=%.o)

# util variables
Q = $(if $(filter 1,$(V) $(VERBOSE)),,@)

# mode specific additional flags
include $(BASE_DIR)/build/settings/mode.mk

# rule for target
include $(BASE_DIR)/build/settings/target.mk

# common .PHONY rules
all: $(TARGET)
clean:
	$(Q)$(shell sh $(BASE_DIR)/build/scripts/clean.sh)
fclean: clean
	$(Q)rm -rf $(TARGET)
re: fclean all
.PHONY: all clean fclean re

# common rules
%.o: $(SRC_DIR)/%.c
	$(Q)mkdir -p $(@D)
	$(Q)$(CC) $(CFLAGS) -c $< -o $@ -MD

# auto updated dependencies
-include $(OBJS:%.o=%.d)
