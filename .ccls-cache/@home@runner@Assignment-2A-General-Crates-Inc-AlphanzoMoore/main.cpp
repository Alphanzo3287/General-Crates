// Alphanzo Moore

//CIS-5 Online

// 8/31/2023

// Lab 2A: Full Name - <Replace this Text with the Name of the Program and short description>

#include <iostream>

int main() {
    // Declare variables
    double length, width, height;
    const double costPerCubicFoot = 0.23;
    const double pricePerCubicFoot = 0.50;

    // Get dimensions from the user
    std::cout << "Enter the length of the box (in feet): ";
    std::cin >> length;
    std::cout << "Enter the width of the box (in feet): ";
    std::cin >> width;
    std::cout << "Enter the height of the box (in feet): ";
    std::cin >> height;

    // Calculate the volume
    double volume = length * width * height;

    // Calculate the cost, customer price, and profit
    double cost = volume * costPerCubicFoot;
    double customerPrice = volume * pricePerCubicFoot;
    double profit = customerPrice - cost;

    // Display the results
    std::cout << "Volume (cubic feet): " << volume << std::endl;
    std::cout << "Cost: $" << cost << std::endl;
    std::cout << "Customer Price: $" << customerPrice << std::endl;
    std::cout << "Profit: $" << profit << std::endl;

    return 0;
}


