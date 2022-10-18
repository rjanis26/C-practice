/* #include<stdio.h>
#include<string.h>

struct Information {

    char name;
    int id;
   int marks;
    int total;
};


int main()
{ 
    int n; scanf("%d", &n);
    struct Information info[n];
    
    for(int i=0; i<n; i++) {
       
         scanf("%s %d %d", &info[i].name, &info[i].id, &info[i].marks);
        int sum=0;
        for(int j=0; j<i; j++) {
            if(info[i].id==info[j].id)
                sum+=info[i].marks;
        }
        int new_sum = info[i].marks+sum;
        info[i].total = new_sum;

    }

    for(int i=0; i<n; i++) {
        printf("%s %d %d\n", info[i].name, info[i].id, info[i].marks, info[i].total);
    }
       

    return 0;
} */

 

 /// quet :7

/* 
//  #include<stdio.h>
//  #include<string.h>
 
// void solve(int arr[], int n, int value) {
    
//     int flag=0;
//     for(int i=0; i<n; i++) {
//         for(int j=i+1; j<n; j++) {
//             if(arr[i] * arr[j] == value) {
//                 flag=1;
//                 break;
//             }
//         }
//     }

//     if(flag==1) 
//         printf("Yes\n");
//     else 
//         printf("No\n");


// }
  

//usign two poiter...

int solve(int arr[], int n, int value) {
    int l=0, r=n-1, ans=0;

    while(l <= r) {
        if(arr[l] * arr[r] == value) {
            ans= 1;
            break;
            
        }
        else {
            l++;
            r--;
        }
    }

    return ans;
}

 
int main()
{

    int n; scanf("%d", &n); 
    int arr[n]; 


    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

 
    int value; scanf("%d", &value);
     solve(arr,n, value);

    // int ans= solve(arr,n, value);
    // if(ans==1) 
    //     printf("Yes\n");
    // else   
    //     printf("No\n");
 
    return 0;
}

 */
/* 

#include<stdio.h>
#include<string.h>

int main()
{

    int n; scanf("%d", &n);
    for(int i=1; i<= n; i++) {
        if(i%2==0 && i%7==0) {
            printf("%d ", i);
        }
    }

 
    return 0;
} */
 /* 

 #include<stdio.h>
 #include<stdbool.h>
 
 int multiplication(int a, int b) {
    int mul = a * b;
    return  mul;
 }

 int main()
 {  
    int a, b; scanf("%d %d", &a, &b);
    
    int ans= multiplication(a,b);
    printf("Multiplication: %d\n", ans);
 
    return 0;
 } */



 /* 
 #include<stdio.h>
 #include<stdbool.h>
 
  
 int main()
 {   
    int row; 
    printf("Enter the row:");
    scanf("%d", &row);

    for(int i=0; i<row; i++) {
        for(int j=0; j<i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for(int i=0; i<row; i++) {
        for(int k=i; k<row; k++) {
            printf("*");
        }
        printf("\n");
    }


    return 0;
 }   */

 
 
/* 
 #include<stdio.h>
 #include<stdbool.h>
 
  
 int main()
 {   
     
    for(int i=1; i<=100; i++) {
        if(i%2==0) {
            printf("Goodbye\n");
        }
        else {
            printf("I Love Programming!\n");
        }
    }
   


    return 0;
 }   */

