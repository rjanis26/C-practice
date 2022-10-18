  /* #include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
int main()
{
    
    FILE *inputFile;
    inputFile= fopen("input.txt", "r");
    FILE *outputFile ;
    outputFile = fopen("output.txt", "w");

    if(inputFile== NULL) {
        printf("File not found.\n");
        return 0;
    }

    int n; 
    fscanf(inputFile, "%d", &n);
    int arr[n];
    int sum=0, avg=0;

    for(int i=0; i<n; i++) {
        fscanf(inputFile, "%d", &arr[i]);
        sum += arr[i];
    }

    fprintf(outputFile,"Sum is: %d\n", sum);
    fprintf(outputFile, "Average:%d\n", sum/n);

    fclose(inputFile);
    fclose(outputFile);

     return 0;
} */
 /* 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{

    FILE *inputFile;
    inputFile = fopen("input.txt", "r");
    FILE *outputFile;
    outputFile = fopen("output.txt", "w");

    if(inputFile==NULL) {
        printf("File not found.\n");
        return 0;
    }

    int t;
    int n, arr[n], sum;

    fscanf(inputFile, "%d", &t);
    //for(int i=0; i<=t; t++) 
    while(t--) {

        sum=0;
        fscanf(inputFile, "%d", &n);
        for(int i=0; i<n; i++) {
            fscanf(inputFile, "%d", &arr[i]);
            sum += arr[i];
        }

        fprintf(outputFile, "Case : %d\n", sum);
    }

    fclose(inputFile);
    fclose(outputFile);
 
 return 0;
}

 */


 
