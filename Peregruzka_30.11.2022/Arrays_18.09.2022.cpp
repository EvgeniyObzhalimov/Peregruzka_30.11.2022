#include<iostream>
#include <iomanip>
void arr(int mass[], int size) {
	std::cout.setf(std::ios::fixed);
	std::cout.setf(std::ios::left);

	for (int i = 0; i < size; i++)
	
	{
		
		/*std::cout.width(2);*/
	std::cout <<std::setw(5) <<mass[i] << " ";
		

	}
};
void arr(double mass[], int size) {
	
	std::cout.precision(3);//выводится на верх перед циклом
	std::cout.setf(std::ios::fixed);
	std::cout.setf(std::ios::left);

	for (int i = 0; i < size; i++)
	{
		/*std::cout.width(4);*/
		std::cout << std::setw(4) << mass[i] << " ";
	}
		
	
}

//шаблоны функций
template<typename Type>
Type Printsum(Type mass[], int size) {
	
	Type sum=0;

	for (int i = 0; i < size; i++)
	{
		sum += mass[i];
	}
		return sum;
		

}
template<typename Type>
Type Printmid(Type mass[], int size) {
	
	Type mid = 0;
	Type sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += mass[i];
		mid = sum/size;
	}
return mid;

}
template<typename Type>
void Sortmass(Type mass[], int size) {
	int x;
	Type tmp;
	std::cout.precision(3);
	std::cout.setf(std::ios::fixed);
	std::cout.setf(std::ios::left);
		for (int i = 0; i < size; i++) {
			x = i;
			tmp = mass[i];
		
			for (int j = i + 1; j < size; j++)
				if (mass[j] < tmp) {
					x = j;
					tmp = mass[j];
				
				}
			if (x != i) {
				mass[x] = mass[i];
				mass[i] = tmp;
				
			}
			std::cout << std::setw(5)<<mass[i]<<" ";
		}
	}


int main() {
	setlocale(LC_ALL, "Russian");
	const int size = 5;
	int array1[size]{ 222,3,4,2,5 };
	double array2[size]{ 1.2,4.55,6.4456,7.456,5.345 };
	std::cout << "массив целых чисел"<<"\n";
	arr(array1, size);
	std::cout << "\n";
	std::cout << "массив нецелых чисел" << "\n";
	std::cout << "\n";
	arr(array2, size);
	std::cout << "\n";
	std::cout<<Printsum(array1, size)<<"\n";
	std::cout << Printmid(array1, size)<<"\n";
	Sortmass(array1, size);

	return 0;


}


