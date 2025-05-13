CC= g++
PROGNAME= cypher
PROD_FLAGS= -O2 -DNDEBUG
DEBUG_FLAGS= -ggdb
COMPILER_FLAGS= -pedantic-errors -std=c++17 -Wall -Wextra -Weffc++ -Wconversion -Wsign-conversion
CLASSNAMES= main
run_args= shit lord hear my word

.PHONY: dev prod run make_bin clean run to_prod to_dev deb_flgs

#-----------------------------MAIN---------------------------->

dev: to_dev $(CLASSNAMES)
	$(CC) $(BUILD_FLAGS) -o bin/$(PROGNAME) bin/*.o

prod: to_prod $(CLASSNAMES)
	$(CC) $(BUILD_FLAGS) -o bin/$(PROGNAME) bin/*.o

run: dev
	./bin/$(PROGNAME)

run_prod: prod
	./bin/$(PROGNAME)

#-----------------------------CLASSES---------------------------->

main : make_bin src/main.cpp
	$(CC) $(COMPILER_FLAGS) $(BUILD_FLAGS) -c src/main.cpp -o bin/main.o

#-----------------------------ARBITRARY---------------------------->

make_bin:
	mkdir -p bin

to_prod:
	$(eval BUILD_FLAGS= $(PROD_FLAGS))

to_dev:
	$(eval BUILD_FLAGS= $(DEBUG_FLAGS))

clean:
	rm -rf bin/
	echo 'cleaned'

