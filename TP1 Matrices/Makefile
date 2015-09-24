.PHONY:clean,mrproper
.SUFFIXES:

CC =colorgcc
LIBRARIES +=cunit
#LDFLAGS +=-I ./ -W -Wall $(shell pkg-config --libs $(LIBRARIES))
#CFLAGS +=-I ./ -W -Wall $(shell pkg-config --cflags $(LIBRARIES))
 
EXEC =Matrices
DEBUG =true
OPTIMIZE =false
HEADERS =$(shell (echo *.h*))
OBJECTS =$(shell echo *.cpp | sed -r 's/\.cpp /.o /g')


ifeq ($(DEBUG),true)
	CFLAGS += -g
	LDFLAGS += -g
endif

ifeq ($(OPTIMIZE),true)
	CFLAGS += -O3
	LDFLAGS += -O3
endif

all : $(EXEC)

$(EXEC) : $(OBJECTS)
	@echo -e '\n\033[1m--> Linking et création de \033[0m\033[2m$@\033[0m'
	$(CC) $^ $(LDFLAGS) -o $(EXEC)
	@echo -e '\033[0;32m  |'
	@echo -e '\033[0;32m  |            \033[1;36m-----------------------'
	@echo -e '\033[0;32m  |            \033[1;36m| Compilation réussie |'
	@echo -e '\033[0;32m  |            \033[1;36m-----------------------'
	@echo -e '\033[0;32m  |'
	@echo -e '\033[0;32m  |    \033[0m\033[1mDebug ........... \033[0m\033[2m$(DEBUG)'
	@echo -e '\033[0;32m  |    \033[0m\033[1mOptimize ........ \033[0m\033[2m$(OPTIMIZE)'
	@echo -e '\033[0;32m  |    \033[0m\033[1mLibraries ....... \033[0m\033[2m$(LIBRARIES)'
	@echo -e '\033[0;32m  |'                 
	@echo -e '\033[0;32m  |    \033[0m\033[1mCFLAGS .......... \033[0m\033[2m$(CFLAGS)'
	@echo -e '\033[0;32m  |    \033[0m\033[1mLDFLAGS ......... \033[0m\033[2m$(LDFLAGS)'
	@echo -e '\033[0m'

main.o : $(HEADERS)

%.o : %.cpp
	@echo -e '\033[1m\n--> Compilation de \033[0m\033[2m$@\033[0m'
	$(CC) -c $< $(CFLAGS) -o $@

run : $(EXEC)
	@./$(EXEC)

debug : $(EXEC)
	@gdb ./$(EXEC)

clean :
	@echo -e '\033[1;31mNettoyage des .o\033[0m'
	rm -rf *.o

mrproper : clean
	@echo -e '\033[1;31mNettoyage de $(EXEC)\033[0m'
	rm -rf $(EXEC)
