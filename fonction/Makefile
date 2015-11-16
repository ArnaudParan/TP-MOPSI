.PHONY:clean,mrproper
.SUFFIXES:

CC =g++
LIBRARIES +=cppunit
LDFLAGS +=-I ./ -W -Wall $(shell pkg-config --libs $(LIBRARIES))
CFLAGS +=-I ./ -W -Wall $(shell pkg-config --cflags $(LIBRARIES))
 
EXEC =TP
TEST_EXE =Test
DEBUG =true
OPTIMIZE =false
HEADERS =$(shell (echo ./src/*.hpp))
OBJECTS =$(shell echo ./src/*.cpp | sed -r 's/\.cpp/.o/g' | sed 's/\.\/src\/main\.o//g' | sed 's/\.\/src\/test_[^\.]*\.o//g')
TEST_OBJ =$(shell echo ./src/test_*.cpp | sed -r 's/\.cpp/.o/g')


ifeq ($(DEBUG),true)
	CFLAGS += -g
	LDFLAGS += -g
endif

ifeq ($(OPTIMIZE),true)
	CFLAGS += -O3
	LDFLAGS += -O3
endif

all : $(EXEC)

$(EXEC) : $(OBJECTS) ./src/main.o
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

test : $(OBJECTS) $(TEST_OBJ)
	@echo -e '\n\033[1m--> Linking et création de \033[0m\033[2m$@\033[0m'
	$(CC) $^ $(LDFLAGS) -o $(TEST_EXE)
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
	@./$(TEST_EXE)

./src/main.o : $(HEADERS)

./src/test_main.o : $(HEADERS)

%.o : %.cpp
	@echo -e '\033[1m\n--> Compilation de \033[0m\033[2m$@\033[0m'
	$(CC) -c $< $(CFLAGS) -o $@

run : $(EXEC)
	@./$(EXEC)

debug : $(EXEC)
	@gdb ./$(EXEC)

clean :
	@echo -e '\033[1;31mNettoyage des .o\033[0m'
	rm -rf ./src/*.o

mrproper : clean
	@echo -e '\033[1;31mNettoyage de $(EXEC)\033[0m'
	rm -rf $(EXEC)
	rm -rf $(TEST_EXE)
