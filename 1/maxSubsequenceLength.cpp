#include <iostream>

using namespace std;

/*
Дана последовательность натуральных чисел, завершающаяся числом 0. Определите, 
какое наибольшее число подряд идущих элементов этой последовательности равны друг другу. 
Если не нашлось ни одной пары, тройки и т.д. элементов, равных друг другу, то программа должна вывести число 1.

Формат входных данных: Вводится последовательность натуральных чисел, 
оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).

Формат выходных данных: Выведите ответ на задачу.

Примеры:
1 7 7 9 1 0 -> 2 
1 7 7 7 7 8 8 8 3 3 3 3 3 0 -> 5
1 1 1 1 1 2 2 2 2 3 3 3 3 0 -> 5
3 3 3 3 4 4 4 5 5 5 5 1 0 -> 4
3 3 3 0 -> 3 
1 0 -> 1 
*/

int maxSubsequenceLength() {
    int prev = 0, current = 0, maxSubsequence = 1, localMaxSubsequence = 1;
    while (cin >> current) {
        if (current == 0) break;
        if (current == prev) {
            localMaxSubsequence++;
            if (localMaxSubsequence > maxSubsequence) maxSubsequence = localMaxSubsequence;
        }
        else {
            localMaxSubsequence = 1;
        }
        prev = current;
    }
    return maxSubsequence;
}

int main(){
    cout << endl << countMaxSubsequence();

    return 0;
}