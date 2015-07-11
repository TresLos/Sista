all: llibreries compilar

llibreries:
	clear
	@echo "inici"
	@echo "Llibreries"
	@echo ""
	@echo "Interfaz"
	cd Interfaz; make
	@echo ""
	@echo "Modes"
	cd Modes; make

compilar:
	@echo ""
	@echo "Compilar final"
	@echo ""
	gcc Interfaz/interfaz.o main.c -l curses

clean:
	rm a.out -f
	cd Interfaz; make clean
	cd Modes; make clean
