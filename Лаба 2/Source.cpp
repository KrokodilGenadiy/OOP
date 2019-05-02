// Laba1.cpp: ���������� ����� ����� ��� ����������� ����������.
//
/*
#include "stdafx.h"
#include "stdlib.h"

struct Info
{
	char* Name;
	char* Type;
	char* ScreenName;
};

struct MetaInfo
{
	Info ARR[20];
	int N;
};

class TDvigatel
{
private:
	char* Power;
	char* KPD;
public:
	TDvigatel();
	void ShowInfo();
};

TDvigatel::TDvigatel()
{
	Power = "520 ��������� ���";
	KPD = "83%";
}

void TDvigatel::ShowInfo()
{
	printf("�������� ���������: %s, Power ���: %s \n",Power,KPD);
}

class TAuto
{
protected:
	char* Color;
	char* LoadCapacity;
	char* GosNomer;
	TDvigatel Dvigatel;
public:
	TAuto();
	void ShowInfo();
	void ShowInfoDvigatel();
	MetaInfo* Meta();
};


TAuto::TAuto()
{
	Color = "������";
	LoadCapacity = "300��";
	GosNomer = "8363 ��-7";
}

void TAuto::ShowInfo()
	{
		Dvigatel.ShowInfo();
		printf("����: %s ����������������: %s ���. �����: %s \n",Color,LoadCapacity,GosNomer);
	}


void TAuto::ShowInfoDvigatel()
	{
		Dvigatel.ShowInfo();
	}

MetaInfo* TAuto::Meta()
{
	MetaInfo* PMeta;
	PMeta = (MetaInfo*)malloc(sizeof(MetaInfo));
	(*PMeta).ARR[0].Name = "Color";
	(*PMeta).ARR[0].Type = "char";
	(*PMeta).ARR[0].ScreenName = "���� ������";
	(*PMeta).ARR[1].Name = "LoadCapacity";
	(*PMeta).ARR[1].Type = "char";
	(*PMeta).ARR[1].ScreenName = "����������������";
	(*PMeta).ARR[2].Name = "GosNomer";
	(*PMeta).ARR[2].Type = "char";
	(*PMeta).ARR[2].ScreenName = "���. �����";
	(*PMeta).N = 3;
	return PMeta;
}

class TBortovoy : public TAuto
{
private:
	char* PolnayaMassa;
public:
	TBortovoy();
	void ShowInfo();
	MetaInfo* Meta();
};

TBortovoy::TBortovoy()
{
	PolnayaMassa = "560 ��.";
}

void TBortovoy::ShowInfo()
	{
		TAuto::ShowInfo();
		printf("������ �����: %s\n",PolnayaMassa);
	}

MetaInfo* TBortovoy::Meta()
{
	MetaInfo* PMeta = TAuto::Meta();
	(*PMeta).ARR[3].Name = "PolnayaMassa";
	(*PMeta).ARR[3].Type = "char";
	(*PMeta).ARR[3].ScreenName = "������ �����";
	(*PMeta).N++;
	return PMeta;
}


class TTiagach : public TAuto
{
private:
	char* NagruzkaNaSSU;
public:
	TTiagach();
	void ShowInfo();
	MetaInfo* Meta();
};

TTiagach::TTiagach()
{
	NagruzkaNaSSU= "228 �.";
}

void TTiagach::ShowInfo()
	{
		TAuto::ShowInfo();
		printf("�������� �� ���: %s\n",NagruzkaNaSSU);
	}
MetaInfo* TTiagach::Meta()
{
	MetaInfo* PMeta = TAuto::Meta();
	(*PMeta).ARR[3].Name = "NagruzkaNaSSU";
	(*PMeta).ARR[3].Type = "char";
	(*PMeta).ARR[3].ScreenName = "�������� �� ���";
	(*PMeta).N++;
	return PMeta;
}

class TSamosval : public TAuto
{
protected:
	char* BodyVolume;
public:
	TSamosval();
	void ShowInfo();
	MetaInfo* Meta();
};

TSamosval::TSamosval()
{
	BodyVolume = "300 �^3";
}

void TSamosval::ShowInfo()
	{
		TAuto::ShowInfo();
		printf("����� ������: %s\n",BodyVolume);
	}

MetaInfo* TSamosval::Meta()
{
	MetaInfo* PMeta = TAuto::Meta();
	(*PMeta).ARR[3].Name = "BodyVolume";
	(*PMeta).ARR[3].Type = "char";
	(*PMeta).ARR[3].ScreenName = "����� ������";
	(*PMeta).N++;
	return PMeta;
}
class TSamosval2Osi : public TSamosval
{
private:
	char* Shini;
public:
	TSamosval2Osi();
	void ShowInfo();
	MetaInfo* Meta();
};

TSamosval2Osi::TSamosval2Osi()
{
	Shini = "1";
}


void TSamosval2Osi::ShowInfo()
	{
		TSamosval::ShowInfo();
		printf("��� ����: %s\n",Shini);
	}

MetaInfo* TSamosval2Osi::Meta()
{
	MetaInfo* PMeta = TSamosval::Meta();
	(*PMeta).ARR[4].Name = "Shini";
	(*PMeta).ARR[4].Type = "char";
	(*PMeta).ARR[4].ScreenName = "1";
	(*PMeta).N++;
	return PMeta;
}

class TSamosval3Osi : public TSamosval
{
private:
	char* Shini;	
public:
	TSamosval3Osi();
	void ShowInfo();
	MetaInfo* Meta();
};

TSamosval3Osi::TSamosval3Osi()
{
	Shini = "3";
}

void TSamosval3Osi::ShowInfo()
	{
		TSamosval::ShowInfo();
		printf("��� ����: %s\n",Shini);
	}

MetaInfo* TSamosval3Osi::Meta()
{
	MetaInfo* PMeta = TSamosval::Meta();
	(*PMeta).ARR[4].Name = "Shini";
	(*PMeta).ARR[4].Type = "char";
	(*PMeta).ARR[4].ScreenName = "3";
	(*PMeta).N++;
	return PMeta;
}
int _tmain(int argc, _TCHAR* argv[])
{
	system("chcp 1251");
	system("cls");
	TSamosval3Osi Obj;
	Obj.ShowInfo();
	Obj.ShowInfoDvigatel();
	MetaInfo* p = Obj.Meta();
	getchar();
	return 0;
}

*/
#include "stdafx.cpp"