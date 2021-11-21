// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
// cout<<"Hello Yogesh ,Welcome in C++ p[rogramming...";
// return 0;
// }

//                                                       Data Types in C++
//                                                     =====================

// int main()
// {
// int i = 5;
// cout<<"Integer is \" " << i << " \" and size of integer is \" " << sizeof(i) << " \"." << endl;

// float f = 10.55;
// cout<<"Float is \" " << f << " \" and size of float is \" " << sizeof(f) << " \"." << endl;

// char c = 'A';
// cout<<"Character is \" " << c << " \" and size of character is \" " << sizeof(c) << " \"." << endl;

// bool b=true;
// cout<<"Boolean is \" " << b << " \" and size of boolean is \" " << sizeof(b) << " \"." << endl;

// short int si;
// cout<<"Short Integer is \" " << si << " \" and size of Short Integer is \" " << sizeof(si) << " \"." << endl;

// long int li;
// cout<<"Long Integer is \" " << li << " \" and size of Long Integer is \" " << sizeof(li) << " \"." << endl;

// string str="This is a pen.";
// cout<<"String is \" " << str << " \" and size of String is \" " << sizeof(str) << " \"." << endl;

//                                                   Operator in C++
//                                                  =================

// 1. Arithmatic Operator:-

//    Operator	Name	        Description	                           Example

//    +	   Addition	          Adds together two values	               x + y
//    -	   Subtraction	      Subtracts one value from another         x - y
//    *    Multiplication	  Multiplies two values	                   x * y
//    /	   Division	          Divides one value by another	           x / y
//    %	   Modulus	          Returns the division remainder	       x % y
//    ++   Increment	      Increases the value of a variable by 1	++x
//    --   Decrement	      Decreases the value of a variable by 1	--x

// 2. Assignment Operator:-

//     Operator	    Example	     Same As
//        =	        x = 5	     x = 5
//        +=	    x += 3	     x = x + 3
//        -=	    x -= 3	     x = x - 3
//        *=	    x *= 3	     x = x * 3
//        /=	    x /= 3	     x = x / 3
//        %=	    x %= 3	     x = x % 3
//        &=	    x &= 3	     x = x & 3
//        |=	    x |= 3	     x = x | 3
//        ^=	    x ^= 3	     x = x ^ 3
//        >>=	    x >>= 3	     x = x >> 3
//        <<=	    x <<= 3	     x = x << 3

// 3. Assignment Operator:-

// Operator	    Name	                     Example

//  ==	            Equal to	                 x == y
//  !=	            Not equal	                 x != y
//  >	            Greater than	             x > y
//  <	            Less than	                 x < y
//  >=	            Greater than or equal to	 x >= y
//  <=	            Less than or equal to	     x <= y

// 4. Logical Operator:-

// Operator	        Name	               Description	                                          Example

//    &&            Logical and	     Returns true if both statements are true	                x < 5 &&  x < 10
//    ||            Logical or	         Returns true if one of the statements is true	            x < 5 || x < 4
//    !             Logical not	     Reverse the result, returns false if the result is true	!(x < 5 && x < 10)

//                                                        String in C++
//                                                       ===============

// String Concatenation:-

// string str1="This is a pen.";
// string str2="Pen is beautifull.";
// cout << str1+" "+str2;
// cout << str1.append(" "+str2);

// Length of a string:-

// string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// cout << "The length of the str string is: " << str.length()<<endl;
// cout << "The length of the str string is: " << str.size()<<endl;

// Access Strings:-

// string str="Those are Soldiers.";
// str[2]='e';
// cout << str;

// Input a String from keyboard:-

// string str;
// cout << "Enter a String   :   ";
// cin >> str;
// getline(cin,str);
// cout << "String is  :  " << str;

//                                                  Omitting Namespace
//                                                 ====================

// #include <iostream>
// #include <string>

// int main() {
//   std::string str = "This is Omitting Namespace in C++ Programing Language.";
//   std::cout << str;
//   return 0;
// }

// Math functions:-

// cout << max(10,20)<<endl;
// cout << min(10,20)<<endl;

