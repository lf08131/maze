#include"Create.h"
#include"output.h"

void MAP::Map(int a[21][21])
{
	for(int i=1;i<20;i++)
	{	 
		for(int j=1;j<20;j++)
		{	
			if(a[i][j]==0)
			{	
				cout<<"  " ;
			}
			else if(a[i][j]==2)
			{
				system("color 3F"); 	
				cout<<"ぬ" ;
			} 
			else if(a[i][j]==1)
			{
				cout<<"█" ;
			}
			else if(a[i][j]==5)
			{
			 	cout<<"★"; 
			} 
			else if(a[i][j]==4)
			{
			 	cout<<"☆"; 
			} 
		} 
		cout<<endl; 
	} 
}
void MAP::Init(int x, int y,int a[21][21])
{
	int direction[4][2]={1,0,0,1,0,-1,-1,0};  //定义方向 
	int i,j,temp;
	for(i=0;i<4;i++)         //打乱方向 
	{
		j=rand()%4; //随机选取方向 
		temp=direction[i][0];
		direction[i][0]=direction[j][0];
		direction[j][0]=temp;
		temp=direction[i][1];
		direction[i][1]=direction[j][1];
		direction[j][1]=temp;
	}
	a[x][y] = 0;
	for(i=0;i<4;i++)
	{
		if(a[x+2*direction[i][0]][y+2*direction[i][1]] == 1)  
		{
			a[x+direction[i][0]][y+direction[i][1]] = 0;
			Init(x+2*direction[i][0],y+2*direction[i][1],a);
		}
	}
}
void MAP::Start(int a[21][21])
{
	int i,j;
for(i=0;i<21;i++)
	{
		for(j=0;j<21;j++)
		{
			if(i==0||i==20||j==0||j==20) //初始化迷宫
			{
				a[i][j]= 0;
			}
			else 
			a[i][j]=1;
		}
	}
	srand((unsigned)time(NULL));

	Init(2*(rand()%(19/2)+1),2*(rand()%(19/2)+1),a);
}

