#include <iostream>
using namespace std;
int main() {
      //	Task No 01
//    double num1, num2;
//    char op;
//    cout << "Enter first number: ";
//    cin >> num1;
//    cout << "Enter second number: ";
//    cin >> num2;
//    cout << "Enter operator (+, -, *, /): ";
//    cin >> op;
//    switch (op) {
//        case '+':
//            cout << "Result = " << num1 + num2;
//            break;
//
//        case '-':
//            cout << "Result = " << num1 - num2;
//            break;
//
//        case '*':
//            cout << "Result = " << num1 * num2;
//            break;
//
//        case '/':
//            if (num2 != 0)
//                cout << "Result = " << num1 / num2;
//            else
//                cout << "Error: Division by zero!";
//            break;
//
//        default:
//            cout << "Error: Invalid operator!";
//    }
      //	Task No 02
//    int day;
//    cout << "Enter a number (1-7): ";
//    cin >> day;
//    switch (day) {
//        case 1:
//            cout << "Monday";
//            break;
//        case 2:
//            cout << "Tuesday";
//            break;
//        case 3:
//            cout << "Wednesday";
//            break;
//        case 4:
//            cout << "Thursday";
//            break;
//        case 5:
//            cout << "Friday";
//            break;
//        case 6:
//            cout << "Saturday";
//            break;
//        case 7:
//            cout << "Sunday";
//            break;
//        default:
//            cout << "Error: Invalid input! Enter a number between 1 and 7.";
//    }
  //	Task No 03
//    int choice;
//    float area, radius, length, width, base, height;
//    cout << "Select a shape to calculate area:\n";
//    cout << "1. Circle\n";
//    cout << "2. Rectangle\n";
//    cout << "3. Triangle\n";
//    cout << "Enter your choice (1-3): ";
//    cin >> choice;
//    switch (choice) {
//        case 1:
//            cout << "Enter radius of circle: ";
//            cin >> radius;
//            area = 3.14 * radius * radius;
//            cout << "Area of Circle = " << area;
//            break;
//
//        case 2:
//            cout << "Enter length of rectangle: ";
//            cin >> length;
//            cout << "Enter width of rectangle: ";
//            cin >> width;
//            area = length * width;
//            cout << "Area of Rectangle = " << area;
//            break;
//
//        case 3:
//            cout << "Enter base of triangle: ";
//            cin >> base;
//            cout << "Enter height of triangle: ";
//            cin >> height;
//            area = 0.5 * base * height;
//            cout << "Area of Triangle = " << area;
//            break;
//
//        default:
//            cout << "Error: Invalid choice!";
//    }
            //	Task No 04
//  int choice;
//    float usd, convertedAmount;
//    cout << "Currency Converter (USD)\n";
//    cout << "1. USD to PKR\n";
//    cout << "2. USD to INR\n";
//    cout << "3. USD to Euros\n";
//    cout << "Enter your choice (1-3): ";
//    cin >> choice;
//
//    cout << "Enter amount in USD: ";
//    cin >> usd;
//
//    switch (choice) {
//        case 1:
//            convertedAmount = usd * 278.5;   // USD to PKR
//            cout << "Amount in PKR = " << convertedAmount;
//            break;
//
//        case 2:
//            convertedAmount = usd * 83.0;    // USD to INR
//            cout << "Amount in INR = " << convertedAmount;
//            break;
//
//        case 3:
//            convertedAmount = usd * 0.92;    // USD to Euros
//            cout << "Amount in Euros = " << convertedAmount;
//            break;
//
//        default:
//            cout << "Error: Invalid choice!";
//    }
      //	Task No 05
   int category, item, quantity;
    float price = 0, total, discount = 0, bill;

    cout << "Select Category:\n";
    cout << "1. Electronics\n2. Clothing\n3. Groceries\n";
    cin >> category;

    switch (category) {
        case 1:
            cout << "1. Laptop (1000)\n2. Smartphone (700)\n3. Headphones (150)\n";
            cin >> item;
            if (item == 1) price = 1000;
            else if (item == 2) price = 700;
            else if (item == 3) price = 150;
            else { cout << "Invalid item"; return 0; }
            break;

        case 2:
            cout << "1. Jacket (120)\n2. T-shirt (40)\n3. Jeans (60)\n";
            cin >> item;
            if (item == 1) price = 120;
            else if (item == 2) price = 40;
            else if (item == 3) price = 60;
            else { cout << "Invalid item"; return 0; }
            break;

        case 3:
            cout << "1. Milk (2)\n2. Bread (3)\n3. Eggs (5)\n";
            cin >> item;
            if (item == 1) price = 2;
            else if (item == 2) price = 3;
            else if (item == 3) price = 5;
            else { cout << "Invalid item"; return 0; }
            break;

        default:
            cout << "Invalid category";
            return 0;
    }

    cout << "Enter quantity: ";
    cin >> quantity;

    total = price * quantity;

    if (total >= 100 && total <= 500)
        discount = total * 0.10;
    else if (total > 500)
        discount = total * 0.20;

    bill = total - discount;

    cout << "\nTotal Price: $" << total;
    cout << "\nDiscount: $" << discount;
    cout << "\nFinal Bill: $" << bill;

    return 0;
}


	  
	  
	
	



