#include<stdio.h>

// ���K 5-3

// �y�e�X�g�z
// ���X�gA�̊T�v
// ���e�F=>1(address:4223120)=>5(address:4223112)=>2(address:4223104)
// �����F3
// ���X�gB�̊T�v
// ���e�F=>4(address:4223144)=>6(address:4223136)=>3(address:4223128)
// �����F3
// �Ƃ���D

// 1)
// �K�؂Ƀ��X�g����������Ă��邱�Ƃ��m�F���邽�߂ɁC
// append�Ōq�������X�g��print_list�ŊJ�������D����ƁC
// =>1(address:4223168)=>5(address:4223160)=>2(address:4223152)=>4(address:4223144)=>6(address:4223136)=>3(address:4223128)
// �ƂȂ����D�A�h���X������ƁC�R�s�[���ꂽ���X�gA���K�؂Ƀ��X�gB�ƌ�������Ă��邱�Ƃ�������C
// �v���O���������̍��ڂ𖞂������Ƃ��m�F�ł����D

// 2)
// ���X�gA�̓��e��ύX�����C�K�؂Ƀ��X�g����������Ă��邩�m�F���邽�߂ɁC
// �Q�̃��X�g�������������̂���,
// ���X�gA+B�C���X�gA�C���X�gB��print_list�ŊJ���D����ƁC
// ���X�gA+B�F=>1(adress:4223168)=>5(adress:4223160)=>2(adress:4223152)=>4(adress:4223144)=>6(adress:4223136)=>3(adress:4223128)
// ���X�gA�F=>1(address:4223120)=>5(address:4223112)=>2(address:4223104)
// ���X�gB�F=>4(address:4223144)=>6(address:4223136)=>3(address:4223128)
// �ƂȂ�C���X�gA�̓��e��ύX�����C�K�؂Ƀ��X�g����������Ă��邱�Ƃ����������D

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
struct cell *tail_list(struct cell *list);
struct cell *concat(struct cell *list_A, struct cell *list_B);
struct cell *copy(struct cell *list);
struct cell *append(struct cell *list_A, struct cell *list_B);
int main(void)
{
	struct cell *cell_A1, *cell_A2, *cell_A3;	// ���X�gA�̊e�Z���̃|�C���^
	struct cell *cell_B1, *cell_B2, *cell_B3;	// ���X�gB�̊e�Z���̃|�C���^
	struct cell *concat_list;		// ���X�gA�ƃ��X�gB���q�����킹�����X�g�̐擪�̃Z���̃|�C���^
	int length_A, length_B, concat_length;		// ���X�gA, ���X�gB, ���X�gA�ƃ��X�gB���q�����킹�����X�g�̒�����ۑ�����ϐ�

	// �P�ڂ̃��X�g�̐���
	cell_A1 = create_cell(2, 0);
	cell_A2 = create_cell(5, cell_A1);
	cell_A3 = create_cell(1, cell_A2);
	length_A = list_length(cell_A3);

	// �Q�ڂ̃��X�g�̐���
	cell_B1 = create_cell(3, 0);
	cell_B2 = create_cell(6, cell_B1);
	cell_B3 = create_cell(4, cell_B2);
	length_B = list_length(cell_B3);

	printf("���X�gA�̊T�v\n");
	printf("���e�F\n");
	print_list(cell_A3);
	printf("�����F%d\n\n", length_A);

	printf("���X�gB�̊T�v\n");
	printf("���e�F\n");
	print_list(cell_B3);
	printf("�����F%d\n\n", length_B);

	printf("���X�gA+B�̊T�v\n");
	printf("���e�F\n");

	concat_list = append(cell_A3, cell_B3);
	print_list(concat_list);

	// ���X�gA�̓��e��ύX�����C�K�؂Ƀ��X�g����������Ă��邩�m�F���邽�߂̕\��
	// print_list(cell_A3);
	// print_list(cell_B3);

	concat_length = list_length(concat_list);
	printf("�����F%d\n", concat_length);

	return 0;
}

