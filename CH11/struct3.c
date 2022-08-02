#include <stdio.h>
#include <string.h>

#define EMP_SZ 30

//사용자정의 자료형 선언
typedef struct EMPLOYEE { //태그 네임 : EMPLOYEE
	char name[20]; //맴버(Member) // 20
	int salary; // 4
	float height; // 4
	char comAddr[100]; // 100
}/*emps = { "홍길동", 3500000, 145, "서울시 강남구 100" }*/
EMP;

struct EMPLOYEE emps[EMP_SZ]; //1차원 배열, 열이라고 함.
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
		printf("1. 사원정보 입력\n");
		printf("2. 사원정보 출력\n");
		printf("3. 사원정보 검색\n");
		printf("4. 사원정보 저장\n");
		printf("5. 사원정보 종료\n");
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
		printf("성명 ? (입력종료 : end)");
		gets(emps[i].name);
		if (strcmp(emps[i].name, "end") == 0)
		{
			break;
		}
		printf("월급 ? ");
		scanf("%d", &emps[i].salary);
		printf("키 ? ");
		scanf("%f%*c", &emps[i].height);
		printf("회사주소 ? ");
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
	printf("월급평균: %.2f \n", (float)sum / Cn);
	printf("===========================\n");
}

void emp_find()
{
	//printf("검색함수 \n");
	//검색할 이름을 입력
	//반복입력 아닌경우 Not found
	//end 입력시 종료
	char s_name[20];
	int i, found;//found는 찾기 함수

	while (1)
	{
		printf("\n검색할 성명은 ? (검색종료시:end)");
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
	FILE* fp; //파일 포인터

	//1.스트림 연결
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

	printf("struct3.dat 저장 \n");
}

void emp_load()
{
	FILE* fp; //파일 포인터

	//1.스트림 연결
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

	printf("struct3.dat 로드. \n");
}