/* 
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

bool is_digit(char ch) {            
    if(ch>='0' && ch<='9') {
        return true;
    }
      
    else {
        return false;
    }
}


bool contains_all_digit(char str[], int len) {
    bool have[10] = {false};  // 0 to 9 have 10 chartacters..
    
    for(int i=0; i<len; i++) {
        if(is_digit(str[i])) {
            int digit = str[i]-'0';
            have[digit]= true;
        }
    }

    for(int i=0; i<10; i++) {
        if(!have[i]) {
            return false;
        }
    }
    return true;
}

int main()
{
    char str[1000];
    gets(str);
    int n = strlen(str);

    if(contains_all_digit(str,n)) 
        printf("YES\n");
    else 
        printf("NO\n");

 
    return 0;
} */
/* 
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void print_array(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void change_array(int arr[], int n, int l, int r) {
    for(int i=l; i<=r; i++) {
        arr[i] = 0;
    }
}

int main()
{

    int n; scanf("%d", &n);
    int arr[n+2];

    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }


    int l, r; scanf("%d %d", &l, &r);
    change_array(arr,n,l,r);

    print_array(arr,n);


    return 0;
} */

// স্ট্রাকচার  : এটি বিভিন্ন বা ভিন্ন ভিন্ন ডেটাটাইপের একটি সংগ্রহ।
//   C ভাষায় ব্যবহারকারী-সংজ্ঞায়িত ডেটাটাইপ যা আমাদের বিভিন্ন ধরনের ডেটা একত্রিত করতে দেয়। কাঠামো একটি জটিল ডেটা টাইপ তৈরি করতে সাহায্য করে যা আরও অর্থপূর্ণ। এটি কিছুটা একটি অ্যারের মতো, তবে একটি অ্যারে শুধুমাত্র একই ধরণের ডেটা ধারণ করে। কিন্তু অন্য দিকে স্ট্রাকচার যেকোন ধরনের ডাটা সঞ্চয় করতে পারে, যা ব্যবহারিক বেশি উপযোগী।


  /* য়েন্টার: সি ভাষার পয়েন্টার হল একটি ভেরিয়েবল যা অন্য ভেরিয়েবলের ঠিকানা সংরক্ষণ করে । এই ভেরিয়েবল int, char, array, function, বা অন্য কোন পয়েন্টার হতে পারে। পয়েন্টারের আকার আর্কিটেকচারের উপর নির্ভর করে।

    সি প্রোগ্রামিং ভাষা তার ব্যবহারকারীদের বিভিন্ন বৈশিষ্ট্য এবং কার্যকারিতা প্রদান করে। এবং পয়েন্টার তাদের মধ্যে একটি. পয়েন্টার প্রোগ্রামারদের আরও ভালো কোডিংয়ে সাহায্য করে। একটি পয়েন্টারের সাহায্যে, আপনি বিভিন্ন ভেরিয়েবলের বিভিন্ন মেমরি ঠিকানা নিয়ে কাজ করতে পারেন। এটি সি প্রোগ্রামিং ভাষার সবচেয়ে শক্তিশালী এবং দরকারী বৈশিষ্ট্যগুলির মধ্যে একটি।

    নিচে উদাহরণ দেওয়া হলোঃ

    ১) এড্রেস ।
    
    যখনই একটি ভেরিয়েবল সংজ্ঞায়িত করা হয় তখন আপনি সেই ভেরিয়েবলের মেমরি ঠিকানা অ্যাক্সেস করতে পারেন। ধরুন, আপনি var নামের একটি ভেরিয়েবলকে সংজ্ঞায়িত করেছেন তারপর আপনি যদি &var ব্যবহার করেন তবে এটি মেমরিতে ভেরিয়েবল var এর ঠিকানা দেবে। সি-তে, আপনি & প্রতীক ব্যবহার করে একটি ভেরিয়েবলের মেমরি ঠিকানা পেতে পারেন ।

    
    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>

    int main() 
    {   
        int var = 2;
        printf("Value is: %d\n", var);
        printf("Memory Address is: %p\n", &var);
 
        return 0;
    } 


    2) সি পয়েন্টারে মান পরিবর্তন করা:

    সি-তে, আমরা সহজেই পয়েন্টার দ্বারা নির্দেশিত মান পরিবর্তন করতে পারি।

উপরের উদাহরণটা নেওয়া যাক। উপরের উদাহরণ থেকে, আমরা নীচের মত পূর্ণসংখ্যা ভেরিয়েবল ভ্যালের মান পরিবর্তন করতে পারি :-

#include<stdio.h>
#include<string.h>

int main()
{
    int val = 10;
    int *point;
    point = &val;

    val = 9;

    printf("Changing the vlaue:");

    printf("Value is: %d\n", *point);
    printf("Momorey address is: %p\n", point);

    return 0;
}

3) পয়েন্টার থেকে পয়েন্টার

পয়েন্টার থেকে পয়েন্টারকে পয়েন্টারের চেইন বলা হয়। এর অর্থ হল প্রথম পয়েন্টারটিতে দ্বিতীয় পয়েন্টারের ঠিকানা রয়েছে এবং এটি প্রকৃত মানের অবস্থান নির্দেশ করে।

#include <stdio.h>
int main () {
   int  val;
   int  *pt;
   int  **point;

   val = 55;
   pt = &val;
   point = &pt;
   printf("Value => val: %d\n", val);
   printf("Value => *pt: %d\n", *pt );
   printf("Value => **pptr: %d\n", **point);
   return 0;
}


4) ফাংশনে পয়েন্টার পাস করার:

#include <stdio.h>
void display(int *val);
int main () {

   int a;
   display(&a);
   printf("TechVidvan Tutorial: Passing pointers to function!\n\n");
   printf("Value is: %d\n",a);
   return 0;
}

void display(int *val) {
   *val = 1002;
  return;
}


5) ফাংশন থেকে পয়েন্টার রিটার্ন :

সি-তে, আপনি দেখেছেন যে আপনি একটি ফাংশন থেকে একটি অ্যারে ফেরত দিতে পারেন। একইভাবে, আপনি একটি ফাংশন থেকে একটি পয়েন্টার ফেরত দিতে পারেন।

  আপনি যদি ফাংশনের বাইরে স্থানীয় ভেরিয়েবলের ঠিকানা ফেরত দেওয়ার চেষ্টা করেন তবে ফাংশনের স্থানীয় ভেরিয়েবলগুলি সুযোগের বাইরে চলে যাবে। এবং আপনার প্রোগ্রাম কখনই কার্যকর হবে না।

সুতরাং এই ধরনের ত্রুটি এড়াতে, আপনাকে স্থানীয় ভেরিয়েবলকে স্ট্যাটিক ভেরিয়েবল হিসাবে সংজ্ঞায়িত করতে হবে।
 
 #include <stdio.h>
int* printToscreen()
{
  static int val = 2364;  
  return (&val);  
}
int main()
{
  int* point;
  point = printToscreen();
  printf("TechVidvan Tutorial: Returning pointer from a function!\n\n");
  printf("Address is: %p\n", point);
  printf("Value is: %d\n", *point);
  return 0;
}
/* 
struct Fun {
    int sum;
};


int main()
{   
    struct Fun *ptr, s;
    s.sum=10;
    ptr = &s;

    printf("%d", (*ptr).sum));

    return 0;
} 
  */

