#include <iostream>
#include <typeinfo>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <vector>

using namespace std;

int main()
{

  // ? More About Types

  // * 1. Type Error - the type of the thing you tried to use is incorrect

  // Static typing - Type checks occur at compile time
  // Dynamic typing - Type checks will occur at runtime
  // Strong typing - You cannot get around the type system
  // Weak typing - You can get around the type system
  // It is important to note that "strong" and "weak" don't have an agreed upon definition
  // C++ is a strongly typed language

  // ? Type Casting

  // * 1. Implicit Conversion

  // short a = 2000;
  // cout << a << endl;
  // cout << typeid(a).name() << endl;

  // int b;
  // b = a;
  // cout << b << endl;
  // cout << typeid(b).name() << endl;

  // * 2. Explicit Conversion (C Notation)

  // short a = 2000;
  // int b;
  // int c;
  // b = (int)a; // c-like cast notation
  // c = int(a); // functional notation

  // cout << a << endl;
  // cout << typeid(a).name() << endl;
  // cout << b << endl;
  // cout << typeid(b).name() << endl;
  // cout << c << endl;
  // cout << typeid(c).name() << endl;

  // * 3. Explicit Conversion (C++ Static Cast)

  // short a = 2000;
  // int b;
  // b = static_cast<int>(a); // c-like cast notation

  // cout << a << endl;
  // cout << typeid(a).name() << endl;
  // cout << b << endl;
  // cout << typeid(b).name() << endl;

  // ? Some Useful Libraries

  // https://en.cppreference.com/w/cpp/header

  // * 1. iostream - input and output

  // Printing messages and taking user input

  // int my_int;

  // cout << "Enter an integer!\t";
  // cin >> my_int;
  // cout << my_int << endl;
  // cerr << "Oh no! There was an error!" << endl;

  // Fixing the width of the output

  // double a = 10;
  // double b = 5.6;
  // double c = 11.12353;

  // cout.precision(2);
  // cout.width(12);
  // cout.fill('*');
  // cout << a << endl;
  // cout.width(12);
  // cout << b << endl;
  // cout.width(12);
  // cout << c << endl;

  // cout.setf(ios_base::fixed);
  // cout.precision(2);
  // cout.width(12);
  // cout.fill('*');
  // cout << left;
  // cout << a << endl;
  // cout.width(12);
  // cout << b << endl;
  // cout.width(12);
  // cout << c << endl;

  // * 2. cmath - math

  // double my_double = 5.123125342435;

  // cout << pow(2, 5) << endl;

  // cout << sqrt(my_double) << endl;
  // cout << abs(my_double) << endl;
  // cout << exp(my_double) << endl;
  // cout << log(my_double) << endl;
  // cout << log10(my_double) << endl;

  // cout << ceil(my_double) << endl;
  // cout << floor(my_double) << endl;
  // cout << round(my_double) << endl;

  // const double pi = atan2(0, -1);

  // cout << sin(pi) << endl;
  // cout << cos(pi) << endl;
  // cout << tan(pi) << endl;

  // cout << asin(1) << endl;
  // cout << acos(1) << endl;
  // cout << atan(1) << endl;

  // * 3. cstdlib - random numbers, conversions, character manipulation

  // There are conversion functions for string to number types here
  // However, we won't get to them until we study arrays and pointers

  // int rand_num = rand();
  // cout << rand_num << endl;

  // We need to seed with srand(some_number)

  // srand(static_cast<unsigned>(time(nullptr)));
  // int another_rand_num = rand();
  // cout << another_rand_num << endl;

  // We can generate random numbers between bounds using the modulus function

  // srand(static_cast<unsigned>(time(nullptr)));
  // int random_number = rand() % 10;
  // cout << random_number << endl;

  // We can generate random booleans in a 50-50 ratio

  // srand(static_cast<unsigned>(time(nullptr)));
  // cout << static_cast<bool>(rand() % 2) << endl;

  // We can generate random booleans in a 75-25 ratio (0 returns false and !0 returns true)

  // srand(static_cast<unsigned>(time(nullptr)));
  // cout << static_cast<bool>(rand() % 4) << endl;

  // We can generate random booleans in a 25-75 ratio using not

  // srand(static_cast<unsigned>(time(nullptr)));
  // cout << !static_cast<bool>(rand() % 4) << endl;

  // We can generate random characters

  // srand(static_cast<unsigned>(time(nullptr)));
  // cout << static_cast<char>(rand() % 100) << endl;

  // We can generate random floating point numbers

  // srand(static_cast<unsigned>(time(nullptr)));
  // int max = 100;
  // cout << rand() % max / (max - 1.) << endl;

  // We can manipulate characters. The following URL might be useful: https://www.charset.org/utf-8

  // char lower_a = 'a';
  // cout << toupper(lower_a) << endl; // Wait... what is this????
  // cout << static_cast<char>(toupper(lower_a)) << endl;

  // char upper_b = 'B';
  // cout << tolower(upper_b) << endl; // Wait... what is this????
  // cout << static_cast<char>(tolower(upper_b)) << endl;

  // char letter = 'C';
  // cout << islower(letter) << endl;
  // cout << isupper(letter) << endl;
  // cout << isdigit(letter) << endl;
  // cout << isalpha(letter) << endl;

  // * 4. ctime - Clocks and time

  // short sec_per_min = 60;
  // short min_per_hour = 60;
  // short sec_per_hour = sec_per_min * min_per_hour;
  // short hrs_per_day = 24;
  // long sec_per_day = static_cast<long>(sec_per_hour) * hrs_per_day;
  // long sec_today = time(nullptr) % sec_per_day;

  // cout << sec_today << endl;

  // short hour = sec_today / sec_per_hour;
  // short min = sec_today % sec_per_hour / sec_per_min;
  // short sec = sec_today % sec_per_hour % sec_per_min;

  // cout << hour << endl;
  // cout << min << endl;
  // cout << sec << endl;

  // cout << "The time is now " << hour << ':';
  // cout.width(2);
  // cout.fill('0');
  // cout << min << ':';
  // cout.width(2);
  // cout << sec << ".\n";

  // * 5. cassert - Assertions

  // assert(0 + 1 == 1);
  // assert(1 + 3 == 2);
  // assert("yes" == "no");

  // * 6. vector - Vectors

  // vector<int> numbers;

  // cout << numbers.size() << endl;
  // cout << numbers.empty() << endl;

  // numbers.push_back(5);
  // numbers.push_back(2);
  // numbers.push_back(7);

  // cout << numbers.size() << endl;
  // cout << numbers.max_size() << endl;
  // cout << numbers.capacity() << endl;

  // cout << numbers.front() << endl;
  // cout << numbers.back() << endl;

  // cout << numbers.at(0) << endl;
  // cout << numbers.at(1) << endl;
  // cout << numbers.at(2) << endl;

  return 0;
}

// Activity:

// I will assign each person a header in the C++ standard libraries

// cctype
// cfloat
// ciso646
// climits
// clocale
// csignal
// cstdbool
// cstdint
// cstdio
// cuchar
// array
// list
// map
// set
// stack
// unordered_map
// unordered_set
// vector
