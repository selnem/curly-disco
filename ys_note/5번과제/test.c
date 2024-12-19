#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
   char fileName1[100];
   char fileName2[100];
   FILE* file1;
   FILE* file2;
   char line1[100];
   char ptemp1[100],ptemp2[100];
   char line2[100];

   int eof1 = 0;
   int eof2 = 0;

   printf("Enter first file name : ");
   scanf("%s", fileName1);
   file1 = fopen(fileName1, "r");
   if (file1 == NULL) {
      printf("Error.\n");
      exit(1);
   }

   printf("Enter second file name : ");
   scanf("%s", fileName2);
   file2 = fopen(fileName2, "r");
   if (file2 == NULL) {
      printf("Error.\n");
      fclose(file1);
      exit(1);
   }
   if (fgets(line1, sizeof(line1), file1) != NULL) {
            strcpy(ptemp1,line1);
   }
   if (fgets(line2, sizeof(line2), file2) != NULL) {
            strcpy(ptemp2,line2);
    }


   while (!eof1 || !eof2) {
      if (!eof1) {
         if (fgets(line1, sizeof(line1), file1) != NULL) {
            printf("%s",ptemp1);
            strcpy(ptemp1,line1);
         }
         else {
            printf("%s\n",ptemp1);
            eof1 = 1;
         }
      }

      if (!eof2) {
         if (fgets(line2, sizeof(line2), file2) != NULL) {
            printf("%s",ptemp2);
            strcpy(ptemp2,line2);

        }
         else {
            printf("%s\n",ptemp2);
            eof2 = 1;
         }
      }
      
   }

   fclose(file1);
   fclose(file2);

   printf("\nAll files processed.\n");

   return 0;


   fprintf(dbFile,"\n\nthe before 300 is \n 1 %d %d",end-1,sum);
}