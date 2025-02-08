#include "libraryMheader.h"

 //basic operations on numbers
int SumOfDigits(int num){
int digit, sum=0;
if(num<0){
    num=-num;
}
while(num!=0){
    digit=num % 10;
    num=num / 10;
    sum=sum + digit;
}
return sum;
}

int reverseNumber(int num){
int digit, reversed=0;
while(num!=0){
    digit=num % 10;
    reversed=reversed * 10 + digit;
    num =num / 10;
}
return reversed;
}

bool isPalindrome(int num){
return reverseNumber(num)==num;
}

bool isPrime(int num){
int i;
if (num <= 1) {
        return false; // 0 and 1 are not prime
    }
 for(i=2; i<= sqrt(num); i++){
    if(num % i == 0){
    return false;
    }
  }
 return true;
}

int GCD(int a, int b){
int r;
do{
r=a%b;
a=b;
b=r;
}
while(r != 0);
return a ;
}

int LCM(int a, int b){
    return ((a*b)/GCD(a, b));
}

int Factorial(int num) {
    int i, factorial = 1;
    for (i = 1; i <= num; i++) {
        factorial *= i;
    }
    return factorial;
}

bool isEven(int num){
    return num % 2 == 0;
}

 //Intermediate operations on numbers:

void primeFactors(int num){
int i;
printf("the factors of the number %d are\n",num);
for(i=1; i<=num; i++){
    if(num%i==0 && isPrime(i)){
      printf("%d\n",i);
    }
}
printf("\n");
}

bool isArmstrong(int num){
int sum=0,i,digit,originalNum=num,digitsNum=0,temp=num;
while(temp!=0){
    temp=temp/10;
    digitsNum++;
}
temp=num;
while(temp!=0){
   digit=temp%10;
   int power=1;
   for(i=0; i<digitsNum; i++){
    power=power*digit;
   }
   sum=sum+power;
   temp=temp/10;
}
return sum==originalNum;
}

void fibonacciSeries(int n){
int i,next,first,second;
if (n <= 0) {
    printf("Please enter a positive integer.\n");
    return;
    }
    printf("Fibonacci sequence up to %d terms:\n", n);
    if (n == 1) {
        printf("0\n");
        return;
    }
    printf("0 1");
    for (i = 2; i < n; i++) {
        next = first + second;
        printf(" %d", next);
        first = second;
        second = next;
    }
    printf("\n");
}

int SumDivisors(int num){
int i,sum=0;
for(i=1; i<=num; i++){
    if(num%i==0){
        sum = sum + i;
}
}
return sum;
}

bool isPerfect(int num){
    return SumDivisors(num) - num == num;
}

bool isMagic(int num){
while (num >= 10) {
        num = SumOfDigits(num);
    }
    return num == 1;
}

bool isAutomorphic(int num){
int digits = 1, temp = num;
while (temp /= 10)
    digits *= 10;
return (num * num) % digits == num;
}

//Advanced operations on numbers:

void toBinary(int num){
int remainder,temp=1,result=num,biNum=0;
while(result!=0){
    remainder=result%2;
    biNum=biNum+ remainder*temp;
    temp=temp*10;
    result=result/2;
}
printf("%d in binary is %d\n",num,biNum);
}

bool isNarcissistic(int num){
return isArmstrong(num);
}

double sqrtApprox(int num, double error){
double nextX, difference,x=num/2;
  if (num < 0) {
        printf("Error: Negative input\n");
        return -1;
    }else{
do{
nextX=(x+num/x)/2;
difference=fabs(nextX-x);
x=nextX;
}while(difference>error);
return nextX;
}
}

double power(int base, int exp){
int i;
float result=1;
if(exp<0 && base==0){
    printf("error! can't divide by 0\n");
    return -1;
}
if(exp<0){
for(i=0; i< -exp; i++){
    result/=base;
}

}else{
for(i=0; i<exp; i++){
    result*=base;
}
}
return result;
}

bool isHappy(int num){
int digit,sum;
do{
sum=0;
while(num!=0){
    digit=num%10;
    sum+=digit*digit;
    num/=10;
}
num=sum;
}while(sum>=10);
return num==1;
}

bool isAbundant(int num){
return SumDivisors(num)-num>num;
}

bool isDeficient(int num){
return !isAbundant(num);
}

int sumEvenFibonacci(int n) {
    int a = 0, b = 1, sum = 0;
    for (int i = 1; i < n; i++) {
        int next = a + b;
        a = b;
        b = next;
        if (next % 2 == 0) {
            sum += next;
        }
    }
    return sum;
}

bool isHarshad(int num){
return num%SumOfDigits(num)==0;
}

unsigned long catalanNumber(int n){
unsigned long Cnumber;
Cnumber = Factorial(2*n)/(Factorial(n+1)*Factorial(n));
return Cnumber;
}

void pascalTriangle(int n){
int line, val;
 for (line = 0; line < n; line++) {
        val = 1;
        for (int i = 0; i <= line; i++) {
            printf("%d ", val);
            val = val * (line - i) / (i + 1);
        }
        printf("\n");
    }
}

unsigned long bellNumber(int n) {
    if (n == 0) {
        return 1; // Base case: B(0) = 1
    }

    unsigned long prev = 1; // Start with B(0) = 1
    for (int i = 1; i <= n; i++) {
        unsigned long curr = 0; // Reset the current Bell number
        unsigned long temp = prev;
          for (int j = 0; j < i; j++) {
            curr += temp;
            temp = temp * (i - j - 1) / (j + 1); // Use Pascal's triangle coefficient formula
        }

        prev = curr; // Update the previous Bell number
    }
    return prev; // Final Bell number is stored in prev
}