/* 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{

    FILE *inputFile;
    inputFile = fopen("input.txt", "r");
    FILE *outputFile;
    outputFile = fopen("output.txt", "w");

    if(inputFile==NULL) {
        printf("File not found.\n");
        return 0;
    }

    int t;
    int n, arr[n], sum;

    fscanf(inputFile, "%d", &t);
    for(int i=1; i<=t; i++) {

        sum=0;
        fscanf(inputFile, "%d", &n);
        for(int i=0; i<n; i++) {
            fscanf(inputFile, "%d", &arr[i]);
            sum += arr[i];
        }

        fprintf(outputFile, "Case %d: %d\n", i,sum);
    }

    fclose(inputFile);
    fclose(outputFile);
 

    return 0;
}   */


 
/* 
হ্যাঁ, long long int type Frequency array বানানো সম্ভব। কিন্তু সম্ভবত আক্ষরিক না শুধু একটি সি অ্যারে হিসাবে.

একটি জিনিসের জন্য, লং লং int হল বড় একটি সাইনড টাইপ, এবং অ্যারেগুলিকে পিছনের দিকে সূচিত করা যায় না, তাই আপনাকে একটি বড় সাইনবিহীন টাইপ ব্যবহার করতে হবে যাতে আপনি নেতিবাচক মানগুলিকে ধনাত্মক তে স্থানান্তর করতে পারেন, কিন্তু  আনসাইনড লং লং int-এ কাস্টিং হতে  যথেষ্ট হবে.

কিন্তু, আরও গুরুত্বপূর্ণভাবে, একটি সাধারণ 64-বিট প্ল্যাটফর্মে, long long intএকটি 64-বিট টাইপ। সুতরাং, এমনকি যদি আপনার গণনা শুধুমাত্র একক-বাইট unsigned charমান হয়, তাদের মধ্যে 2^64 এর একটি অ্যারে 2^64 বাইট নিতে যাচ্ছে। সাধারণত, এটি আপনার সম্পূর্ণ পয়েন্টার স্পেস, তাই মেমরিতে অন্য কিছুর জন্য কোনও জায়গা থাকবে না এবং এটি আপনার প্রকৃত অ্যাক্সেসযোগ্য  স্থানের চেয়ে বড়।

এছাড়াও, এমনকি যদি আপনি 32-বিট সহ একটি প্ল্যাটফর্মে থাকেন long long int,   আপনার কাছে 80-বিট পেইজস্পেসে 128-বিট পয়েন্টার রয়েছে, তাহলে সম্ভবত আপনার কাছে পুরোটি সংরক্ষণ করার জন্য যথেষ্ট RAM নেই ফিজিক্যাল মেমরিতে অ্যারে, এবং, এমনকি যদি আপনি তা করেন, তাহলে  পেজ স্থানটি সম্ভবত ভয়ানক হবে।

প্রথম যে জিনিসটি আপনার নিজেকে জিজ্ঞাসা করা উচিত তা হল আপনার প্রকৃত ডোমেনটি থেকে সম্পূর্ণ পরিসর কিনা [LLONG_MIN, LLONG_MAX)। প্রায়ই, এটা হয় না. উদাহরণস্বরূপ, আমি একটি মিনি  arbage collector তৈরি করেছি যা অ্যারেনাসের মধ্যে রিফকাউন্ট ব্যবহার করে। আমি যে জিনিসগুলি গণনা করছি তা হল intptr_tমান, যা মান হিসাবে একই 64-বিট আকার long long int। কিন্তু সমস্ত পয়েন্টার 128-বিট সারিবদ্ধ, তাই আমি নীচের 7 বিট বন্ধ করতে পারি। এবং সমস্ত পয়েন্টারগুলি এমন একটি অঙ্গনের মধ্যে রয়েছে যা একটি বিশাল মেমরি পৃষ্ঠার মধ্যে ফিট করে, তাই আমি শীর্ষ 41 বিট  অফ করে দিতে পারি। যার মানে আমার শুধু একটি সূচক হিসাবে মাঝামাঝি 16 বিট প্রয়োজন, এবং এটি শুধুমাত্র 65536 (64K) সূচক। এত লম্বা গণনা করতে কোন সমস্যা নেই।।

আরেকটি সম্ভাবনা হল যে আপনি পুরো জিনিসটি মেমরিতে সংরক্ষণ করবেন না। আপনি 2^64 বাইট (অথবা আপনি যে আকারের গণনা চান) এবং প্রয়োজন অনুসারে মেমরির ভিতরে এবং বাইরে mmap page    দিয়ে একটি ফাইল তৈরি করতে পারেন।

কিন্তু সাধারণত, আপনি যা চান তা হল একটি স্পার্স অ্যারে, যা শুধুমাত্র অ-শূন্য মানগুলির জন্য স্টোরেজ ব্যবহার করে। সাধারণত, 2^64 বিভিন্ন সম্ভাব্য মানের যেকোন কাউন্টারে প্রকৃতপক্ষে তাদের কয়েক বিলিয়নের জন্য অ-শূন্য গণনা হতে চলেছে, এমনকি যদি অনেকগুলিও হয়। অবশ্যই এটি আপনার ব্যবহারের ক্ষেত্রে সত্য নাও হতে পারে, এই ক্ষেত্রে একটি স্পার্স অ্যারে সাহায্য করবে না।







একটি স্পার্স অ্যারে বাস্তবায়নের সবচেয়ে সহজ উপায় হল একটি DOK: কীগুলির একটি অভিধান। আপনি একটি হ্যাশ টেবিল বা লাল-কালো গাছের মতো একটি স্কিপলিস্ট বা HAMT-এর মতো অভিনব কিছুর মতো একটি সাধারণ লগারিদমিক ডেটা কাঠামোর উপরে প্রয়োগ করা একটি অভিধান খুঁজে পেতে বা নিজের জন্য তৈরি করতে পারেন৷ তারপর, অভিধানে নেই এমন যেকোন কী-এর সংখ্যা শূন্য থাকে; ডিকশনারিতে থাকা যেকোন কী এর মান মানচিত্র হিসেবে গণনা করা হয়। আপনি যদি আপনার কী বিতরণ সম্পর্কে অনেক কিছু না জানেন বা প্যাটার্নগুলি আগে থেকে ব্যবহার করেন, তাহলে কোন ধরনের অভিধান সবচেয়ে উপযুক্ত হবে তা জানা কঠিন, তবে কয়েকটি আলাদা তৈরি করা এবং সেগুলিকে বেঞ্চমার্ক করা সহজ।

কিন্তু তাদের নিজস্ব ভিন্ন ট্রেডঅফ সহ স্পার্স অ্যারে সংরক্ষণের অন্যান্য, আরও জটিল উপায় রয়েছে। যদি একটি DOK মনে না হয় যে এটি আপনার নির্দিষ্ট ব্যবহারের ক্ষেত্রে যথেষ্ট দক্ষ হবে (অথবা যদি আপনি এটি চেষ্টা করেন এবং এটি যেকোন ধরনের অভিধানের সাথে যথেষ্ট দক্ষ না হয়), স্পার্স অ্যারে বাস্তবায়ন কৌশলগুলি দেখুন।** অথবা বের করুন আপনার ব্যবহারের ক্ষেত্রে কীভাবে বর্ণনা করবেন অন্য কাউকে জিজ্ঞাসা করার জন্য কোন কৌশল সম্ভবত সেরা হবে। কোনো এক-আকার-ফিট-সব উত্তর নেই।

* এটি C++ এ ছিল, C নয়। তবে আপনি C-তে অ্যারে অ্যাক্সেসের চারপাশে একটি বিমূর্ততা রাখতে পারেন প্রায় সহজে। আপনাকে শুধু স্পষ্ট //etc ব্যবহার করতে counter_getহবে counter_set। এর পরিবর্তে ফাংশনগুলি operator[], এবং আপনাকে বিশ্বাস করতে হবে বা পরীক্ষা করতে হবে যে আপনার কাছে সেই বিমূর্ততা খরচ দূর করার জন্য একটি অর্ধেক-শালীন কম্পাইলার আছে (অর্থাৎ, এটিকে শিফট এবং মাস্কের প্রয়োজনীয় খরচের চেয়ে বেশি কমিয়ে দিন) কারণ ভাষা দেয় না আপনি এটি করার একটি নিশ্চিত উপায়. যেহেতু প্রথমেই একটি অ্যারেনা বরাদ্দকারী লিখতে আপনার এর বেশিরভাগই প্রয়োজন, তাই এখানে কোনও অতিরিক্ত সমস্যা নেই।

** তাদের মধ্যে অনেকগুলি 1D নয়, 2D অ্যারেগুলির চারপাশে ডিজাইন করা হয়েছে, তাই কিছু অতিরিক্ত জটিলতা থাকবে যা আপনার জন্য প্রাসঙ্গিক নয়৷ উদাহরণস্বরূপ, যখন আপনার সারি এবং কলাম না থাকে তখন CSR বনাম CSC একটি অর্থপূর্ণ পার্থক্য নয়। কিন্তু আপনি যদি প্রতিটি কৌশলের পিছনে মূল ধারণাটি বোঝার জন্য যথেষ্ট পড়েন, তবে এটি সাধারণত বেশ স্পষ্ট যে তারা কীভাবে 1D ক্ষেত্রে সরল করে। */

 