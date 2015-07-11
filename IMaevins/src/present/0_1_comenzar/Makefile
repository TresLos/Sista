all: llibreries compilar

llibreries:
	clear
	@echo "inici"
	@echo "Llibreries"
	@echo ""
	@echo "Interfaz"
	cd Interfaz; make

compilar:
	@echo ""
	@echo "Compilar final"
	@echo ""
	gcc Interfaz/interfaz.o main.c -l curses
