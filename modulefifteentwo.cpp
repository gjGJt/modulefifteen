 #include <iostream>

int main() {
    // Declare and initialize two integer variables
    int num1 = 5;
    int num2 = 10;

    // Declare two pointer variables pointing to integers and assign their addresses
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    // Declare a pointer to pointer and assign the address of ptr1 to it
    int **ptr_to_ptr = &ptr1;

    // Print the values pointed to by ptr1 and ptr_to_ptr
    std::cout << "Value pointed to by ptr1: " << *ptr1 << std::endl;
    std::cout << "Value pointed to by ptr_to_ptr: " << **ptr_to_ptr << std::endl;

    // Change the value of ptr_to_ptr to point to ptr2
    ptr_to_ptr = &ptr2;

    // Print the values pointed to by ptr_to_ptr and *ptr_to_ptr
    std::cout << "Value pointed to by ptr_to_ptr: " << **ptr_to_ptr << std::endl;
    std::cout << "Value pointed to by *ptr_to_ptr: " << *(*ptr_to_ptr) << std::endl;

    return 0;
}


