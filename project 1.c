#include "libraryMheader.h"
int main(){

    int A;
    printf("Enter a number to calculate the sum of its digits: ");
    scanf("%d", &A);
    printf("The sum of digits of %d is %d.\n", A, SumOfDigits(A));

    int B;
    printf("Enter a number to reverse its digits: ");
    scanf("%d", &B);
    printf("The reverse of %d is %d.\n", B, reverseNumber(B));

    int C;
    printf("Enter a number to check if it's a palindrome: \n");
    scanf("%d", &C);
    if (isPalindrome(C)) {
        printf("%d is a palindrome.\n", C);
    } else {
        printf("%d is not a palindrome.\n", C);
    }

    int D;
    printf("Enter a number to check if it's prime: \n");
    scanf("%d", &D);
    if (isPrime(D)) {
        printf("%d is a prime number.\n", D);
    } else {
        printf("%d is not a prime number.\n", D);
    }

    int num1, num2;
    printf("Enter two numbers to find their GCD: \n");
    scanf("%d %d", &num1, &num2);
    printf("The GCD of %d and %d is %d.\n", num1, num2, GCD(num1, num2));

    int num3, num4;
    printf("Please enter two numbers to find their LCM: \n");
    scanf("%d %d", &num3, &num4);
    printf("The LCM of %d and %d is %d.\n", num3, num4, LCM(num3, num4));

    int factNum;
    printf("Please enter the number to calculate its factorial: \n");
    scanf("%d", &factNum);
    printf("The factorial of %d is %d.\n", factNum, Factorial(factNum));

    int EvenOrOddNum;
    printf("Enter the number to check if it's even: \n");
    scanf("%d", &EvenOrOddNum);
    if (isEven(EvenOrOddNum)) {
        printf("%d is even.\n", EvenOrOddNum);
    } else {
        printf("%d is odd.\n", EvenOrOddNum);
    }

    int primeFactorsNum;
    printf("Please enter the number you want to find its prime factors: \n");
    scanf("%d", &primeFactorsNum);
    primeFactors(primeFactorsNum);

    int ArmstrongNum;
    printf("Please enter the number you want to check if it's Armstrong: \n");
    scanf("%d", &ArmstrongNum);
    if (isArmstrong(ArmstrongNum)) {
        printf("%d is an Armstrong number.\n", ArmstrongNum);
    } else {
        printf("%d is not an Armstrong number.\n", ArmstrongNum);
    }

    int NthFibonacci;
    printf("Please enter the number of the Nth term of the Fibonacci sequence: \n");
    scanf("%d", &NthFibonacci);
    fibonacciSeries(NthFibonacci);

    int SumDivisorsNum;
    printf("Please enter the number to calculate its sum of divisors: \n");
    scanf("%d", &SumDivisorsNum);
    printf("The sum of divisors of the number %d is %d.\n", SumDivisorsNum, SumDivisors(SumDivisorsNum));

    int PerfectNum;
    printf("Enter the number to check if it's perfect: \n");
    scanf("%d", &PerfectNum);
    if (isPerfect(PerfectNum)) {
        printf("%d is perfect.\n", PerfectNum);
    } else {
        printf("%d is not perfect.\n", PerfectNum);
    }

    int magicNum;
    printf("Enter a number to check if it's a magic number: \n");
    scanf("%d", &magicNum);
    if (isMagic(magicNum)) {
        printf("%d is a magic number.\n", magicNum);
    } else {
        printf("%d is not a magic number.\n", magicNum);
    }

    int automorphic;
    printf("Enter a number to check if it's an Automorphic number: \n");
    scanf("%d", &automorphic);
    if (isAutomorphic(automorphic)) {
        printf("%d is an Automorphic number.\n", automorphic);
    } else {
        printf("%d is not an Automorphic number.\n", automorphic);
    }

    // Advanced operations of numbers:
    int DicToBi;
    printf("Please enter the number you want to convert to Binary: \n");
    scanf("%d", &DicToBi);
    toBinary(DicToBi);

    int NarNum;
    printf("Enter a number to check if it's Narcissistic: \n");
    scanf("%d", &NarNum);
    if (isNarcissistic(NarNum)) {
        printf("%d is a Narcissistic number.\n", NarNum);
    } else {
        printf("%d is not a Narcissistic number.\n", NarNum);
    }

    int ApproxSquareN;
    double tolerance;
    printf("Enter a positive number to calculate the square root: \n");
    scanf("%d", &ApproxSquareN);
    printf("Enter the tolerance (example: 0.0001): \n");
    scanf("%lf", &tolerance);
    printf("The square root of %d is approximately %.5f\n", ApproxSquareN, sqrtApprox(ApproxSquareN, tolerance));

    int base, exp;
    printf("Enter the base: \n");
    scanf("%d", &base);
    printf("Enter the exponent: \n");
    scanf("%d", &exp);
    double result = power(base, exp);
    if (result != -1) {
        printf("%d^%d = %f\n", base, exp, result);
    }

    int happyNum;
    printf("Enter a number to check if it's a happy number: \n");
    scanf("%d", &happyNum);
    if (isHappy(happyNum)) {
        printf("%d is a Happy number.\n", happyNum);
    } else {
        printf("%d is not a Happy number.\n", happyNum);
    }

    int abundantNum;
    printf("Enter a number to check if it's an abundant number: \n");
    scanf("%d", &abundantNum);
    if (isAbundant(abundantNum)) {
        printf("%d is an abundant number.\n", abundantNum);
    } else {
        printf("%d is not an abundant number.\n", abundantNum);
    }

    int deficientNum;
    printf("Enter a number to check if it's a deficient number: \n");
    scanf("%d", &deficientNum);
    if (isDeficient(deficientNum)) {
        printf("%d is a deficient number.\n", deficientNum);
    } else {
        printf("%d is not a deficient number.\n", deficientNum);
    }

    int num, n;

    printf("Enter n for Sum of Even Fibonacci Numbers: ");
    scanf("%d", &n);
    printf("Sum of even Fibonacci numbers: %d\n", sumEvenFibonacci(n));

    printf("\nEnter a number for Harshad Number Check: ");
    scanf("%d", &num);
    if (isHarshad(num)) {
        printf("%d is a Harshad number.\n", num);
    } else {
        printf("%d is not a Harshad number.\n", num);
    }

    printf("\nEnter n for Catalan Number Calculation: ");
    scanf("%d", &n);
    printf("Catalan number for term %d: %lu\n", n, catalanNumber(n));

    printf("\nEnter n for Pascal Triangle: ");
    scanf("%d", &n);
    printf("Pascal Triangle:\n");
    pascalTriangle(n);

    printf("\nEnter n for Bell Number Calculation: ");
    scanf("%d", &n);
    printf("Bell number for term %d: %lu\n", n, bellNumber(n));

    printf("\nEnter a number for Kaprekar Number Check: ");
    scanf("%d", &num);
    if (isKaprekar(num)) {
        printf("%d is a Kaprekar number.\n", num);
    } else {
        printf("%d is not a Kaprekar number.\n", num);
    }

    printf("\nEnter a number for Smith Number Check: ");
    scanf("%d", &num);
    if (isSmith(num)) {
        printf("%d is a Smith number.\n", num);
    } else {
        printf("%d is not a Smith number.\n", num);
    }

    printf("\nEnter n for Sum of Prime Numbers: ");
    scanf("%d", &n);
    printf("Sum of primes less than or equal to %d: %d\n", n, sumOfPrimes(n));


    //OPERATIONS ON ARRAYS
    //BASIC OPERATIONS ON ARRAYS

   int initializedArr[100], userArr[100], size1, size2, value;

    // Input the size of the array for initialization
    printf("Enter the size of the array to initialize: ");
    scanf("%d", &size1);

    // Input the value to initialize the array with
    printf("Enter the value to initialize the array with: ");
    scanf("%d", &value);

    // Initialize the array with the specified value
    initializeArray(initializedArr, size1, value);

    // Print the initialized array
    printf("Array after initialization:\n");
    printArray(initializedArr, size1);

    // Input the size of the second (user-defined) array
    printf("Enter the size of the user-defined array: ");
    scanf("%d", &size2);

    // Input values for the second array (user input)
    printf("Enter the values for the user-defined array:\n");
    for (int i = 0; i < size2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &userArr[i]);
    }

    // Print the user-defined array
    printf("User-defined array:\n");
    printArray(userArr, size2);

    // Find maximum value in the user-defined array
    int max = findMax(userArr, size2);
    printf("Maximum value in the user-defined array: %d\n", max);

    // Find minimum value in the user-defined array
    int min = findMin(userArr, size2);
    printf("Minimum value in the user-defined array: %d\n", min);

    // Calculate the sum of the user-defined array
    int sum = sumArray(userArr, size2);
    printf("Sum of user-defined array elements: %d\n", sum);

    // Calculate the average of the user-defined array
    double avg = averageArray(userArr, size2);
    printf("Average of user-defined array elements: %.2f\n", avg);

    // Check if the user-defined array is sorted
    if (isSorted(userArr, size2)) {
        printf("The user-defined array is sorted in ascending order.\n");
    } else {
        printf("The user-defined array is not sorted in ascending order.\n");
    }

    //INTERMEDIATE OPERATIONS ON ARRAYS

    int array[100], s, rotations, target, evenCount, oddCount;

    // Input the size of the array
    do{
    printf("please enter the size of your array\n");
    scanf("%d",&s);
    }while(s<=0 || s>100);


    // Input the elements of the array
    printf("Enter %d elements for the array:\n", s);
    for (int i = 0; i < s; i++) {
        scanf("%d", &array[i]);
    }

    // Reverse array
    int originalArray[100];
    for (int i = 0; i < s; i++) {
    originalArray[i] = array[i];  // Make a copy of the array
    }
    reverseArray(array, s);  // This modifies 'array', not 'originalArray'

    // Count even and odd numbers
    countEvenOdd(array, s, &evenCount, &oddCount);
    printf("Even numbers: %d, Odd numbers: %d\n", evenCount, oddCount);

    // Find second largest element
    int secondLargestElement = secondLargest(array, s);
    if (secondLargestElement != -1) {
        printf("Second largest element: %d\n", secondLargestElement);
    } else {
        printf("Not enough elements for second largest.\n");
    }

    // Print frequency of elements
    elementFrequency(array, s);

    // Remove duplicates and return new size
   int newSize = removeDuplicates(array, s);
    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", originalArray[i]);
    }
    printf("\n");


    // Binary search
    printf("Enter target for binary search: ");
    scanf("%d", &target);
    int binaryIndex = binarySearch(originalArray, newSize, target);
    if (binaryIndex != -1) {
        printf("Target found at index %d using binary search.\n", binaryIndex);
    } else {
        printf("Target not found in the array.\n");
    }

    // Linear search
    printf("Enter target for linear search: ");
    scanf("%d", &target);
    int linearIndex = linearSearch(originalArray, newSize, target);
    if (linearIndex != -1) {
        printf("Target found at index %d using linear search.\n", linearIndex);
    } else {
        printf("Target not found in the array.\n");
    }

    // Left shift the array
    printf("Enter number of rotations for left shift: ");
    scanf("%d", &rotations);
    leftShift(originalArray, newSize, rotations);
    printf("Array after left shift: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Right shift the array
    printf("Enter number of rotations for right shift: ");
    scanf("%d", &rotations);
    rightShift(originalArray, newSize, rotations);
    printf("Array after right shift: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    //SORTING ALGORITHMS

    //Bubble sort
    int size;

    do{
    printf("please enter the size of your array\n");
    scanf("%d",&size);
    }while(size<=0 || size>100);

    printf("please enter the elements of your array\n");
    for(int i=0; i<size; i++){
    scanf("%d",&array[i]);
    }
    printArray(array, size);
    bubbleSort(array, size);
    printArray(array, size);

    //Selection sort
     do{
    printf("please enter the size of your array\n");
    scanf("%d",&size);
    }while(size<=0 || size>100);

    printf("please enter the elements of your array\n");
    for(int i=0; i<size; i++){
    scanf("%d",&array[i]);
    }
    printf("Original array:\n");
    printArray(array, n);

    selectionSort(array, n);

    printf("Sorted array:\n");
    printArray(array, n);

    //Insertion sort
    do{
    printf("please enter the size of your array\n");
    scanf("%d",&size);
    }while(size<=0 || size>100);


    printf("please enter the elements of your array\n");
    for(int i=0; i<size; i++){
    scanf("%d",&array[i]);
    }

    printf("Original array:\n");
    printArray(array, n);

    insertionSort(array, n);

    printf("Sorted array:\n");
    printArray(array, n);





    return 0;
}
