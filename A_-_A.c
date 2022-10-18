/* #include<stdio.h>
#include<string.h>


int main()
{
    int n; 
    while(scanf("%d", &n)) {
        if(n==42) {
            break;
        }
        printf("%d\n", n);
    }

 
    return 0;
} */

/* #include<stdio.h>

struct Fun {
    int sum;
};

int main()
{
    struct Fun *ptr, s;
    s.sum=5;
    printf("%d\n", s.sum);

    s.sum=10;

    ptr = &s;

    printf("%d\n", (*ptr) .sum);

    struct Fun **pt;
    pt = &ptr;
    s.sum = 100;

    printf("%d\n", (**pt) .sum);
 
    return 0;
}
  */

   /* 

/*    
 #include<stdio.h>


struct Fun {
    int sum;
};


int main()
{   
    struct Fun *ptr, s;
    s.sum=10;
    ptr = &s;
    printf("%d\n", (*ptr).sum);

    s.sum= 100;

     printf("%d\n", (*ptr).sum);


    s.sum = 1060051;
     printf("%d\n", (*ptr).sum);


    return 0;
}
  
 */
  


 
 
 #include<stdio.h>


struct Fun {
    int sum;
};


int main()
{   
    
    struct Fun value1;
    struct Fun *value2;

    value1.sum = 21;

    printf("%d\n", value1.sum);


    value2->sum = 33;

    printf("%d\n", value2->sum);


    return 0;
}
  
 