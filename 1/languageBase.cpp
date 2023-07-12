#include <iostream>

using namespace std;

int mymax(int numbers[10]) {
    int max = -100;
    for (int i = 0; i < 10; ++i) {
        if (numbers[i] > max) max = numbers[i];
    }
    return max;
}

int main()
{
    int arr1[] = {1, 3, 7, 3, 1, 5, 4, 5, 0, 10};
    cout << "max=" << mymax(arr1);
    //cout<<"Hello World";
    
    /*int age = 21; 
    cout << "age=" << age;
    
    float dickLengthHot = 15.11;
    cout << "dickLengthHot=" << dickLengthHot << endl;
    
    double dickLengthCold = 10.234512;
    cout << "dickLengthCold=" << dickLengthCold << endl;
    
    char clothSize = 'L';
    cout << "clothSize=" << clothSize << endl;
    
    string name = "Eugen";
    cout << "name=" << name << endl;
    
    long height = 185;
    cout << "height=" << height << endl;
    
    bool isMan = true; 
    cout << "isMan=" << isMan << endl;*/
    
    // размеры типов данных
     /*cout << "short=" << sizeof(short) << endl;
     cout << "int=" << sizeof(int) << endl;
     cout << "long=" << sizeof(long) << endl;
     cout << "long long=" << sizeof(long long) << endl;
     cout << "float=" << sizeof(float) << endl;
     cout << "double=" << sizeof(double) << endl;
     cout << "bool=" << sizeof(bool) << endl;
     cout << "char=" << sizeof(char) << endl;*/
    
    // short <= int <= long <= long long
    
    // выравнивание
    // битность ОС
    
    /*unsigned int uns = 12345;
    
    const int a = 123;*/
    
    //присваивание значений
    int tmp = 0;
    
    tmp = 5;
    
    tmp = tmp + 4;
    
    tmp += 1; // tmp = tmp + 1
    tmp -= 2; // tmp = tmp - 2 
    tmp *= 4; // tmp = tmp * 4
    tmp /= 4; // tmp = tmp / 4
    
    // инкремент и декремент
    tmp++; // инкремент
    ++tmp;
    tmp--; // декремент 
    --tmp;
    
    
    // пример разницы 
    int tmp1 = 2;
    int tmp2 = 2; 
    tmp = 2;
    
    //cout << "tmp1 = " << tmp1 << endl << "tmp2 = " <<  tmp2 << endl<< "tmp = " <<  tmp<< endl<< endl;
    
    tmp1 = 2 * tmp++; // сначала операция, а оптом сложение 
    //cout << "tmp1 = " << tmp1 << endl<< "tmp = " <<  tmp<< endl<< endl;
    
    tmp = 2;
    tmp2 = 2 * ++tmp; // сначала сложение, а оптом операция 
    //cout << endl << "tmp2 = " <<  tmp2 << endl<< "tmp = " <<  tmp<< endl<< endl;
    
    // массивы 
    int array[4];
    array[0] = 0;
    array[1] = 1;
    array[3] = 4;
    // | [int] [int] [int] [int] | ????? -- колбаса памяти 
    //  ^
    /*cout << " array[0]=" <<  array[0] << endl;
    cout << " array[1]=" <<  array[1] << endl;
    
    cout << " array[11]=" <<  array[11] << endl;*/

    // адресация в памяти и указатели + ариффметика указателей 
    // | [int] [int] [int] [int] | ????? -- колбаса памяти 
    //                    ^
    
    //cout << "array[0] addr=" <<  (array+3) << endl; // адрес в памяти
    //cout << "array[0]=" <<  *(array+3) << endl; // значение по этому адресу 
    
    // size_t -- тип равный длине указателя
    //cout << "size_t=" << sizeof(size_t) << endl;
    
    
    // циклы
    const int exCount = 4;
    string eugenExNames[] = {"viola", "alina", "polina", "nikita"};
    int ages[exCount] = {13, 14, 12, 21};
    
    //cout << names[0] << ", " << names[1] << ", " << names[2] << endl; // неудобно
    
    /*for (int i = 0; i < exCount; ++i){
        cout << eugenExNames[i] << " - " << ages[i] << endl;
    }
    cout << endl;*/
    
    /*int i = 0;
    while (i < exCount){
        cout << eugenExNames[i] << " - " << ages[i] << endl;
        ++i;
    }*/
    
    // for each, но мы его будем юзать более активно потом 
    /*for(string item : {"aaa", "bbbb", "ccc"}){
        cout << item << endl;
    }*/
    
    // бесконечный цикл
    /*while (true){
        cout << "бялть" << endl;
    }*/
    
    /*for(;;){
        cout << "пиздец" << endl; 
    }*/
    
    // пример адекватного применения 
    /*while (true){
        string name;
        cout << "введите ваше имя: ";
        cin >> name;
        cout << "Привет, " << name << endl << endl;
    }*/
    
    // ветвление (условные операторы)
    int eugenAge;
    int womanAge;
    cin >> eugenAge >> womanAge;
    
    /*if (eugenAge < womanAge){
        cout << "Milf hunter!";
    }
    else {
        cout << "maybe pedofil";
    }*/
    
    if (womanAge > 30 || womanAge-eugenAge > 5){ //   || логическое ИЛИ -- истина, если истинно хотя бы одно из 2х услвоий 
        cout << "Milf hunter!";
    }
    else if((womanAge < 14) && !(eugenAge < 14)) { // && логиеческое И -- истинно, если оба истинны
        cout << "pedofil detected!"; // ! логическое отрицание (НЕ) -- меняет true на false и на одорот 
    }
    else{
        cout << "well, fuck...";
    }
    
    
    //return 0;
}