/* 

#include<stdio.h>
#include<string.h>

int main()
{
    int n; scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) 
        scanf("%d", &arr[i]);
    
    int count[11] = {0};
    for(int i=0; i<n; i++) {
        int x=arr[i];
        count[x]++;
    }

    for(int i=0; i<10; i++) {
        if(count[i] >0) {
            printf("%d has %d times\n", i, count[i]);
        }
    }

 
    return 0;
} */

/* 
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    scanf("%s", &str);

    int count[26] = {0};
    for(int i=0; i<strlen(str); i++) {
        char val = str[i];
        count[val-'a']++;
    }

    for(char i='a'; i<='z'; i++) {
        if(count[i-'a'] >0) {
            printf("%c has %d times\n", i, count[i-'a']);
        }
    }
 
    return 0;
} */

/* বেশিরভাগ পরিস্থিতিতে যখন আপনি সংখ্যার সাথে মোকাবিলা করছেন যা int টাইপের মধ্যে ফিট করে তার চেয়ে বড়।

int মান 4 বাইট আকারের যেখানে এক বিট চিহ্ন নির্দেশ করে, যার ফলে -2,147,483,648 থেকে 2,147,483,647 পর্যন্ত পরিসর হয় এবং এইভাবে বেশিরভাগ গণিত মানগুলি বেশ সহজে পরিচালনা করতে পারে। লংগিন্ট একটি সাইন-বিট সহ 8 বাইট ব্যবহার করে এবং -9,223,372,036,854,775,808 থেকে 9,223,372,036,854,775,807 এর পরিসর। হ্যাঁ, এটি অনেক নির্ভুলতার সাথে যথেষ্ট বড় মানগুলি পরিচালনা করতে পারে।

আপনি long int পরিবর্তে একটি ডাবল ব্যবহার করার কথা বিবেচনা করতে পারেন, কারণ ডাবলটি 8 বাইট এবং ডাবলটির আরও বড় পরিসর রয়েছে। যাইহোক, ডাবল টাইপ একটি সূচক ফ্যাক্টরের জন্য কিছু বিট সংরক্ষণ করে, এবং এই সূচক মান নিজেই জন্য কম নির্ভুলতা ছেড়ে. এইভাবে, ডাবল ব্যবহারের ফলে রাউন্ডিং ত্রুটি হতে পারে যখন লংগিন্ট সর্বদা সঠিক প্রাকৃতিক মান বজায় রাখবে। (ভগ্নাংশ ছাড়া মান, অর্থাৎ।)

কিছু পরিস্থিতিতে আছে যখন আপনি শুধুমাত্র int মান দিয়ে গণিত করার সময় একটি long int ব্যবহার করা উচিত। ওভারফ্লো হওয়ার ঝুঁকি থাকলে এটি হবে। উদাহরণস্বরূপ, যদি আপনি 1 থেকে 2,147,483,647 যোগ করেন তবে আপনি ইতিমধ্যেই int টাইপের পরিসরের বাইরে চলে যাচ্ছেন এবং অপ্রত্যাশিত জিনিসগুলি ঘটতে পারে। যদি আপনার কম্পাইলার রেঞ্জ চেকিং সক্ষম করে থাকে তবে এটি ওভারফ্লো লক্ষ্য করবে এবং একটি ব্যতিক্রম উত্থাপন করবে। কিন্তু যদি রেঞ্জ চেকিং অক্ষম করা হয়, তাহলে ফলাফল হবে -2,147,483,648 কারণ int টাইপটি প্রবাহিত হয়।

এটি আরও খারাপ হতে পারে যখন আপনি 214,749 কে 10,000 দ্বারা গুন করলেও একটি ওভারফ্লো হবে। এমনকি আরও মজার, “214,749*10,000/2″ করার ফলে একটি ওভারফ্লো হবে কারণ গুণটি প্রথমে গণনা করা হয় এবং এর ফলাফল একই ধরণের হবে যেমন মানগুলি নিজেই। এটি আসলে একটি সাধারণ বাগ যা ডেভেলপাররা তৈরি করে, বিশেষ করে যখন আপনি বিবেচনা করেন যে এই int মানগুলি বড়, কিন্তু অত্যন্ত বড় নয়।

এটি আর্থিক অ্যাপ্লিকেশনগুলির ক্ষেত্রেও একটি খুব সাধারণ ত্রুটি, কারণ সেই অ্যাপ্লিকেশনগুলি ডলার-সেন্ট বা এমনকি ছোট মূল্যবোধে মূল্য সংরক্ষণ করে। (প্রায়ই 1/1,000 ডলার।) এইভাবে 214,749 এর একটি মান $21,47 এর সমান হবে। দশ হাজারের মতো ছোট পরিমাণে যোগ করলে সহজেই একটি ওভারফ্লো তৈরি হয়। সুতরাং, অনেক আর্থিক সফ্টওয়্যার পরিবর্তে ডাবল টাইপ ব্যবহার করবে, কারণ এতে কিছু নির্ভুলতার অভাব রয়েছে তবে এই ওভারফ্লো ঝুঁকি নেই। রাউন্ডিং ত্রুটিগুলি সাধারণত সহ্য করা হয়।

মজার ব্যাপার হল, কিছু কম্পাইলার এই সম্ভাব্য ওভারফ্লোগুলিকে চিনতে যথেষ্ট স্মার্ট হয়ে উঠেছে এবং ফলাফলটিকে লংইন্ট টাইপে উন্নীত করবে। তারা এখনও একটি ওভারফ্লো ত্রুটি তৈরি করবে যদি আপনি এই লংইন্ট ফলাফলটিকে একটি int টাইপের জন্য বরাদ্দ করার চেষ্টা করেন যদি এটি ফিট না হয়। কিন্তু “int value = 214,749*10,000/2″ সঠিকভাবে গণনা করা হবে।

সুতরাং, আপনি যখন একটি অ্যাপ্লিকেশন তৈরি করছেন তখন আপনাকে একটি সঠিক ডেটা বিশ্লেষণ করতে হবে এবং আপনাকে যে সমস্ত গণিতগুলি সম্পাদন করতে হবে তা বিবেচনা করতে হবে। আপনাকে বিবেচনা করতে হবে যে কিছু সংখ্যা কত বড় হতে পারে এবং যদি তারা গণনার সময় ওভারফ্লো সৃষ্টি করে। এর পরিবর্তে আপনাকে "214,749* ( 10,000/2 ) ″ ব্যবহার করে কিছু জায়গায় গণনা সামঞ্জস্য করতে হতে পারে। (বন্ধনী এখন বিভাজনটিকে প্রথমে গণনা করতে বাধ্য করে, এইভাবে ওভারফ্লো খু

*/