bool isKaprekar(int num){
    if (num == 1) return true;

    int sq=num*num;
    int numDigits=0,temp=num,i;

    while (temp > 0) {
        numDigits++;
        temp /= 10;
    }

    int divisor = 1;
    for (i=0; i<numDigits; i++) {
        divisor*=10;
    }

    int left = sq / divisor;
    int right = sq % divisor;

    return (left + right == num);
}

bool isSmith(int num){
if (num < 2 || isPrime(num)) return false;  // Smith numbers are not prime
    int factorSum = 0;
    int temp = num;

    for (int i = 2; temp > 1; i++) {
        while (temp % i == 0) {
            factorSum += SumOfDigits(i);
            temp /= i;
        }
    }

    return SumOfDigits(num) == factorSum;
}

int sumOfPrimes(int n){
int primeSum=0,i;
for(i=2; i<=n; i++){
        if(isPrime(i)){
            primeSum+=i;
        }
}
return primeSum;
}

//OPERATIONS ON ARRAYS
//BASIC ARRAY FUNCTIONS

void initializeArray(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        arr[i] = value;
    }
}

void inputArray(int arr[], int size) {
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++ ){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int findMax(int arr[], int size){
int i,max=arr[0];
     for(i=1; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
     }
     return max;
}

int findMin(int arr[], int size){
int i,min=arr[0];
     for(i=1; i<size; i++){
        if(arr[i]<min){
            min=arr[i];
        }
     }
     return min;
}

int sumArray(int arr[], int size){
int sum=0,i;
      for(i=0; i<size; i++){
        sum+=arr[i];
      }
    return sum;
}

double averageArray(int arr[], int size) {
    return (double)sumArray(arr, size) / size;
}


bool isSorted(int arr[], int size) {
int i;
    for (i=1; i<size; i++) {
        if (arr[i]<arr[i-1]) {
            return false;
        }
    }
    return true;
}

//INTERMEDIATE ARRAY FUNCTIONS

void reverseArray(int arr[], int size) {
    int temp;
    int i;
    for (i=0; i<size/2; i++) {
        temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
}

void countEvenOdd(int arr[], int size, int* evenCount, int* oddCount) {
    *evenCount = 0;
    *oddCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            (*evenCount)++;
        } else {
            (*oddCount)++;
        }
    }
}

int secondLargest(int arr[], int size){
int i,secondlargest=-1,largest=findMax(arr, size);
if (size < 2) {
        return -1; // Not enough elements
    }
    for(i=0; i<size; i++){
        if(arr[i]!=largest && arr[i]>secondlargest){
            secondlargest=arr[i];
        }
    }
    return secondlargest;
}

void elementFrequency(int arr[], int size) {
    int visited[size]; // To keep track of already checked elements
    for (int i = 0; i < size; i++) {
        visited[i] = 0; // Mark all elements as unvisited initially
    }

    for (int i = 0; i < size; i++) {
        if (visited[i] == 1) {
            continue; // Skip if the element is already checked
        }

        int count = 1; // Count for the current element
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark the duplicate element as visited
            }
        }

        printf("Element %d appears %d times.\n", arr[i], count);
    }
}

int removeDuplicates(int arr[], int size) {
    int i, j, k;

    // Remove duplicate elements
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                // Shift elements to the left to overwrite the duplicate
                for (k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--;  // Decrease the size after removal

                // Adjust 'j' to check the next element after the shift
                j--;
            }
        }
    }

    return size;  // Return the new size of the array
}

int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1; // Element not found
}

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1; // Element not found
}

void leftShift(int arr[], int size, int rotations) {
    rotations %= size; // Handle rotations larger than size
    for (int i = 0; i < rotations; i++) {
        int temp = arr[0];
        for (int j = 0; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = temp;
    }
}

void rightShift(int arr[], int size, int rotations) {
    rotations %= size; // Handle rotations larger than size
    for (int i = 0; i < rotations; i++) {
        int temp = arr[size - 1];
        for (int j = size - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
}

//sorting algorithms

void swap(int *a, int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}

void bubbleSort(int arr[], int size){ //this is optimized, without optimization it will be without bool
int i,j;
bool swapped;
     for(i=0; i < size-1; i++){
            swapped=false;
       for(j=0; j < size-i-1; j++){
       if(arr[j]>arr[j+1]){
            swap(&arr[j], &arr[j+1]);
            swapped=true;
   }
  }
  if(swapped==false){
    break;
  }
 }
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
      // Assume the current position holds the minimum element
        int min_idx = i;
        // Iterate through the unsorted portion to find the actual minimum
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                // Update min_idx if a smaller element is found
                min_idx = j;
            }
        }
        // Move minimum element to its correct position using swap
        if (min_idx != i) {
            swap(&arr[i], &arr[min_idx]);
        }
    }
}


// Function to perform Insertion Sort using swap
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int current = arr[i];
        int j = i - 1;

        // Shift elements of arr[0..i-1] that are greater than current
        while (j >= 0 && arr[j] > current) {
            // Use swap instead of directly assigning
            swap(&arr[j + 1], &arr[j]);
            j = j - 1;
        }

        // Place the current element in the correct position (it will be swapped already)
        arr[j + 1] = current;
    }
}