// for this include cmath library:-

// cout << sqrt(16)<<endl;
// cout << round(10.5599)<<endl;
// cout << log(2)<<endl;
// cout << exp(10)<<endl;
// cout << abs(-106)<<endl;
// cout << pow(10,5)<<endl;

//                                                      Conditionals in C++
//                                                     =====================

// If statement:-

// if (20 > 18)
// {
//     cout << "20 is greater than 18 ." << endl;
// }

// Else statement:-

// int time = 20;
// if (time < 18)
// {
//     cout << "Good day.";
// }
// else
// {
//     cout << "Good evening.";
// }

// Else-if Statement:-

// int time = 22;
// if (time < 10)
// {
//     cout << "Good morning.";
// }
// else if (time < 20)
// {
//     cout << "Good day.";
// }
// else
// {
//     cout << "Good evening.";
// }

// Short hand of if-else statement:-

// int time=18;
// string result = (time<12)? "Good Morning" : "Good Day";
// cout << result;

// Switch Case:-

// int day = 0;
// switch (day)
// {
// case 1:
//     cout << "Monday";
//     break;
// case 2:
//     cout << "Tuesday";
//     break;
// case 3:
//     cout << "Wednesday";
//     break;
// case 4:
//     cout << "Thursday";
//     break;
// case 5:
//     cout << "Friday";
//     break;
// case 6:
//     cout << "Saturday";
//     break;
// case 7:
//     cout << "Sunday";
//     break;
// default:
//     cout << "Invalid Number.";
// }

//                                                     Loops in C++
//                                                    ==============

// While Loop:-

// int i = 0;
// while (i < 5)
// {
//     cout << i + 1 << endl;
//     i++;
// }

// Do-while Loop:-

// int i = 0;
// do
// {
//     cout << i + 1 << endl;
//     i++;
// } while (i < 5);

// For Loop:-

// for (int i = 0; i < 5; i++)
// {
//     cout << i + 1 << endl;
// }

// Break Statement:-

// for (int i = 0; i < 10; i++)
// {
//     if (i == 4)
//     {
//         break;
//     }
//     cout << i+1 << "\n";
// }

// Continue Statement:-

// for (int i = 0; i < 10; i++)
// {
//     if (i <= 4)
//     {
//         continue;
//     }
//     cout << i+1 << "\n";
// }

// Q. Tell the out put of given program

// for (int i = 0; i < 10; i++)
// {
//     if (i <= 5)
//     {
//         continue;
//     }
//     else
//     {
//         break;
//     }
// }

//                                                     Array in C++
//                                                    ==============

// Deaclaration of an array:-
// int ar[5];

// Initialiozation of an array
// string ar[4] = {"Volvo", "BMW", "Ford", "Mazda"};

// Access on an element of an array:-
// cout << ar[0] << endl;

// Change an array
// ar[0] = "Opel";
// cout << ar[0] << endl;// << endl;

// Display an array:-
// for (int i = 0; i < 4; i++)
// {
// cout << ar[i] << endl;
// }

//                                                     Reference in C++
//                                                    ==================

// string str = "Welcome";
// string &strR = str;

// cout << "\nString is : " +str << endl;
// cout << "Reference is : " +strR << endl;

// strR="Thanks for visiting.";

// cout << "\nString is : " +str << endl;
// cout << "Reference is : " +strR << endl << "\n";

//                                                        Pointer in C++
//                                                       ================

// string str = "This is a String";
// string *p = &str;

// cout << "String is : " << str << endl;
// cout << "Pointer is : " << *p << endl; // *p == str
// cout << "Address is : " << p << endl;

// *p = "This is a Pointer.";

// cout << "String is : " << str << endl;
// cout << "Pointer is : " << *p << endl; // *p == str
// cout << "Address is : " << p << endl;

// return 0;
// }

//                                                     Function in C++
//                                                    =================

// Declaration of a function:-
// void myfun();

// int main()
// {
// myfun();

//     return 0;
// }

// Definition of a function:-

//  void myfun()
// {
//      cout << "I'm a Function" << endl;
// }

