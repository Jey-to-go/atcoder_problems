#include<stdio.h>

// 演習 1

// 構造体の宣言
struct cell {
	int data;
	struct cell *next;
};

// 構造体 cellの大きさ1000の配列の宣言
struct cell cell_pool[1000];

// 初期値がcell_pool[0]へのポインタである，struct cellのポインタの宣言
struct cell *new_cell = &cell_pool[0];

struct cell *create_cell(void);
int main(void)
{
	int i;	// カウンタ変数
	struct cell *x;
	for(i=0; i<3; i++){
		x = create_cell();
		printf("%d\n", x);
	}

	return 0;
}

// ポインタを利用してセルを作成する関数
// 引数：構造体cellのメンバーであるdataと，ポインタのnext
// 戻り値：作成したセルの構造体のポインタ
// 備考：poolにおけるセルの添え字を更新するために，グローバル変数 *new_cellを用いる．
// テスト：print_listにリストの先頭のセルのポインタを渡すことによってリストの
//        内容の開示することで，適切にセルが作成されていることを確認
struct cell *create_cell(void){
	struct cell *old_index;
	old_index = new_cell;
	new_cell++;
	return old_index;
}
