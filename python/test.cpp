#include <iostream>
#include <cstdlib>
#include <cstdio> 

using namespace std;

int place[25];
int stack[25][25];
int top[25];

//将a上面的放回原位 
void init_place( int a )
{
	int block,id = place[a];
	while ( stack[id][top[id]] != a ) {
		block = stack[id][top[id] --];
		place[block] = block;
		stack[block][++ top[block]] = block;
	}
}

//将a和上面的全都移动到b上
int  temp[25];
void pile_a_to_b( int a, int b )
{
	int topt = -1,id = place[a],ID = place[b];
	//先将a上面的逆序存入temp 
	while ( stack[id][top[id]] != a )
		temp[++ topt] = stack[id][top[id] --];
	//再存入a
	place[a] = ID;
	stack[ID][++ top[ID]] = a;
	top[id] --;
	//最后将temp里面的逆序存入b 
	while ( topt >= 0 ) {
		place[temp[topt]] = ID;
		stack[ID][++ top[ID]] = temp[topt --];
	}
}
 
int main()
{
	int  n,a,b;
	char oper[5],type[5];
	while ( ~scanf("%d",&n) ) {
		for ( int i = 0 ; i < n ; ++ i ) {
			stack[i][0] = i;
			place[i] = i;
			top[i] = 0;
		}
		while ( scanf("%s",oper) && oper[0] != 'q' ) {
			scanf("%d%s%d",&a,type,&b);
			
			//如果ab在同一堆，不处理 
			if ( place[a] == place[b] )
				continue;
			
			//如果是move先把a上面的还原 
			if ( oper[0] == 'm' )
				init_place( a ); 
			
			//如果是onto先把b上面的还原 
			if ( type[1] == 'n' )
				init_place( b );
			
			//把A堆放在B堆上	
			pile_a_to_b( a, b ); 
		} 
		
		for ( int i = 0 ; i < n ; ++ i ) {
			printf("%d:",i);
			int now = 0;
			while ( now <= top[i] )
				printf(" %d",stack[i][now ++]);
			printf("\n");
		}
	}
	return 0;
}
