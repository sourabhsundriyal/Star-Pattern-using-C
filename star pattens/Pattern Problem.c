/* #include<stdio.h>
 void main()
 {
     int n;
     for(int i=5; i>=1;i--){
         for(int j=i; j>=1; j--){
             printf("%d",j);

         printf("\n");
     }
 }
 }
 54321
 4321
 321
 21
 1
*/

/*   #include<stdio.h>
   void main(){
      for(int i=1;i<=5;i++){
          for(int j=i;j<=5;j++){
              printf("%d",j);

          }
          printf("\n");
      }
   }
        12345
        2345
        345
        45
        5
      */

/* #include<stdio.h>
 void main()
 {
    for(int i=1;i<=5;i++){
        for(int j=i;j<=5;j++){
            printf("1");
        }
        printf("\n");
    }
 }
 11111
 1111
 111
 11
 1
*/

/* #include<stdio.h>
 void main(){
     for(int i=1;i<=5;i++){
         for(int j=1; j<=5; j++){
             printf("*");
         }
         printf("\n");
     }
 }

 *****
 *****  j fix krdete hai
 *****
 *****
 *****
*/

/*  #include<stdio.h>
  void main(){
     for(int i=1;i<=5;i++){         i used for rows
         for(int j=1;j<i;j++){  j is used for spaces
             printf(" ");
         }
         for(int k=i;k<=5;k++){   k is used for col'n
             printf("*");
         }
         printf("\n");

     }
  }
  *****
   ****
    ***
     **
      *
  */

/* #include<stdio.h>
 void main(){
   for(int i=1;i<=4;i++){
       for(int j=1;j<=4;j++){
           if(i==1 || i==4 || j==1 || j==4)
           printf("*");
           else
           printf(" ");      condition statement OR will be used here for i and j
       }
       printf("\n");
   }
 }
 ****
 *  *
 *  *
 ****
 */

/*   #include<stdio.h>
   void main()
   {
       for(int i=1; i<=5; i++){
           for(int j=1; j<=5; j++){
               if(i==3 || j==3)
               printf("*");         Just need to see the condition where we want to print in x and in j for rows and columns.
               else
               printf(" ");
           }
           printf("\n");
       }
   }
    *
    *
  *****
    *
    *
*/

/* #include<stdio.h>
 void main(){
 for(int i=1; i<=5; i++){      i = rows
     for(int j=5;j>i;j--){
         printf(" ");              j=left side spaces

     }
     for(int k=1; k<=i;k++){              k= *,middle spaces,& right spaces
         printf("* ");
     }
     printf("\n");
 }
 }

          *
         * *
        * * *
       * * * *
      * * * * *
  */

/*    #include<stdio.h>
    void main()
    {
     for(int i=1;i<=5;i++){
         for(int j=i; j>1;j--){       j ka loop chlega for space but vo bdhta jaaega as j > 1 after it will be 2, 3 by i++
             printf(" ");
             }
             for(int k=i;k<=5;k++){
                 printf("* ");
             }
         printf("\n");
     }

                }
                * * * * *
                 * * * *
                  * * *
                   * *
                    *
         */

/* #include<stdio.h>
 void main()
 {
   for(int i = 1; i<=5 ; i++){
    for(int j=i; j>i;j++){
        printf(" ");
    }for(int k = i; k<=5;k++){
        printf("* ");
    }
    printf("\n");
   }
 }

      * * * * *
      * * * *
      * * *
      * *
      *
      */