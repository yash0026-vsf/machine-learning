
// #include<iostream>
// using namespace std;
// void print(int *ptr){
//   cout<<*ptr<<endl;
// }
// void update(int *ptr){
//   *ptr=*ptr+1;
//   cout<<*ptr<<endl;
// }
// int suum(int *ptr,int size){
//   int sum=0;
//   for(int i=0;i<size;i++){
//     sum+=ptr[i];
//   }
//  return sum;
// }

// int main(){
  
  
//   int arr[5]={1,2,3,4,5};
//   int * ptr= arr;
//   // cout<<*ptr<<endl;
//   // cout<<ptr<<endl;
//   // cout<<arr[0]<<endl;
//   // cout<<arr<<endl;
//   // cout<<ptr + 1<<endl;
//   // cout<<*(ptr+1)<<endl;
//   print(ptr);
//   update(ptr);
//   cout<<"sum is "<<suum(ptr,5)<<endl;
//   return 0;
// }

// #include <iostream>
// using namespace std;

// void sayDigit(int n, string arr[]) {
//     // base case
//     if (n == 0) {
//         return;
//     }

//     // processing
//     int digit = n % 10;
//     n = n / 10;

//     // recursive call
//     sayDigit(n, arr);

//     cout << arr[digit]<<" ";
// }

// int main() {
//     string arr[10] = {"zero", "one", "two", "three", "four",
//                       "five", "six", "seven", "eight", "nine"};

//     int n;
//     cin >> n;

//     cout << endl;
//     sayDigit(n, arr);
//     cout << endl;

//     return 0;
// }
// #include <iostream>
// using namespace std;

// void sayDigit(int n, string arr[]) {
//     // base case
//     if (n == 0) {
//         return;
//     }

//     // processing
//     int digit = n % 10;
//     n = n / 10;

//     // recursive call
//     sayDigit(n, arr);

//     cout << arr[digit]<<" ";
// }

// int main() {
//     string arr[10] = {"zero", "one", "two", "three", "four",
//                       "five", "six", "seven", "eight", "nine"};

//     int n;
//     cin >> n;

//     cout << endl;
//     sayDigit(n, arr);
//     cout << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int getSum(int *arr, int size) {
//     // base case
//     if (size == 0) {
//         return 0;
//     }
//     if (size == 1) {
//         return arr[0];
//     }

//     int remainingPart = getSum(arr + 1, size - 1);
//     int sum = arr[0] + remainingPart;
//     return sum;
// }

// int main() {
//     int arr[5] = {2, 4, 9, 9, 9};
//     int size = 5;

//     int sum = getSum(arr, size);
//     cout << "Sum is " << sum << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void print(int arr[], int s, int e) {

//     for(int i=s; i<=e; i++) {
//         cout << arr[i] << " ";
//     } cout << endl;
// }

// bool binarySearch(int *arr, int s, int e , int k ) {

//     //base case

//     //element not found
//     if(s>e)
//         return false;

//     int mid = s + (e-s)/2;

//     //element found
//     if(arr[mid] == k)
//         return true;

//     if(arr[mid] < k) {
//         return binarySearch(arr, mid+1, e, k);
//     }
//     else{
//         return binarySearch(arr, s, mid-1, k);
//     }
// }


// int main() {

//     int arr[11] = {2,4,6,10,14,18,22,38,49,55,222};
//     int size = 11;
//     int key = 2;

//     cout << "Present or not " << binarySearch(arr, 0, size-1, key) << endl;

//     return 0;
// }