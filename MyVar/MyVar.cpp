// MyVar.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <math.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include <typeinfo>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
//#include <cstdlib>
#include <ctype.h>

using namespace std;


class MyVar
{
private:
    int _digit;
    double _digitPlus;
    string _str;
public:

    MyVar() {};
    MyVar(const int& Digit) : _digit(Digit) {};
    MyVar(const double& DigitPlus) : _digitPlus(DigitPlus) {};
    MyVar(const string& Str) : _str(Str) {};

    int operator+(const int& Value)
    {
        return static_cast<int>(_digit + Value);
    }

    double operator+(const double& Value) {
        return static_cast<double>(_digitPlus + Value);
    }

    string operator+(const string& Value) {
        return static_cast<string>(_str + Value);
    }

    int operator-(const int& Value)
    {
        return static_cast<int>(_digit - Value);
    }

    double operator-(const double& Value) {
        return static_cast<double>(_digitPlus - Value);
    }

    string operator-(const string& Value) {
        string newRes = "";
        for (int i = 0; i < _str.length(); i++)
        {
            for (int j = 0; j <Value.length(); j++)
            {
                if (_str[i] != Value[j]) {
                    newRes += _str[i];
                }
                else {
                    continue;
                }
            }
            
        }
        return static_cast<string>(newRes);
    }

    int operator*(const int& Value)
    {
        return static_cast<int>(_digit * Value);
    }

    double operator*(const double& Value) {
        return static_cast<double>(_digitPlus * Value);
    }

    string operator*(const string& Value) {
        string newRes = "";
        for (int i = 0; i < _str.length(); i++)
        {
            for (int j = 0; j < Value.length(); j++)
            {
                if (_str[i] == Value[j]) {
                    newRes += _str[i];
                }
                else {
                    continue;
                }
            }

        }
        return static_cast<string>(newRes);
    }

    int operator/(const int& Value)
    {
        return static_cast<int>(_digit / Value);
    }

    double operator/(const double& Value) {
        return static_cast<double>(_digitPlus / Value);
    }

    string operator/(const string& Value) {
        string newRes = "";
        for (int i = 0; i < _str.length(); i++)
        {
            for (int j = 0; j < Value.length(); j++)
            {
                if (_str[i] != Value[j]) {
                    newRes += _str[i];
                }
                else {
                    continue;
                }
            }

        }
        return static_cast<string>(newRes);
    }

    int operator+=(const int& Value)
    {
        return static_cast<int>(_digit += Value);
    }

    double operator+=(const double& Value) {
        return static_cast<double>(_digitPlus += Value);
    }

    string operator+=(const string& Value) {
        return static_cast<string>(_str.append(Value));
    }
    
    int operator-=(const int& Value)
    {
        return static_cast<int>(_digit -= Value);
    }

    double operator-=(const double& Value) {
        return static_cast<double>(_digitPlus -= Value);
    }

    string operator-=(const string& Value) {
        int begin, end;

        for (int i = 0; i < _str.length(); i++)
        {
            if (_str[i] == Value[0]) begin = i;
            else if (_str[i] == Value[Value.length() - 1]) end = i;
            else continue;
        }
        if (begin == 0 || end == 0) return 0;
        return static_cast<string>(_str.erase(begin, end));
    }

    int operator*=(const int& Value)
    {
        return static_cast<int>(_digit *= Value);
    }

    double operator*=(const double& Value) {
        return static_cast<double>(_digitPlus *= Value);
    }

    string operator*=(const string& Value) {
        string newRes = "";
        for (int i = 0; i < _str.length(); i++)
        {
            for (int j = 0; j < Value.length(); j++)
            {
                if (_str[i] == Value[j]) {
                    newRes += _str[i];
                }
                else {
                    continue;
                }
            }

        }
        return static_cast<string>(newRes);
    }

    int operator/=(const int& Value)
    {
        return static_cast<int>(_digit /= Value);
    }

    double operator/=(const double& Value) {
        return static_cast<double>(_digitPlus /= Value);
    }

    string operator/=(const string& Value) {
        string newRes = "";
        for (int i = 0; i < _str.length(); i++)
        {
            for (int j = 0; j < Value.length(); j++)
            {
                if (_str[i] != Value[j]) {
                    newRes += _str[i];
                }
                else {
                    continue;
                }
            }

        }
        return static_cast<string>(newRes);
    }

    bool operator<(const int& Value)
    {
        return static_cast<bool>(_digit < Value ? true : false);
    }

    double operator<(const double& Value) {
        return static_cast<bool>(_digitPlus < Value ? true : false);
    }

    bool operator<(const string& Value) {
        return static_cast<bool>(_str.length() < Value.length() ? true : false);
    }

    bool operator>(const int& Value)
    {
        return static_cast<bool>(_digit > Value ? true : false);
    }

    double operator>(const double& Value) {
        return static_cast<bool>(_digitPlus > Value ? true : false);
    }

    bool operator>(const string& Value) {
        return static_cast<bool>(_str.length() > Value.length() ? true : false);
    }

    bool operator<=(const int& Value)
    {
        return static_cast<bool>(_digit <= Value ? true : false);
    }

    double operator<=(const double& Value) {
        return static_cast<bool>(_digitPlus <= Value ? true : false);
    }

    bool operator<=(const string& Value) {
        return static_cast<bool>(_str.length() <= Value.length() ? true : false);
    }

    bool operator>=(const int& Value)
    {
        return static_cast<bool>(_digit >= Value ? true : false);
    }

    double operator>=(const double& Value) {
        return static_cast<bool>(_digitPlus >= Value ? true : false);
    }

    bool operator>=(const string& Value) {
        return static_cast<bool>(_str.length() >= Value.length() ? true : false);
    }

    bool operator==(const int& Value)
    {
        return static_cast<bool>(_digit == Value ? true : false);
    }

    double operator==(const double& Value) {
        return static_cast<bool>(_digitPlus == Value ? true : false);
    }

    bool operator==(const string& Value) {
        return static_cast<bool>(_str.length() == Value.length() ? true : false);
    }

    bool operator!=(const int& Value)
    {
        return static_cast<bool>(_digit != Value ? true : false);
    }

    double operator!=(const double& Value) {
        return static_cast<bool>(_digitPlus != Value ? true : false);
    }

    bool operator!=(const string& Value) {
        return static_cast<bool>(_str.length() != Value.length() ? true : false);
    }
};
int main()
{
    setlocale(LC_ALL, "RUS");
}