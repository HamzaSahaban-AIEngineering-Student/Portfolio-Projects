/*
RAM Memory — simplified explanation:

    1) Code / Instructions:
       This area contains the program instructions,
       such as main() and other functions.

    2) Static / Global:
       Global and static variables are stored here.
       They remain available for the entire program execution.

    3) Stack:
       Local variables inside functions are stored here.
       They are automatically removed when the function ends.

       Example:
       int num;       // A local variable stored on the Stack
       float* ptr;    // The pointer variable itself is stored on the Stack

    4) Heap:
       Dynamic memory allocated using new is stored here.
       It remains allocated until we manually free it using delete.

       Example:
       ptr = new float[num];
       // ptr itself is on the Stack,
       // but the array created by new is on the Heap.

       At the end, we must release the allocated memory:
       delete[] ptr;
*/