GCC_FLAGS = -Wall -Werror -Wextra
CC = clang $(GCC_FLAGS)
RM = rm -rf

COLLEEN = Colleen
GRACE = Grace
SULLY = Sully

SULLYDIR = DirSully

all: $(COLLEEN) $(GRACE) $(SULLY)

$(COLLEEN):
	$(CC) -o Colleen Colleen.c
	./Colleen > tmp_Colleen ; diff tmp_Colleen Colleen.c 

$(GRACE):
	$(CC) -o Grace Grace.c
	./Grace
	diff Grace.c Grace_kid.c
$(SULLY):
	mkdir -p $(SULLYDIR)
	cd $(SULLYDIR); $(CC) -o Sully ../Sully.c
	cd $(SULLYDIR);./Sully; \
		ls -al | grep Sully | wc -l;\
		diff ../Sully.c Sully_0.c;\
		diff Sully_3.c Sully_2.c\
		|| exit 0     # clean exit for no makefile error
clean:
	@$(RM) $(SULLYDIR) tmp_Colleen Grace_kid.c

fclean: clean
	@$(RM) $(COLLEEN) $(GRACE) $(SULLY) $(SULLYDIR) tmp_Colleen Grace_kid.c

re: fclean all
