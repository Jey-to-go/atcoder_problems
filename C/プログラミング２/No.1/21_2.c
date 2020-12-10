#include<stdio.h>

// 演習 2

// 構造体の宣言
struct cell {
	int data;
	struct cell *next;
};

// 構造体 cellの大きさ1000の配列の宣言
struct cell cell_pool[1000];

// 初期値がcell_pool[0]へのポインタである，struct cellのポインタの宣言
struct cell *new_cell = &cell_pool[0];

struct cell *create_cell(int data, struct cell *next);
void print_list(struct cell *list);
int main(void)
{
	struct cell *cell1, *cell2, *cell3;
	cell1 = create_cell(2, 0);
	cell2 = create_cell(5, cell1);
	cell3 = create_cell(1, cell2);

	print_list(cell3);

	return 0;
}

// ポインタを利用してセルを作成する関数
// 引数：構造体cellのメンバーであるdataと，ポインタのnext
// 戻り値：作成したセルの構造体のポインタ
// 備考：poolにおけるセルの添え字を更新するために，グローバル変数 *new_cellを用いる．
// テスト：print_listにリストの先頭のセルのポインタを渡すことによってリストの
//        内容の開示することで，適切にセルが作成されていることを確認
struct cell *create_cell(int data, struct cell *next){
	struct cell *old_index;
	old_index = new_cell;

	old_index->data = data;
	old_index->next = next;

	new_cell++;
	return old_index;
}

// リストを繰り返しによってたどり，各セルのdataメンバーを表示する関数 print_list
// 引数：つまり先頭のセルのポインタ
// 戻り値：なし
// テスト：cerate_cellで値を代入した通りにリストが生成されているか，目視確認した．
void print_list(struct cell *list)
{
	struct cell *p;
	p = list;

	while(p!=0){
		printf("=>%d", p->data);
		p = p->next;
	}

	printf("\n");
}