// void myfun(string name){
//     cout <<name;
// }

// void myfun(string name = "Yogesh")
// {
//     cout << name << endl;
// }

// void myfun(string name = "Yogesh",int age=19)
// {
//     cout << name << " " << age << endl;
// }

// int myfun()
// {
//     return 100;
// }

// void swapNums(int &x, int &y)
// {
//     int z = x;
//     x = y;
//     y = z;
// }
// int plusFunc(int x, int y)
// {
//     return x + y;
// }

// double plusFunc(double x, double y)
// {
//     return x + y;
// }

// int main()
// {
// myfun();
// myfun("Jayesh",17);
// myfun("Ayush",15);

// int get = myfun();
// cout << get << endl;

// int firstNum = 10;
// int secondNum = 20;
// cout << "Before swap: \n";
// cout << firstNum << "   " << secondNum << "\n";
// swapNums(firstNum, secondNum);

// cout << "After swap: \n";
// cout << firstNum << "   " << secondNum << "\n";

// Function Overloading:-
// ----------------------

// int myNum1 = plusFunc(8, 5);
// double myNum2 = plusFunc(4.3, 6.26);
// cout << "Int: " << myNum1 << "\n";
// cout << "Double: " << myNum2;

// return 0;
// }

//                                                       OOPs in c++
//                                                     ==============

// OOP stands for Object-Oriented Programming.

// Procedural programming is about writing procedures or functions that perform operations on the data,
//  while object-oriented programming is about creating objects that contain both data and functions.

// Object-oriented programming has several advantages over procedural programming:

// OOP is faster and easier to execute
// OOP provides a clear structure for the programs
// OOP helps to keep the C++ code DRY "Don't Repeat Yourself", and makes the code easier to maintain, modify and debug
// OOP makes it possible to create full reusable applications with less code and shorter development time

// Tip: The "Don't Repeat Yourself" (DRY) principle is about reducing the repetition of code. You should extract
// out the codes that are common for the application, and place them at a single place and reuse them instead of
// repeating it.

//  Class and Object :-

// A class is a template for objects, and an object is an instance of a class.
// When the individual objects are created, they inherit all the variables and functions from the class.
// Attributes and methods are basically variables and functions that belongs to the class.
// These are often referred to as "class members".
// A class is a user-defined data type that we can use in our program, and it works as an object constructor, or
// a "blueprint" for creating objects.
// To create a class, use the class keyword.

// class MyClass {       // The class
//   public:             // Access specifier
//     int myNum;        // Attribute (int variable)
//     string myString;  // Attribute (string variable)
// };

// int main(){
// MyClass obj;   //create an object of MyClass

// Access Attribute and set the values:-

// obj.myNum=25;
// obj.myString="Welcome";

// Print Attributte values:-

// cout<<obj.myNum<<endl;
// cout<<obj.myString<<endl;

//     return 0;
// }

// class Car {
//   public:
//     string brand;
//     string model;
//     int year;
// };

// int main() {
// Create an object of Car
//   Car carObj1;
//   carObj1.brand = "BMW";
//   carObj1.model = "X5";
//   carObj1.year = 1999;

// Create another object of Car
//   Car carObj2;
//   carObj2.brand = "Ford";
//   carObj2.model = "Mustang";
//   carObj2.year = 1969;

// Print attribute values
//   cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
//   cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
//   return 0;
// }

//                                                      C++ Class Methods
//                                                    =====================

// Methods are functions that belongs to the class.

// There are two ways to define functions that belongs to a class:

// Inside class definition
// Outside class definition
// In the following example, we define a function inside the class, and we name it "myMethod".

// Note: You access methods just like you access attributes; by creating an object of the class and using
// the dot syntax (.):

//  class MyClass {        // The class
//   public:              // Access specifier
//     void myMethod() {  // Method/function defined inside the class
//       cout << "Hello World!";
//     }
// };

// int main() {
//   MyClass myObj;     // Create an object of MyClass
//   myObj.myMethod();  // Call the method
//   return 0;
// }

