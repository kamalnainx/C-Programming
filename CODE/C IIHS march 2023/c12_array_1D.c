// #include<stdio.h>
// int main()
// {
//     // datatype varname[]={};
//     int a =10,b=20,c=30;
//     printf("%d %d %d\n",a,b,c);

//     int arr[5]={10,20,30};
//     printf("%d %d %d\n",arr[1],arr[2],arr[0]);

//     arr[2]=200;    printf("%d\n",arr[2]);

//     arr[3]=400;    arr[4]=40;
    
//     int i,total=0;
//     for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//     {
//         total += arr[i];
//         printf("%d \t %d\n",i,arr[i]);
//     }
//     printf("%d\n",total);


//     return 0;
// }
























// #include<stdio.h>
// int main()
// {

//     int arr[5]={1,2,3},i,k;
//     arr[0]=10;
//     arr[1]=20;
//     arr[2]=30;
//     arr[3]=40;
//     arr[4]=50;
    
//     printf("%d",arr[1]);
//     for (i = 0; i < 5; i++)
//     {
//         if (arr[i]==22)
//         {
//             k=i;
//         }        
//     }
//     // printf("\t%d\n",k);
//     arr[k]=220;
//     printf("\n%d",arr[k]);
    

//     // int size=sizeof(arr)/sizeof(arr[0]);
//     // printf("%d\n",size);
//     // for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//     // {
//     //     printf("%d \t %d\n",i,arr[i]);
//     // }


//     return 0;
// }
















// #include<stdio.h>
// int main()
// {
//     int arr[5]={1,2,3,5,4};
//     int size=sizeof(arr)/sizeof(arr[0]);

//     int pos=2;
    
//     for(int i = pos; i < size-1;i++)
//     {
//         arr[i]=arr[i+1];
//     }
//     size-=2;
//     for(int i = 0; i < size;i++)
//     {
//         printf("%d\t",arr[i]);
//     }
    
//     printf("%d",size);
//     return 0;
// }





























// #include <stdio.h>
// main()
// {
//     printf ("Please enter hari shankar parsad 6 subject marks");
//     int i,k=9999999999,value,arr[6], find1;
//     for(i = 0; i < 6; i++)
//     {
//         printf ("\n%d no subject marks\t", i);
//         scanf ("%d", &arr[i]);
//     }
//     for (i = 0; i < 6; i++)
//     {
//         printf ("%d\t", arr[i]);
//     }
    
    
//     for (i = 0; i < 6; i++)
//     {
//         if(arr[i]<k)
//         {
//             k=i;
//             value=arr[i];
//         }
//     }

//     printf ("\n%d\t", value);
//     printf ("%d\t\n", k);
//     arr[k]=90;
    
//     for (i = 0; i < 6; i++)
//     {
//         printf ("%d\t", arr[i]);
//     }
// 	printf("\n");
//     for (i = 0; i < 5; i++)
//     {
//         printf ("%d\t", arr[i]);
//     }

   
// }



























































#include <stdio.h>
// main()
// {
//     int i;
//     int arr1[5]={10,20,30,40,50};
//     int arr2[5]={10,20,30,40,50};
    
    
//     for (i = 0; i < 5; i++)
//     {
//         printf ("%d\t%d\n", arr1[i],arr2[i]);
//     }

// 	printf("\n");
//     for (i = 0; i < 5; i++)
//     {
//         printf ("%d\t", arr1[i]+arr2[i]);
//     }
// }































// #include <stdio.h>
// main()
// {
//     printf ("Please enter hari shankar parsad 6 subject marks");
//     int i,k=9999999999,value,arr[6], find1, index;
//     for(i = 0; i < 6; i++)
//     {
//         printf ("\n%d no subject marks\t", i);
//         scanf ("%d", &arr[i]);
//     }
//     for (i = 0; i < 6; i++)
//     {
//         printf ("%d\t", arr[i]);
//     }
    
//     printf("\nEnter hari shankar parsad any subject marks for subject code");
//     scanf("%d", &find1);
//     for ( i = 0; i < 6; i++)
//     {
//         if (arr[i] == find1)
//         {
//             index=i+1;
//         }
//     }
//     printf("subject code is %d\t", index);
// }
