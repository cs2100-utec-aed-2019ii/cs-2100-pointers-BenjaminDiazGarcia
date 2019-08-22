#include <iostream>

using namespace std;

void swap (int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

int suma (int *x, int *y){
	return *x + *y;
}

int main(){
	//1: 1 2 3 4 5 6 7 8 9 10
	//2: 7 5 10
	//3: T L T
	//4: opcion 4 *p = 45
	//5: Da error, no puedes asignar un double* a char
	//6:  
	int a = 20, b = 40;
	int *ptr1 = &a;
	int *ptr2 = &b;
	swap(ptr1, ptr2);
	cout << *ptr1 << " " << *ptr2 << endl;
 	//7: 2 8
	//8: 0 8
	//9: 8 15
	//10: 8
	//11: 
	int x = 12;
	int *ptr = nullptr;
	ptr = &a;
	cout << a << " " << &a << " " << ptr << endl;
	//12: 13 13 13
	//13: 5 10 7
	//14: 4 1
	//15: Funcion arriba
	//16: 19
	//17: 5
	//18: 18
	//19: Le añade a un string \0 al final, si le das un string vacio te da error
	//20: Quita todas las comas  
	return 0;
}