// To define a function outside the class definition, you have to declare it inside the class and then define
// it outside of the class. This is done by specifiying the name of the class, followed the
// scope resolution :: operator.

// class MyClass {        // The class
//   public:              // Access specifier
//     void myMethod();   // Method/function declaration
// };

// Method/function definition outside the class
// void MyClass::myMethod() {
//   cout << "Hello World!";
// }

// int main() {
//   MyClass myObj;     // Create an object of MyClass
//   myObj.myMethod();  // Call the method
//   return 0;
// }

// Parameterized Method in class:-

// #include <iostream>
// using namespace std;

// class Car
// {
// public:
//   int speed(int maxSpeed);
// };

// int Car::speed(int maxSpeed)
// {
//   return maxSpeed;
// }

// int main()
// {
//   Car myObj;                // Create an object of Car
//   cout << myObj.speed(200); // Call the method with an argument
//   return 0;
// }

//                                                         Constructors in C++
//                                                        =======================

// A constructor in C++ is a special method that is automatically called when an object of a class is created.
// To create a constructor,use the same name as the class, followed by parentheses().

// class MyClass
// {       // The class
// public: // Access specifier
//   MyClass()
//   { // Constructor
//     cout << "I'm Constructor.";
//   }
// };

// int main()
// {
//   MyClass myObj; // Create an object of MyClass (this will call the constructor)
//   return 0;
// }

// Constructor Parameter :-

// Constructors can also take parameters (just like regular functions), which can be useful for setting initial
// values for attributes.

// class Car
// {               // The class
// public:         // Access specifier
//   string brand; // Attribute
//   string model; // Attribute
//   int year;     // Attribute
//   Car(string x, string y, int z)
//   { // Constructor with parameters
//     brand = x;
//     model = y;
//     year = z;
//   }
// };

// int main()
// {
//   // Create Car objects and call the constructor with different values
//   Car carObj1("BMW", "X5", 1999);
//   Car carObj2("Ford", "Mustang", 1969);

//   // Print values
//   cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
//   cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
//   return 0;
// }

// Just like functions, constructors can also be defined outside the class.First, declare the constructor inside the class,
// and then define it outside of the class by specifying the name of the class, followed by the scope resolution :: operator.

// class Student
// {
// public:
//   int rollno;
//   string name;
//   Student(int x, string a);
// };
// Student::Student(int x, string a)
// {
//   rollno = x;
//   name = a;
// };
// int main()
// {
//   Student obj1(101, "Amit");
//   Student obj2(102, "Sumit");

//   cout << obj1.rollno << " " << obj1.name << "\n";
//   cout << obj2.rollno << " " << obj2.name << "\n";
//   return 0;
// }

//                                                         Access Specifiers in C++
//                                                       ============================

// You are quite familiar with the public keyword that appears in all of our class examples.
// In C++, there are three access specifiers :

// public -
//          members are accessible from outside the class.
// private -
//          members cannot be accessed(or viewed) from outside the class.
// protected -
//            members cannot be accessed from outside the class.

// In the following example, we demonstrate the differences between public and private members:

// class MyClass
// {
// public:  // Public access specifier
//   int x; // Public attribute
// private: // Private access specifier
//   int y; // Private attribute
// };

// int main()
// {
//   MyClass myObj;
//   myObj.x = 25; // Allowed (public)
//  // myObj.y = 50; // Not allowed (private)
//   return 0;
// }
// If you try to access a private member, an error occurs:-
// error:y is private

// It is possible to access private members of a class using a public method inside the same class.
// It is considered good practice to declare your class attributes as private(as often as you can).
// This will reduce the possibility of yourself(or others) to mess up the code.This is also the main
// ingredient of the Encapsulation concept

// Note : By default, all members of a class are private if you don't specify an access specifier.

//                                                  Encapsulation in C++
//                                                 =======================

// The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.
// To achieve this, you must declare class variables / attributes as private(cannot be accessed from
// outside the class).
// If you want others to read or modify the value of a private member, you can provide public 'get()' and 'set()' methods.
// It is considered good practice to declare your class attributes as private(as often as you can).
// Encapsulation ensures better control of your data, because you(or others) can change one part of the code
// without affecting other parts.
// Increased security of data.

