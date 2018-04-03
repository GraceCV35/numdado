
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void dado ()
{
     int i;
 
    
     for (i = 0; i < 6; i++)
     {
           
           printf("%d ", rand() % 6);
     }
 
     getch();
     
     return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	dado();
	
	system("pause");
	
	return 0;
}