void MAP::MAIN(int a[21][21])
{
	time_t seconds1;
	time_t seconds2;
	int a00 = 0;
	int b00 = 0;
	int i00=60;
	int count =0;
	int hang=2,lie=2; 
	int flag=1;
	int sum=0;
	int sum1=0;
	char d ;
	seconds1 = time(NULL);
	a[2][2]=2;
	a[18][18]=4;
	int c[21][21]={0};
	
	for(int i=0;i<21;i++)
	{
		for(int j=0;j<21;j++)
		{
			c[i][j]=a[i][j];
		}
	}
	
	while(i00>=-1)
	{
		seconds2 = time(NULL);
		a00 = seconds2 - seconds1;	
		if(kbhit()==0)
		{
			if(b00 != a00)
			{
				system("cls");
				cout<<i00--;
				if(i00==-1)
				{
					system("cls");
					Defeat(); 
					cout<<endl;
					cout<<"您得到的分数为"<<sum1;
					break;
				}
				cout<<endl;
				Map(a);
				b00 = a00;
			}
		}
		
		else if(kbhit()!=0)
		{
			d=getch();
			sum++;
			if(d==-32)
			{
				d=getch();
				{
					if(d==75)
					{
						count = 0;
						if(lie>=2&&lie<19) 
						{
							if(a[hang][lie-1]==0||a[hang][lie-1]==4)
							{
								a[hang][lie-1] = 2; 
								a[hang][lie] = 0; 
								c[hang][lie]=5;
								lie--; 
								system("cls");
								cout<<i00;
								cout<<endl;
								Map(a);
							}
						}
				} 
			else if(d==72)
			{
				count = 1;
				if(hang>=2&&hang<19) 
				{
					if(	a[hang-1][lie]==0||a[hang-1][lie]==4)
					{
						a[hang-1][lie] = 2; 
						a[hang][lie] = 0; 
						c[hang][lie]=5;
						hang--; 
						system("cls");
						cout<<i00;
						cout<<endl;
						Map(a);
					}
			
				}	
			} 
			else if(d==77)
			{
				count = 2;
			 	if(lie>=1&&lie<19) 
			 	{
			 		if(a[hang][lie+1]==0||a[hang][lie+1]==4)
			 		{
			 			a[hang][lie+1] = 2; 
						a[hang][lie] = 0; 
						c[hang][lie]=5;
						lie++; 
				 	}
			 		system("cls");
					cout<<i00;
					cout<<endl;
					Map(a);
			 	}
			
			} 
			else if(d==80) 
			{
				count = 3;
				if(hang>=1&&hang<19) 
				{
					if(	a[hang+1][lie]==0||a[hang+1][lie]==4)
					{
						a[hang+1][lie] = 2; 
						a[hang][lie] = 0; 
						c[hang][lie]=5;
						hang++;
						system("cls");
						cout<<i00;
						cout<<endl;
						Map(a);
					}
				
				} 
			}
			}
		}
			else if(d=='f')
			{
				if(count==0)
				{
					if(lie>=2&&lie<19)
					{
						if(a[hang][lie-1]==0)
					{
						a[hang][lie-1]=1;
					}
					else if(a[hang][lie-1]==1)
					{
						a[hang][lie-1]=0;
					}
					}
					
				}
				else if(count == 1)
				{
					if(hang>=2&&hang<19) 
					{
						if(a[hang-1][lie]==0)
					{
						a[hang-1][lie]=1;
					}
					else if(a[hang-1][lie]==1)
					{
						a[hang-1][lie]=0;
					}
					}
					
				}
				else if(count == 2)
				{
						if(lie>=2&&lie<19)
						{	if(a[hang][lie+1]==0)
					{
						a[hang][lie+1]=1;
					}
					else if(a[hang][lie+1]==1)
					{
						a[hang][lie+1]=0;
					}
							
						}
				
				}
				else if(count == 3)
				{
					if(hang>=2&&hang<19) 
					{
						if(a[hang+1][lie]==0)
						{
							a[hang+1][lie]=1;
						}
						else if(a[hang+1][lie]==1)
						{
							a[hang+1][lie]=0;
						}
					}
					
				}
				system("cls");
				cout<<i00;
				cout<<endl;
				Map(a);
			}
			if(hang==18&&lie==18)
			{
				flag=0; 
				system("cls"); 
				OutPut();
				sum1+=150-sum+i00;
				cout<<"您得到的分数为"<<sum1;
				cout<<endl;
				d=getch();
				
					c[18][18]=5;
					system("cls"); 
					Map(c);
				//	break;
				
				d=getch();
				if(d=='1')
				{
					cout<<"进入下一关" ;
					i00=60;
					
					hang =2;
					lie =2;
					Start(a);
					Map(a);
					a[2][2]=2;
					a[18][18]=4;
					for(int i=0;i<21;i++)
					{
						for(int j=0;j<21;j++)
						{
							c[i][j]=a[i][j];
						}
					}
				}
				else if(d=='2')
				{
					system("cls");
					 Ending();
					 break;
				}
					
				
			}
				
			} 		
		} 
	
}
void MAP::Edit(int a[21][21])
{	
	int hang=2;
	int lie =2;
		a[2][2]=2;
	a[18][18]=4;
	Map(a);
	char d;
	int count = 0;
	int flag=1;
	while (flag!=0)
	{
		d=getch();
			
			if(d==-32)
			{
				d=getch();
				{
					if(d==75)
					{
						count = 0;
						if(lie>=2&&lie<19) 
						{
							if(a[hang][lie-1]==0||a[hang][lie-1]==4)
							{
								a[hang][lie-1] = 2; 
								a[hang][lie] = 0; 
								
								lie--; 
								system("cls");
								
								
								Map(a);
							}
						}
				} 
			else if(d==72)
			{
				count = 1;
				if(hang>=2&&hang<19) 
				{
					if(	a[hang-1][lie]==0||a[hang-1][lie]==4)
					{
						a[hang-1][lie] = 2; 
						a[hang][lie] = 0; 
						
						hang--; 
						system("cls");
						
						
						Map(a);
					}
			
				}	
			} 
			else if(d==77)
			{
				count = 2;
			 	if(lie>=1&&lie<19) 
			 	{
			 		if(a[hang][lie+1]==0||a[hang][lie+1]==4)
			 		{
			 			a[hang][lie+1] = 2; 
						a[hang][lie] = 0; 
						
						lie++; 
				 	
			 		system("cls");
				
					Map(a);
					}
			 	}
			
			} 
			else if(d==80) 
			{
				count = 3;
				if(hang>=1&&hang<19) 
				{
					if(	a[hang+1][lie]==0||a[hang+1][lie]==4)
					{
						a[hang+1][lie] = 2; 
						a[hang][lie] = 0; 
						
						hang++;
						system("cls");
						
						Map(a);
					}
				
				} 
			}
			}
		}
		else if(d=='c')
		{
			
			a[hang][lie]=0;
			flag=0;
		}
			else if(d=='f')
			{
				if(count==0)
				{
					if(lie>=2&&lie<19)
					{
						if(a[hang][lie-1]==0)
					{
						a[hang][lie-1]=1;
					}
					else if(a[hang][lie-1]==1)
					{
						a[hang][lie-1]=0;
					}
					}
					
				}
				else if(count == 1)
				{
					if(hang>=2&&hang<19) 
					{
						if(a[hang-1][lie]==0)
					{
						a[hang-1][lie]=1;
					}
					else if(a[hang-1][lie]==1)
					{
						a[hang-1][lie]=0;
					}
					}
					
				}
				else if(count == 2)
				{
						if(lie>=2&&lie<19)
						{	if(a[hang][lie+1]==0)
					{
						a[hang][lie+1]=1;
					}
					else if(a[hang][lie+1]==1)
					{
						a[hang][lie+1]=0;
					}
							
						}
				
				}
				else if(count == 3)
				{
					if(hang>=2&&hang<19) 
					{
						if(a[hang+1][lie]==0)
						{
							a[hang+1][lie]=1;
						}
						else if(a[hang+1][lie]==1)
						{
							a[hang+1][lie]=0;
						}
					}
					
				}
				system("cls");
				
				Map(a);
			}
	}
	
}
