 #include <stdio.h>
/*
 int aa = 100; // �ܺ� ���� 

 int main (void)
 {
     static int aa = 200; // ���� ����. ���ο� ��Ī
     {
         int aa = 300; // ���� ����. ���ο� ��Ī
         {
             extern int aa; // aa = 300 ������ aa�� ������ �����Ƿ�, �ܺ� ������ �ȴ�.
             printf("aa=%d\n", aa);
         }
     }
     scanf("%d",*aa);  return 0;
 }

*/

#include <stdio.h>

extern int aa = 100; // �ܺ� ���� 

int main (void)
{
	printf("aa=%d\n", aa);
	{
        static int aa = 200; // ���� ����. ���ο� ��Ī
	printf("aa=%d\n", aa);
    {
        int aa = 300; // ���� ����. ���ο� ��Ī
		printf("aa=%d\n", aa);
        {
            extern int aa; // aa = 300 ������ aa�� ������ �����Ƿ�, �ܺ� ������ �ȴ�.
            printf("aa=%d\n", aa);
        }
    }
	}
    return 0;
}
/*
-----------------------------------------------------------

&aa => 0x00424b94

&aa => 0x00424b98

&aa => 0x0012ff7c

aa=100
aa=200
aa=300
aa=100
Press any key to continue

aa=0
aa=0
aa=-858993460
aa=0
Press any key to continue

*/
