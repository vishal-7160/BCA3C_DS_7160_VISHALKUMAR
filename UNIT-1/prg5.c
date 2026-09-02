/* 5. Create an array of size 10, find the largest value from the array.
NAME:-VISHAL KUMAR
ENROLL:-92500527160 */


#include<stdio.h>

void main()
{
          int a[10],i,large;

          for(i=0;i<10;i++)
          {
              printf("\n Enter the number %d of A:",i+1);
              scanf("%d",&a[i]);

          }
          large=a[0];
          for(i=0;i<10;i++)
          {

              if(large<a[i])
              {
                  large=a[i];
              }

          }
           printf("The largest number is %d",large);
}