// Access Private Members:-

// To access a private attribute,use public "get" and "set" methods:

// #include <iostream>
// using namespace std;

// class Employee
// {
// private:
//   // Private attribute
//   int salary;

// public:
//   // Setter
//   void setSalary(int s)
//   {
//     salary = s;
//   }
//   // Getter
//   int getSalary()
//   {
//     return salary;
//   }
// };

// int main()
// {
//   Employee myObj;
//   myObj.setSalary(50000);
//   cout << myObj.getSalary();
//   return 0;
// }

//                                                  Inheritance in C++
//                                                 ====================

// In C++, it is possible to inherit attributes and methods from one class to another.We group the "inheritance concept" into two categories :

// derived class(child) - the class that inherits from another class
// base class(parent) - the class being inherited from
// To inherit from a class, use the : symbol.
// It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.

// Base Class:-
// class Animal
// {
// public:
// 	void sound()
// 	{
// 		cout << "I'm Sound like :- \n";
// 	}
// };
// // Derived Class:-
// class Snake : public Animal
// {
// public:
// 	string voice = "phhhisssss phhhiiiissssss";
// };

// int main()
// {
// 	Snake obj;
// 	obj.sound();
// 	cout << obj.voice << endl;
// }

//                                                    Multilevel Inheritance
//                                                   ========================

// A class can also be derived from one class, which is already derived from another class.

// // Base class (parent)
// class MyClass
// {
// public:
// 	void myFun()
// 	{
// 		cout << "I'm Parent Class.\n";
// 	}
// };

// // Derived class (child)
// class MyChild : public MyClass
// {
// public:
// 	void myChildFun()
// 	{
// 		cout << "I'm Child Method of MyChild Class.\n";
// 	}
// };

// // Derived class (grandchild)
// class MyGrandChild : public MyChild
// {
// public:
// 	void myGrandChildFun()
// 	{
// 		cout << "I'm GrandChild Method of MyGrandChild Class.\n";
// 	}
// };

// int main()
// {
// 	MyGrandChild myObj;
// 	myObj.myFun();
// 	myObj.myChildFun();
// 	myObj.myGrandChildFun();
// 	return 0;
// }

//                                                  Multiple Inheritance
//                                                 ======================

// A class can also be derived from more than one base class, using a comma - separated list.

// // Base class
// class MyClass
// {
// public:
// 	void myFunction()
// 	{
// 		cout << "I'm parent class.\n";
// 	}
// };

// // Another base class
// class MyOtherClass
// {
// public:
// 	void myOtherFunction()
// 	{
// 		cout << "I'm another parent class.\n";
// 	}
// };

// // Derived class
// class MyChildClass : public MyClass, public MyOtherClass
// {
// public:
// 	void myChildFunction()
// 	{
// 		cout << "I'm child function of a class which is inherited multiple class.";
// 	}
// };

// int main()
// {
// 	MyChildClass myObj;
// 	myObj.myFunction();
// 	myObj.myOtherFunction();
// 	myObj.myChildFunction();
// 	return 0;
// }

//                                                Inhertance Protected Access Specifier
//                                               =======================================

// Protected is similar to private, but it can also be accessed in the inherited class.

// // Base class
// class Employee
// {
// protected: // Protected access specifier
// 	int salary;
// };

// // Derived class
// class Programmer : public Employee
// {
// public:
// 	int bonus;
// 	// Setter
// 	void setSalary(int s)
// 	{
// 		salary = s;
// 	}
// 	// getter
// 	int getSalary()
// 	{
// 		return salary;
// 	}
// };

// int main()
// {
// 	Programmer myObj;
// 	// myObj.salary = 50000; // not accessed because it is prtected.then we use setter-getter method.
// 	myObj.setSalary(50000);
// 	myObj.bonus = 15000;
// 	cout << "Salary: " << myObj.getSalary() << "\n";
// 	cout << "Bonus: " << myObj.bonus << "\n";
// 	return 0;
// }

