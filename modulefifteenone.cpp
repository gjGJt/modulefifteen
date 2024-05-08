  #include <iostream>

// Function to double the value pointed to by the pointer
void doubleValue(int *ptr) {
    *ptr *= 2;
}

int main() {
    // Declare an integer variable and initialize it
    int num = 13;

    // Print the initial value of num
    std::cout << "Initial value of num: " << num << std::endl;

    // Call the function passing the address of num
    doubleValue(&num);

    // Print the new value of num
    std::cout << "New value of num after doubling: " << num << std::endl;

    return 0;
}
 
