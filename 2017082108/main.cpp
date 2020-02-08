#include"Create.h"
#include"output.h"
int main()
{
	Interface();
	MAP ditu;
	int a[21][21]={0};
	ditu.Start(a);
	char d=getch();
	if(d=='1')
	{
		system("cls");
	} 
	else if(d=='2')
	{
		
		Rule();  
	} 
	else if(d=='3') 
	{	
		system("cls");
		ditu.Edit(a);
	}
	
	
	ditu.MAIN(a);
	return 0;
}