// �|�C���^�𗘗p���ăZ�����쐬����֐�
// �����F�\����cell�̃����o�[�ł���data�ƁC�|�C���^��next
// �߂�l�F�쐬�����Z���̍\���̂̃|�C���^
// ���l�Fpool�ɂ�����Z���̓Y�������X�V���邽�߂ɁC�O���[�o���ϐ� *new_cell��p����D
// �e�X�g�Fprint_list�Ƀ��X�g�̐擪�̃Z���̃|�C���^��n�����Ƃɂ���ă��X�g��
//        ���e�̊J�����邱�ƂŁC�K�؂ɃZ�����쐬����Ă��邱�Ƃ��m�F
struct cell *create_cell(int data, struct cell *next){
	struct cell *old_index;		// �߂�l�̍\����cell��ۑ����邽�߂̕ϐ�
	old_index = new_cell;

	old_index->data = data;
	old_index->next = next;

	new_cell++;
	return old_index;
}

// ���X�g���J��Ԃ��ɂ���Ă��ǂ�C�e�Z����data�����o�[��\������֐� print_list
// �����F�܂�擪�̃Z���̃|�C���^
// �߂�l�F�Ȃ�
// �e�X�g�Fcerate_cell�Œl���������ʂ�Ƀ��X�g����������Ă��邩�C�ڎ��m�F�����D
void print_list(struct cell *list)
{
	while(list!=0){
		printf("=>%d", list->data);
		printf("(address:%d)", list);
		list = list->next;
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
	else return 1 + list_length(list->next);
}

// ���X�g�̍Ō�̃Z���̃|�C���^��������֐� tail_list
// �����F���X�g�̐擪�̃Z���̃|�C���^ list
// �߂�l�F���X�g�̍Ō�̃Z���̃|�C���^
// �e�X�g�Fmain�ŌĂяo���C���X�g�̃|�C���^�ƏƂ炵���킹�C�K�؂ȏ������s���Ă��邩�m�F�����D
struct cell *tail_list(struct cell *list)
{
	if (list->next == 0) return list;
	else tail_list(list->next);
}

// �Q�̃��X�g���󂯎��C��P�����̃��X�g�ɑ�Q�����̃��X�g��A������֐� concat
// �����F�Q�̃��X�g�̐擪�̃Z���̃|�C���^ list_A�Clist_B
// �߂�l�F�q�������X�g�̐擪�̃Z���̃|�C���^
// �e�X�g�Fprint_list�ɖ߂�l��n�����Ƃɂ���ă��X�g��
//        ���e�̊J�����C�K�؂ɃZ������������Ă��邱�Ƃ��m�F�����D
struct cell *concat(struct cell *list_A, struct cell *list_B)
{
	struct cell *tail_cell = tail_list(list_A);
	tail_cell->next = list_B;
	return list_A;
}

// ���郊�X�g�������Ƃ��ė^����ꂽ�Ƃ��C������R�s�[����֐� copy
// �����F���X�g�̐擪�̃Z���̃|�C���^
// �߂�l�F�R�s�[�������X�g�̍Ō�̃Z���̃|�C���^
// �e�X�g�F�ŏI�I��append�̖߂�l��print_list�ɖ߂�l��n�����Ƃɂ���ă��X�g��
//        ���e�̊J�����C�K�؂ɃZ������������Ă��邱�Ƃ��m�F�����D
struct cell *copy(struct cell *list)
{
	if (list == 0) return 0;
	else return create_cell(list->data, copy(list->next));
}

// concat�ɂ������P�����̃��X�g���ύX����Ȃ��悤�ɂQ�̃��X�g����������֐� append
// �����F�Q�̃��X�g�̐擪�̃Z���̃|�C���^ list_A�Clist_B
// �߂�l�F�q�������X�g�̐擪�̃Z���̃|�C���^��Ԃ����C����0�̃��X�g����P�����ɂ���Ƃ��C���̂܂�list_B�̐擪�̃Z����Ԃ��D
// �e�X�g�F�߂�l��print_list�ɖ߂�l��n�����Ƃɂ���ă��X�g��
//        ���e�̊J�����C�K�؂ɃZ������������Ă��邱�Ƃ��m�F�����D
struct cell *append(struct cell *list_A, struct cell *list_B)
{
	if (list_A==0) return list_B;
	else return concat(copy(list_A), list_B);
}
