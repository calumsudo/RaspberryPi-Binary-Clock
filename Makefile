INCLUDE := -I ~/include
LDFLAGS := -L ~/lib -lsense -lm

all: clock
clock: main.o display.o
	cc -o clock main.o display.o $(LDFLAGS)

main.o: main.c display.h
	cc -c main.c -I ~/include
display.o: display.c display.h
	cc -c display.c -I ~/include

clean:
	rm main.o display.o clock

run:
	./clock.sh | ./clock
