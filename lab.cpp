#include <iostream>
#include "lab.hpp"

using namespace std;

int main()
{
    
    printer first("rrr", 2);
    
    cout << "__________________________" << endl;
    cout << "Загальна інформація по 1 " << endl;
    cout << "назва: " << first.get_name() << endl;
    cout << "текст: " <<  first.massege << endl;
    cout << "розмір тексту: " << first.get_size() << endl;
    cout << "к-сть копій " <<  first.copies << endl;
    cout << "швидкість " <<  first.get_speed() << endl;
    cout << "ціна " <<  first.get_price() << endl;
    cout << "номер телефону  " << first.get_number() << endl;
    cout << "__________________________" << endl;
    cout << endl;
    
    printer second("fff", 2);
    
    cout << "__________________________" << endl;
    cout << "Загальна інформація по 2 " << endl;
    cout << "назва: " << second.get_name() << endl;
    cout << "текст: " <<  second.massege << endl;
    cout << "розмір тексту: " << second.get_size() << endl;
    cout << "к-сть копій " <<  second.copies << endl;
    cout << "швидкість " <<  second.get_speed() << endl;
    cout << "ціна " <<  second.get_price() << endl;
    cout << "номер телефону  " << second.get_number() << endl;
    cout << "__________________________" << endl;
    cout << endl;
    
    printer third("sss", 2);
    
    cout << "__________________________" << endl;
    cout << "Загальна інформація по 3 " << endl;
    cout << "назва: " << third.get_name() << endl;
    cout << "текст: " <<  third.massege << endl;
    cout << "розмір тексту: " << third.get_size() << endl;
    cout << "к-сть копій " <<  third.copies << endl;
    cout << "швидкість " <<  third.get_speed() << endl;
    cout << "ціна " <<  third.get_price() << endl;
    cout << "номер телефону  " << third.get_number() << endl;
    cout << "__________________________" << endl;
    cout << endl;
    
    return 0;
}

