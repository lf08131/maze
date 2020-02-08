#include"output.h"
void Rule()
{
	for(int j=0;j<10;j++)
	{
		for(int i=0;i<40;i++)
		
		cout<<"☆" ;
	}
	for(int i=0;i<15;i++)
	{
		cout<<"☆" ;
	}
	cout<<"★★迷宫游戏规则★★" ;
	for(int i=0;i<15;i++)
	{
		cout<<"☆" ;
	}
	for(int i=0;i<13;i++)
	{
		cout<<"☆" ;
	}
	cout<<"★★按左 键表示向左运动★★" ;
	for(int i=0;i<14;i++)
	{
		cout<<"☆" ;
	}
	for(int i=0;i<13;i++)
	{
		cout<<"☆" ;
	}
	cout<<"★★按下 键表示向下运动★★" ;
	for(int i=0;i<14;i++)
	{
		cout<<"☆" ;
	}
	for(int i=0;i<13;i++)
	{
		cout<<"☆" ;
	}
	cout<<"★★按上 键表示向上运动★★" ;
	for(int i=0;i<14;i++)
	{
		cout<<"☆" ;
	}
	for(int i=0;i<13;i++)
	{
		cout<<"☆" ;
	}
	cout<<"★★按右 键表示向右运动★★" ;
	for(int i=0;i<14;i++)
	{
		cout<<"☆" ;
	}
	for(int i=0;i<11;i++)
	{
		cout<<"☆" ;
	}
	cout<<"★★当ぬ运动遇到█时，ぬ不动★★" ;
	for(int i=0;i<13;i++)
	{
		cout<<"☆" ;
	}
	for(int i=0;i<10;i++)
	{
		cout<<"☆" ;
	}
	cout<<"★★在规定时间内到达☆即为获得胜利★★" ;
	for(int i=0;i<11;i++)
	{
		cout<<"☆" ;
	}
	for(int i=0;i<10;i++)
	{
		cout<<"☆" ;
	}
	cout<<"★★得分根据时间和移动步数进行计算★★" ;
	for(int i=0;i<11;i++)
	{
		cout<<"☆" ;
	}
	for(int j=0;j<9;j++)
	{
		for(int i=0;i<40;i++)
		cout<<"☆" ;
	}
	char f=getch();
	if(f=='1')
	{
	system("cls");
	} 
} 
void Interface()
{
	char d; 
	system("color 3F"); 
	for(int j=0;j<9;j++)
	{
		for(int i=0;i<40;i++)
		cout<<"☆" ;
	} 
	cout<<endl; 
	cout<<endl; 
	for(int i=0;i<15;i++)
	{
		cout<<"☆" ;
	}
	cout<<"★★1.开始游戏★★"; 
	for(int i=0;i<16;i++)
	{
		cout<<"☆" ;
	} 
	 
	cout<<endl;
	for(int i=0;i<15;i++)
	{
		cout<<"☆" ;
	}
	cout<<"★★2.游戏规则★★" ;
	for(int i=0;i<16;i++)
	{
		cout<<"☆" ;
	}
	cout<<endl; 
	cout<<endl;
	for(int i=0;i<15;i++)
	{
		cout<<"☆" ;
	}
	cout<<"★★3.编辑地图★★"; 
	for(int i=0;i<16;i++)
	{
		cout<<"☆" ;
	}
	for(int j=15;j<25;j++)
	{
		for(int i=0;i<40;i++)
		cout<<"☆" ;
	}
	
} 
void OutPut()
{
	char d; 
	system("color 5B"); 
	for(int j=0;j<9;j++)
	{
		for(int i=0;i<40;i++)
		cout<<"☆" ;
	} 
	cout<<endl; 
	cout<<endl; 
	for(int i=0;i<15;i++)
	{
		cout<<"☆" ;
	}
	cout<<"★恭喜你，挑战成功★"; 
	for(int i=0;i<15;i++)
	{
		cout<<"☆" ;
	} 
	cout<<endl;
	cout<<endl;
	for(int j=14;j<25;j++)
	{
		for(int i=0;i<40;i++)
		cout<<"☆" ;
	}
}

void Defeat()
{
	char d; 
	system("color 5B"); 
	for(int j=0;j<9;j++)
	{
		for(int i=0;i<40;i++)
		cout<<"☆" ;
	} 
	cout<<endl; 
	cout<<endl; 
	for(int i=0;i<15;i++)
	{
		cout<<"☆" ;
	}
	cout<<"★很遗憾，闯关失败★"; 
	for(int i=0;i<15;i++)
	{
		cout<<"☆" ;
	} 
	cout<<endl;
	cout<<endl;
	for(int j=14;j<25;j++)
	{
		for(int i=0;i<40;i++)
		cout<<"☆" ;
	}
}
void Ending()
{
	char d; 
	system("color 5B"); 
	for(int j=0;j<9;j++)
	{
		for(int i=0;i<40;i++)
		cout<<"☆" ;
	} 
	cout<<endl; 
	cout<<endl; 
	for(int i=0;i<15;i++)
	{
		cout<<"☆" ;
	}
	cout<<"★已退出，闯关结束★"; 
	for(int i=0;i<15;i++)
	{
		cout<<"☆" ;
	} 
	cout<<endl;
	cout<<endl;
	for(int j=14;j<25;j++)
	{
		for(int i=0;i<40;i++)
		cout<<"☆" ;
	}
}

