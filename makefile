SRC = unity/unity.c\
src/calculator.c\
test_calculator.c\
main.c

INC = 
-Iinc\


PROJECT_NAME = calculator.out

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
doc:
	make -C documentation

clean:
	rm -rf $(PROJECT_NAME) documentation/html
