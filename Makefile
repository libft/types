.PHONY: dev
dev: compile_commands.json

.PHONY: compile_commands.json
compile_commands.json:
	$(Q2)$(MAKE) -C src fclean
	-$(Q2)$(MAKE) -C src -k PROFILE=debug TARGET=development all bonus
	$(Q2)(printf "[" && find src/.cache -name "*.development.debug.o.compile_commands.part.json" | xargs cat && printf "]") > $@