//                                                 Polymorphism in C++
//                                                =====================

// Polymorphism means "many forms", and it occurs when we have many classes that are related
// to each other by inheritance.
// Inheritance lets us inherit attributes and methods from another class.
// Polymorphism uses those methods to perform different tasks.
// This allows us to perform a single action in different ways.

// // Base class
// class Animal
// {
// public:
// 	void animalSound()
// 	{
// 		cout << "The animal makes a sound.\n";
// 	}
// };

// // Derived class
// class Snake : public Animal
// {
// public:
// 	void animalSound()
// 	{
// 		cout << "The Snake says: phhhisssss phhhiiiissssss... \n";
// 	}
// };

// // Derived class
// class Dog : public Animal
// {
// public:
// 	void animalSound()
// 	{
// 		cout << "The dog says: bow wow... \n";
// 	}
// };
// int main()
// {
// 	Animal myAnimal;
// 	Snake mySnake;
// 	Dog myDog;

// 	myAnimal.animalSound();
// 	mySnake.animalSound();
// 	myDog.animalSound();
// 	return 0;
// }

//                                                      Files in C++
//                                                     ==============

// The fstream library allows us to work with files.
// To use the fstream library, include both the standard <iostream> and the <fstream> header file

// Class                                           Description
// ofstream                              Creates and writes to files
// ifstream                               Reads from files
// fstream                                A combination of ofstream and ifstream : creates,reads,and writes to files

//                                            Create and Write To a File
//                                          ------------------------------

// To create a file, use either the ofstream or fstream class, and specify the name of the file.
// To write to the file, use the insertion operator (<<).

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
// 	// Create and open a text file ,if this file already exist then is override that file.
// 	ofstream MyFile("filename.txt");

// 	// Write to the file
// 	MyFile << "Some Content on File.";

// 	// Close the file
// 	MyFile.close();

// 	return 0;
// }

//                                                    Read a File
//                                                  ---------------

// To read from a file, use either the ifstream or fstream class, and the name of the file.

// Note that we also use a while loop together with the getline() function (which belongs to the ifstream class)
// to read the file line by line, and to print the content of the file.

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
// 	string myText;

// 	// Read from the text file
// 	ifstream MyReadFile("filename.txt");

// 	while (getline(MyReadFile, myText))
// 	{
// 		cout << myText << endl;
// 	}

// 	MyReadFile.close();

// 	return 0;
// }

//                                             Exception in C++
//                                            ==================

// When executing C++ code, different errors can occur: coding errors made by the programmer,
// errors due to wrong input, or other unforeseeable things.

// When an error occurs, C++ will normally stop and generate an error message.
// The technical term for this is: C++ will throw an exception (throw an error).

// Exception handling in C++ consist of three keywords: try, throw and catch:-

// The try statement allows you to define a block of code to be tested for errors while it is being executed.
// The throw keyword throws an exception when a problem is detected, which lets us create a custom error.
// The catch statement allows you to define a block of code to be executed, if an error occurs in the try block.

// Note:-
//       The try and catch keywords come in pairs.

// int main()
// {
// 	int age = 15;
// 	try
// 	{
// 		if (age >= 18)
// 		{
// 			cout << "Access granted - you are old enough.";
// 		}
// 		else
// 		{
// 			throw(age);
// 		}
// 	}
// 	catch (int myNum)
// 	{
// 		cout << "Access denied - You must be at least 18 years old.\n";
// 		cout << "Age is: " << myNum;
// 	}
// 	return 0;
// }

// Handle Any Type of Exceptions(...) :-
// If you do not know the throw type used in the try block, you can use the "three dots" syntax(...)
// inside the catch block, which will handle any type of exception.

// int main()
// {
// 	int age = 15;
// 	try
// 	{
// 		if (age >= 18)
// 		{
// 			cout << "Access granted - you are old enough.";
// 		}
// 		else
// 		{
// 			throw "Not enough age.";
// 		}
// 	}
// 	catch (...)
// 	{
// 		cout << "Access denied - You must be at least 18 years old.\n";
// 	}
// 	return 0;
// }
