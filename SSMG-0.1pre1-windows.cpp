/*
00000000000000000000
0 10               0
0  0     000000    0
0  0     0         0
0  0     0    000000
0        0    0        //zh
0000000000    0        
0   0         000  0
0       0          0
00000000000000000000
*/

#include<iostream>
using namespace std;
int main(){
	// 迷宫
	char dt[10][20] = {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0',' ','1','0',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','0','0',' ',' ','0',' ',' ',' ',' ',' ','0','0','0','0','0','0',' ',' ',' ',' ','0','0',' ',' ','0',' ',' ',' ',' ',' ','0',' ',' ',' ',' ',' ',' ',' ',' ',' ','0','0',' ',' ','0',' ',' ',' ',' ',' ','0',' ',' ',' ',' ','0','0','0','0','0','0','0',' ',' ',' ',' ',' ',' ',' ',' ','0',' ',' ',' ',' ','0',' ',' ',' ',' ',' ','0','0','0','0','0','0','0','0','0','0',' ',' ',' ',' ','0',' ',' ',' ',' ',' ','0',' ',' ',' ','0',' ',' ',' ',' ',' ',' ',' ',' ',' ','0','0','0',' ',' ','0','0',' ',' ',' ',' ',' ',' ',' ','0',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'};
	int sf = 0;
	int wgx = 2;
	int wgy = 1;
	for(;;){
		system("cls"); //清理以前的地图
		for (int i = 0;i<10;i++){       //输出迷宫
			for (int j = 0;j<20;j++){
				cout <<dt[i][j];
			}
			cout <<endl;
		}
		if ((wgx == 17 && wgy == 7) || (wgx == 18 && wgy == 7)){  //判断胜利
			cout <<endl<<"游戏结束,胜利!"<<endl;
			return 0;
		}
		cout <<endl<<"请输入(W上S下A左D右): ";
		char kz;
		cin >>kz;
		if (kz == 'W' || kz == 'w'){
			if (dt[wgy - 1][wgx] == '0'){   //控制小人
				continue;
			}
			dt[wgy - 1][wgx] = '1';
			dt[wgy][wgx] = ' ';
			wgy = wgy - 1;
		}
		else if (kz == 'S' || kz == 's'){
			if (dt[wgy + 1][wgx] == '0'){
				continue;
			}
			dt[wgy + 1][wgx] = '1';
			dt[wgy][wgx] = ' ';
			wgy = wgy + 1;
		}
		else if (kz == 'A' || kz == 'a'){
			if (dt[wgy][wgx - 1] == '0'){
				continue;
			}
			dt[wgy][wgx - 1] = '1';
			dt[wgy][wgx] = ' ';
			wgx = wgx - 1;
		}
		else if (kz == 'D' || kz == 'd'){
			if (dt[wgy][wgx + 1] == '0'){
				continue;
			}
			dt[wgy][wgx + 1] = '1';
			dt[wgy][wgx] = ' ';
			wgx = wgx + 1;
		}
	}
}
