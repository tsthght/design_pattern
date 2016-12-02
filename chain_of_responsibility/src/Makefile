CC = g++
OBJ = driver.o
DST = driver
HEAD = chain_of_responsibility.hpp
SRC = driver.cpp

$(DST):$(OBJ)
	@$(CC) $(OBJ) -o $(DST)
$(OBJ):$(HEAD) $(SRC)
	@$(CC) $(SRC) -c
clean:
	@rm $(DST) $(OBJ)
run:
	@./$(DST)
