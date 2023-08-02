// swapper.cpp
// D. Singletary
// 8/2/23
// swap various data types using template functions

#include <iostream>
#include <string>

using namespace std;

template<typename T>
void do_swap(T& value1, T& value2);

template<typename T>
void print(string label, const T& value1, const T& value2);

int main()
{
	cout << "Swapper" << endl;
	cout << endl;

    cout << "STRING TEST" << endl;
    string names[] = { "John", "Bob" };
    print("Before: ", names[0], names[1]);
	do_swap(names[0], names[1]);
	print("After:  ", names[0], names[1]);
	cout << endl;

    cout << "DOUBLE TEST" << endl;
    double numbers[] = { 3.14, 2.71 };
    print("Before: ", numbers[0], numbers[1]);
	do_swap(numbers[0], numbers[1]);
	print("After:  ", numbers[0], numbers[1]);
	cout << endl;

    cout << "INT TEST" << endl;
    int ages[] = { 15, 21 };
	print("Before: ", ages[0], ages[1]);
	do_swap(ages[0], ages[1]);
	print("After:  ", ages[0], ages[1]);
    cout << endl;

	return 0;
}

//swap items regardless of type
template<typename T>
void do_swap(T& value1, T& value2)
{
	// enter your code here
}//end swap

//print the two values passed in
// implement your print template here
{
    cout << label << '\t' << value1 << '\t' << value2 << endl;
}//end print

