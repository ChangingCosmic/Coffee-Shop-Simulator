register: coffee_shop.o register.o
	@gcc -g -Wall coffee_shop.o register.o -o register -lm
register.o: register.c register.h
	@gcc -g -Wall -c register.c
coffee_shop.o: coffee_shop.c register.h
	@gcc -g -Wall -c coffee_shop.c
clean:
	@rm -f coffee_shop.o register.o register