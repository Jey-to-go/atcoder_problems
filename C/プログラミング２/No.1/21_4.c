#include<stdio.h>

// ���K 4

// �\���̂̐錾
struct cell {
	int data;
	struct cell *next;
};

// �\���� cell�̑傫��1000�̔z��̐錾
struct cell cell_pool[1000];

// �����l��cell_pool[0]�ւ̃|�C���^�ł���Cstruct cell�̃|�C���^�̐錾
struct cell *new_cell = &cell_pool[0];


struct cell *create_cell(int data, struct cell *next);
void print_list(struct cell *list);
int list_length(struct cell *list);
struct cell *search_list(int key, struct cell *list);
int main(void)
{
	int x;
	struct cell *z;
	struct cell *cell1, *cell2, *cell3;
	cell1 = create_cell(2, 0);
	cell2 = create_cell(5, cell1);
	cell3 = create_cell(1, cell2);

	print_list(cell3);
	printf("�T���Ă���l����͂��Ă��������F");
	scanf("%d", &x);

	z = search_list(x, cell3);
	printf("%d\n", z);

	return 0;
}


// �|�C���^�𗘗p���ăZ�����쐬����֐�
// �����F�\����cell�̃����o�[�ł���data�ƁC�|�C���^��next
// �߂�l�F�쐬�����Z���̍\���̂̃|�C���^
// ���l�Fpool�ɂ�����Z���̓Y�������X�V���邽�߂ɁC�O���[�o���ϐ� *new_cell��p����D
// �e�X�g�Fprint_list�Ƀ��X�g�̐擪�̃Z���̃|�C���^��n�����Ƃɂ���ă��X�g��
//        ���e�̊J�����邱�ƂŁC�K�؂ɃZ�����쐬����Ă��邱�Ƃ��m�F
struct cell *create_cell(int data, struct cell *next){
	struct cell *old_index;
	old_index = new_cell;

	old_index->data = data;
	old_index->next = next;

	new_cell++;
	return old_index;
}

// ���X�g���J��Ԃ��ɂ���Ă��ǂ�C�e�Z����data�����o�[��\������֐� print_list
// �����F�܂�擪�̃Z���̃|�C���^
// �߂�l�F�Ȃ�
// ���l�F�e�X�g�̂��߂ɁC�e�Z���̃|�C���^�������ɕ\�������D
// �e�X�g�Fcerate_cell�Œl���������ʂ�Ƀ��X�g����������Ă��邩�C�ڎ��m�F�����D
void print_list(struct cell *list)
{
	struct cell *p;
	p = list;

	while(p!=0){
		printf("=>%d", p->data);
		printf("(next:%d)", p->next);
		p = p->next;
	}

	printf("\n");
}

// ���X�g�̒����𐔂���ċA�֐� list_length
// �����F���X�g�̐擪�̃Z���̃|�C���^ list
// �߂�l�F���X�g�̒���
// �e�X�g�Fmain�ŌĂяo���C���ۂ̃��X�g�̑傫���ƏƂ炵���킹�āC�K�؂ȏ������s���Ă��邩�m�F�����D
int list_length(struct cell *list)
{
	if (list == 0) return 0;
	else {
		return 1 + list_length(list->next);
	}
}

// ����l�����X�g�̒��ɂ�������C���̒l���܂ރZ���̃|�C���^��Ԃ��ċA�֐� search_list
// �����F���X�g�̐擪�̃Z���̓Y���� cell �ƁC����l key
// �߂�l�F����l key ���܂ރZ���̓Y�����C����l��������Ȃ������ꍇ�C0��Ԃ�
// �e�X�g�Fmain�ŌĂяo���C���X�g�̒l�ƏƂ炵���킹�C�K�؂ȏ������s���Ă��邩�m�F�����D
struct cell *search_list(int key, struct cell *list)
{
	if (list == 0) return 0;
	else {
		if (list->data == key){
			return list;
		}
		search_list(key, list->next);
	}
}
