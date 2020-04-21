build: ex1open.c t.h
	gcc -c ex1open.c t.c # -c pomija linkowanie
	gcc -o ex1open ex1open.c t.o # -o nazwa pliku wyjściowego

run: build
	./ex1open

clean: 
	rm *.o

.PHONY: clean #cel pozorny