/* 
#include<stdio.h>
#include<string.h>

struct Stduent{
    int roll;
    int class;
    int marks;
};

int main() {
    int n;
    
    scanf("%d", &n);
    struct Stduent st[n];

    int total_marks = 0;
    for (int i = 0; i < n; i++){
        scanf("%d %d %d", &st[i].roll, &st[i].class, &st[i].marks);
        total_marks += st[i].marks;
    }
    printf("Sum: %d", total_marks);
} 
  */

/* 
 #include<stdio.h>
 #include<string.h>

 void swap(int *a, int*b) {
    int temp = *a; 
    *a= *b; 
    *b= temp;
 }

//  void revese_array(int arr[], int n) {
//     int left = 0, right = n-1;

//     while(left <= right) {
//         swap(&arr[left], &arr[right]);
//             left++;
//             right--;
        
//     }
//  }


void reverse_array(int arr[], int n) {

    for(int i=n-1; i>=0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}


 int main()
 {

    int n; scanf("%d", &n);
    int arr[n+2];

    for(int i=0; i<n; i++) 
        scanf("%d", &arr[i]);
    
    reverse_array(arr,n);
     
    return 0;
 } */
  
/* 
#include <stdio.h>

int main (){
    int t;
    scanf("%d", &t);

    while (t--){

        int n;
        scanf("%d", &n);
        int arr[n], arr1[n];
        for (int i = 1; i <= n; i++){
            scanf("%d", &arr[i]);
        }
        int a = 1, b = n, sum = n, now = 1;
        int f = 1;
        while (sum--){
            if (f){
                arr1[now++] = arr[a];
                a++;
                f = 0;

            } else {
                arr1[now++] = arr[b];
                b--;
                f = 1;
            }
        }
        for (int i = 1; i <= n; i++){
            printf("%d ", arr1[i]);
        }
        printf("\n");
    }
    return 0;
} */
 
