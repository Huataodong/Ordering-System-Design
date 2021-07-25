all: output

output: main.o person.o student.o employee.o food.o mainfood.o dessert.o drinks.o cin-redone.o showmenu.o
	g++ main.o person.o student.o employee.o food.o mainfood.o dessert.o drinks.o cin-redone.o showmenu.o -o output 

main.o: main.cpp
	g++ -c main.cpp -o main.o       
    
showmenu.o: showmenu.cpp
	g++ -c showmenu.cpp -o showmenu.o

student.o: student.cpp student.h
	g++ -c student.cpp -o student.o
    
employee.o: employee.cpp employee.h
	g++ -c employee.cpp -o employee.o

food.o: food.cpp food.h
	g++ -c food.cpp -o food.o
    
mainfood.o: mainfood.cpp mainfood.h
	g++ -c mainfood.cpp -o mainfood.o
    
dessert.o: dessert.cpp dessert.h
	g++ -c dessert.cpp -o dessert.o
    
drinks.o: drinks.cpp drinks.h
	g++ -c drinks.cpp -o drinks.o


clean:
	rm *.o output

