#include <stdio.h>
#include <string.h>
#include <time.h>

// text_lenがpat_lenに対して十分に長く、最悪の計算量の場合

#define MIN_TEXT_LEN 1000
#define MAX_TEXT_LEN 10000
#define PAT_LEN 10
#define STR_LEN 10
#define DATA_SIZE 901 // 100間隔の10000 ~ 100000の数、つまり901個のn
#define CALC_TIME 1000

// 初期値は10000文字とする
char text[MAX_TEXT_LEN+1];

char pattern[PAT_LEN+1];

// textの文字列を増やすための文字列
char str[STR_LEN+1];

// 途中のnの値を入れる変数
int N_SIZE;

void str_search();
void generate_str();
void R_print(int *n, double *sec);
int main()
{
	// n = 10100 ~ 100000(100間隔)を入れる配列
	int n[DATA_SIZE];

	// n = 10100 ~ 100000(100間隔)における実行時間を入れる配列
	double sec[DATA_SIZE];

	int i, j;
	int start, end;
	double cputime;
    double sectime;

	generate_str();

	// DATA_SIZE個の配列データ(nと実行時間)を取得する
	for (i=0; i<DATA_SIZE; i++) {
		N_SIZE = strlen(text);
		printf("text length: %d\n", N_SIZE);

		// 実行の測定(10000回行い、その平均をとる)
		start = clock();
		for (j=0; j<CALC_TIME; j++){
			str_search();
		}
		end = clock();

		cputime = (double)(end-start)/CALC_TIME;
        sectime = cputime/CLOCKS_PER_SEC;

		printf("%f\n\n", sectime);

		// Rに入力するための配列に入れる
		n[i] = N_SIZE;
		sec[i] = sectime;

		// textの文字列を増やす(nを増やす)
		strcat(text, str);
	}

	R_print(n, sec);

	return 0;
}

void str_search() {
	int i = 0;
	int j = 0;
	while (i < N_SIZE && j < PAT_LEN) {
		if (text[i] == pattern[j]) {
			// printf("text[%d] = pattern[%d]\n", i, j);
			i++;
			j++;
		} else {
			// printf("-----------text[%d] != pattern[%d]------------\n", i, j);
			i = i - j + 1;
			j = 0;
		}
	}
	return;
}

void generate_str() {
	int i;
		// textの文字列の生成 "aaaa....aaaa"(10000文字)
	for (i=0; i<MIN_TEXT_LEN; i++) {
		strcat(text, "a");
	}

	printf("length: %d, %s\n", strlen(text), text);

	// patternの文字列の生成 "aaaaaaaaab"(10文字)
	for (i=0; i<PAT_LEN; i++) {
		strcat(pattern, "a");
	}

	printf("length: %d, %s\n", strlen(pattern), pattern);

	// strの文字列の生成 "aaa....aaa" (100文字)

		for (i=0; i<STR_LEN; i++) {
		strcat(str, "a");
	}

	printf("length: %d, %s\n", strlen(str), str);
}

void R_print(int *n, double *sec) {
	int i;
		// Rにそのままコピペできるように、データを表示
	printf("x <- c(");

	for(i=0; i<DATA_SIZE; i++) {
		if (i==DATA_SIZE-1) printf("%d)\n", n[i]);
		else printf("%d, ", n[i]);
	}

	printf("y <- c(");

	for(i=0; i<DATA_SIZE; i++) {
		if (i==DATA_SIZE-1) printf("%f)\n", sec[i]);
		else printf("%f, ", sec[i]);
	}
}
