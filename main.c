#include <stdio.h>
#include <stdlib.h>
/*
program:Store 10 value number in an array and display
programmer name:Anish Ray
Date:24/1/2025
*/



/*int main()
{
    int i,arr[10];
    printf("Enter 10 Number\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        printf("You enter the value  %d\n",arr[i]);
    }

    return 0;
}
*/


/*
program:Sum of all the element of a array
programmer name:Anish Ray
Date:24/1/2025
*/



/*int main()
{
    int i,sum,arr[10]={1,2,3,4,5,6,7,8,9,10};


    for(i=0;i<10;i++){
        sum+=arr[i];
    }
    printf("\n Sum is %d",sum);

    return 0;
}
*/

/*
program:Display all the number Greater than Average
programmer name:Anish Ray
Date:24/1/2025
*/



/*int main()
{
    int i,sum,arr[10]={1,2,3,4,5,6,7,8,9,10};

    for(i=0;i<10;i++){
        sum+=arr[i];
    }

    float avg=sum/10;

    for(i=0;i<10;i++){
            if(arr[i]>avg){
                printf("The value greater than avg are %d\n",arr[i]);
            }

    }

    return 0;
}
*/


/*
program:Display the greatest Number in Array
programmer name:Anish Ray
Date:24/1/2025
*/

/*int main()
{
    int i,arr[10]={1,2,3,4,5,6,70,8,9,10},greater=arr[0];

    for(i=0;i<10;i++){
            if(greater<arr[i]){
                greater=arr[i];
            }

    }



    printf("\n The Greatest Number is %d",greater);

    return 0;
}
*/


/*
program:Display the Smallest Number in Array
programmer name:Anish Ray
Date:24/1/2025
*/

/*int main()
{
    int i,arr[10]={3,2,3,4,5,6,70,8,9,10},small=arr[0];

    for(i=0;i<10;i++){
            if(small>arr[i]){
                small=arr[i];
            }

    }

    printf("\n The Smallest Number is %d",small);

    return 0;
}
*/



/*
program:Display all even numer Number in Array
programmer name:Anish Ray
Date:24/1/2025
*/

/*int main()
{
    int i,arr[10]={1,2,3,4,5,6,70,8,9,10};

    for(i=0;i<10;i++){
            if(arr[i]%2==0){
                printf("\n even number are:%d",arr[i]);
            }

    }

    return 0;
}
*/


/*
program:Display the of all even and odd numer Number in  an Array
programmer name:Anish Ray
Date:24/1/2025
*/

/*int main()
{
    int i,arr[10]={1,2,3,4,5,6,70,8,9,10},esum=0,osum=0;

    for(i=0;i<10;i++){
            if(arr[i]%2==0){
                    esum=+arr[i];

            }else{
                osum+=arr[i];

            }

    }
    printf("The Sum of all the Even Number are: %d",esum);
    printf("\nThe Sum of all the Even Number are: %d",osum);

    return 0;
}
*/

/*
program:Search an element in Array
programmer name:Anish Ray
Date:24/1/2025
*/

/*int main()
{
    int i,arr[10]={1,2,3,4,5,6,70,8,9,10},flag=0;
    int search=50;
    for(i=0;i<10;i++){
        if(search==arr[i]){
            printf("Entered Value Found %d",arr[i]);
            flag=1;
        }
        else{
            flag=0;
        }
    }
    if(flag==0){
        printf("Entered Value Does not Found");
    }



    return 0;
}
*/

//Part 2 Same Question with Function



/*
program:Sum of all the element of a array using function
programmer name:Anish Ray
Date:24/1/2025
*/

/*int sum(int a[],int b){
    int i,sum=0;
     for(i=0;i<10;i++){
        sum+=a[i];
    }
    printf("\n Sum is %d",sum);
}

int main()
{
    int i,add,arr[10]={1,2,3,4,5,6,7,8,9,10};
    add=sum(arr,10);


    return 0;
}
*/


/*
program:Display all the number Greater than Average using function
programmer name:Anish Ray
Date:26/1/2025
*/

/*int greater_than_avg(int a[],int b){
    int sum,i;
    for(i=0;i<10;i++){
        sum+=a[i];
    }
    float avg=sum/10;

    for(i=0;i<10;i++){
            if(a[i]>avg){
                printf("The value greater than avg are %d\n",a[i]);
            }

    }
   

}


int main()
{
    int i,arr[10]={1,2,3,4,5,6,7,8,9,10};

     greater_than_avg(arr,10);    
    
    return 0;
}
*/



/*
program:Display the greatest Number in Array using Function
programmer name:Anish Ray
Date:26/1/2025
*/
/*
int greatest(int a[],int b){
    int i,great=a[0];
     for(i=0;i<b;i++){
            if(great<a[i]){
                great=a[i];
            }

    }
    printf("\n The Greatest Number is %d",great);
}

int main()
{
    int arr[10]={1,2,3,4,5,6,70,8,9,10};
    greatest(arr,10);  

    return 0;
}
*/

/*
program:Display the Smallest Number in Array
programmer name:Anish Ray
Date:26/1/2025
*/
/*
int smallest(int a[],int b){
    int i,small=a[0];
     for(i=0;i<b;i++){
            if(small>a[i]){
                small=a[i];
            }

    }
    printf("\n The Smallest Number is %d",small);
}

int main()
{
    int arr[10]={3,2,3,4,5,6,70,8,9,10};  
    smallest(arr,10);  

    return 0;
}
*/


/*
program:Display all even numer Number in Array
programmer name:Anish Ray
Date:26/1/2025
*/

/*int all_even(int a[],int b){
    int i;
     for(i=0;i<b;i++){
            if(a[i]%2==0){
                printf("\n even number are:%d",a[i]);
            }

    }

}

int main()
{
    int arr[10]={1,2,3,4,5,6,70,8,9,10}; 
    all_even(arr,10);  

    return 0;
}
*/

/*
program:Display the of all even and odd numer Number in  an Array using function
programmer name:Anish Ray
Date:26/1/2025
*/


/*
void odd_even_search(int a[],int b){
    int i,esum=0,osum=0;
     for(i=0;i<b;i++){
            if(a[i]%2==0){
                    esum+=a[i];

            }else{
                osum+=a[i];

            }
    }
      printf("The Sum of all the Even Number are: %d",esum);
    printf("\nThe Sum of all the Odd Number are: %d",osum);


}

int main()
{
    int arr[10]={1,2,3,4,5,6,70,8,9,10};
    odd_even_search(arr,10);   
  
    return 0;
}
*/



/*
program:Search an element in Array using function
programmer name:Anish Ray
Date:24/1/2025
*/

/*int search(int a[], int b, int x){
    int i,flag=0;
    for(i=0;i<b;i++){
        if(x==a[i]){
            printf("Entered Value Found %d",a[i]);
            flag=1;
        }
    }

    if(flag==0){
        printf("Entered Value Does not Found");
    }

}

int main()
{
    int i,arr[10]={1,2,3,4,5,6,70,8,9,10},num;
    num=search(arr,10,6);

    return 0;
}
*/





