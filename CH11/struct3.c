#include <stdio.h>
#include <string.h>

#define EMP_SZ 30

//��������� �ڷ��� ����
typedef struct EMPLOYEE { //�±� ���� : EMPLOYEE
	char name[20]; //�ɹ�(Member) // 20
	int salary; // 4
	float height; // 4
	char comAddr[100]; // 100
}/*emps = { "ȫ�浿", 3500000, 145, "����� ������ 100" }*/
EMP;

struct EMPLOYEE emps[EMP_SZ]; //1���� �迭, ���̶�� ��.
int Cn = 0;

void emp_input();
void emp_output();
void emp_find();
void emp_save();
void emp_load();

int main()
{
	int choice, stop = 1;

	emp_load();

	while (stop)
	{
		printf("1. ������� �Է�\n");
		printf("2. ������� ���\n");
		printf("3. ������� �˻�\n");
		printf("4. ������� ����\n");
		printf("5. ������� ����\n");
		printf("Select?(1~5)\n");
		scanf("%d%*c", &choice);

		switch (choice)
		{
		case 1: emp_input();
			break;
		case 2: emp_output();
			break;
		case 3: emp_find();
			break;
		case 4: emp_save();
			break;
		case 5: stop = 0;
			break;
		}
	}
	printf("End \n");
	
	return 0;
}

void emp_input()
{
	int i;
	for (i = Cn; i < EMP_SZ; i++)
	{
		printf("���� ? (�Է����� : end)");
		gets(emps[i].name);
		if (strcmp(emps[i].name, "end") == 0)
		{
			break;
		}
		printf("���� ? ");
		scanf("%d", &emps[i].salary);
		printf("Ű ? ");
		scanf("%f%*c", &emps[i].height);
		printf("ȸ���ּ� ? ");
		gets(emps[i].comAddr);
	}

	Cn = i;
}

void emp_output()
{
	int i, sum = 0;
	printf("\n");
	for (i = 0; i < Cn; i++)
	{
		printf("%s, %d, %.2f, %s\n",
			emps[i].name, emps[i].salary,
			emps[i].height, emps[i].comAddr);
		sum += emps[i].salary;
	}
	printf("===========================\n");
	printf("�������: %.2f \n", (float)sum / Cn);
	printf("===========================\n");
}

void emp_find()
{
	//printf("�˻��Լ� \n");
	//�˻��� �̸��� �Է�
	//�ݺ��Է� �ƴѰ�� Not found
	//end �Է½� ����
	char s_name[20];
	int i, found;//found�� ã�� �Լ�

	while (1)
	{
		printf("\n�˻��� ������ ? (�˻������:end)");
		gets(s_name);

		if (strcmp(s_name, "end") == 0)
			break;

		found = 1;
		for (i = 0; i < Cn; i++)
		{
			if (strcmp(emps[i].name, s_name) == 0)
			{
				printf("%s, %d, %.2f, %s\n",
					emps[i].name, emps[i].salary,
					emps[i].height, emps[i].comAddr);
				found = 0;
			}

		}

		if (found)
			printf("%s, Not found, \n", s_name);
	}
}

void emp_save()
{
	FILE* fp; //���� ������

	//1.��Ʈ�� ����
	fp = fopen("struct3.dat", "wb");
	if (fp == NULL)
	{
		printf("emp_save() Error\n");
		exit(1);
	}

	//2.save
	fwrite(&Cn, sizeof(Cn), 1, fp);
	fwrite(emps, sizeof(EMP), Cn, fp);

	//3.stream close
	fclose(fp);

	printf("struct3.dat ���� \n");
}

void emp_load()
{
	FILE* fp; //���� ������

	//1.��Ʈ�� ����
	fp = fopen("struct3.dat", "rb");
	if (fp == NULL)
	{
		printf("emp_load() open Error\n");
		return;
	}

	//2.load
	fread(&Cn, sizeof(Cn), 1, fp);
	fread(emps, sizeof(EMP), Cn, fp);

	//3.stream close
	fclose(fp);

	printf("struct3.dat �ε�. \n");
}