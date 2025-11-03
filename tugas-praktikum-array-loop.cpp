#include <iostream>

using namespace std;

int main()
{
    // mencari nilai minimum dan maksimum dari sebuah array
    int numbers[5];
    int length_numbers = size(numbers);
    int minimum, maximum;

    for (int i = 0; i < length_numbers; i++)
    {
        cout << "Input Nilai index-" << i << " : ";
        cin >> numbers[i];
    }

    minimum = numbers[0];
    maximum = numbers[0];

    for (int i = 0; i < length_numbers; i++)
    {
        if (numbers[i] > maximum) maximum = numbers[i];
        if (numbers[i] < minimum) minimum = numbers[i]; 
    }

    cout << "minimum numbers: " << minimum << endl;
    cout << "maximum numbers: " << maximum << endl;
    
    return 0;
}