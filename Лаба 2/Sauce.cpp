// Laba1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "stdlib.h"
#include <string>


TDvigatel::TDvigatel()
{
	Power = "520 ��������� ���";
	KPD = "83%";
}

void TDvigatel::ShowInfo()
{
	//printf("�������� ���������: %s, Power ���: %s \n",Power,KPD);
}

MetaInfo* TDvigatel::Meta()
{
	MetaInfo* PMeta;
	PMeta = (MetaInfo*)malloc(sizeof(MetaInfo));
	(*PMeta).ARR[0].Name = "Power";
	(*PMeta).ARR[0].Type = "char";
	(*PMeta).ARR[0].ScreenName = "�������� ���������";
	(*PMeta).ARR[1].Name = "KPD";
	(*PMeta).ARR[1].Type = "char";
	(*PMeta).ARR[1].ScreenName = "���";
	(*PMeta).N = 2;
	return PMeta;
}

char* TDvigatel::GetProperty(char* PropertyName)
{
	if (strcmp(PropertyName,"Power")==0)
		return Power;
	if (strcmp(PropertyName,"KPD")==0)
		return KPD;	
}

void TDvigatel::SetProperty(char* PropertyName,char* PropertyValue)
{
	if (strcmp(PropertyName,"Power")==0)
	{
		Power = PropertyValue;
		return;
	}

	if (strcmp(PropertyName,"KPD")==0)
	{
		KPD = PropertyValue;
		return;
	}

	
//	TAuto::SetProperty(PropertyName,PropertyValue);
}

TBortovoy::TBortovoy()
{
	PolnayaMassa = "560 ��.";
}

void TBortovoy::ShowInfo()
	{
		TAuto::ShowInfo();
		//printf("������ �����: %s\n",PolnayaMassa);
	}



TAuto::TAuto()
{
	Color = "������";
	LoadCapacity = "300��";
	GosNomer = "8363 ��-7";
}

void TAuto::ShowInfo()
	{
		Dvigatel.ShowInfo();
		//printf("����: %s ����������������: %s ���. �����: %s \n",Color,LoadCapacity,GosNomer);
	}


void TAuto::ShowInfoDvigatel()
	{
		Dvigatel.ShowInfo();
	}

MetaInfo* TAuto::Meta()
{
	MetaInfo* PMeta = Dvigatel.Meta();
	(*PMeta).ARR[2].Name = "Color";
	(*PMeta).ARR[2].Type = "char";
	(*PMeta).ARR[2].ScreenName = "���� ������";
	(*PMeta).ARR[3].Name = "LoadCapacity";
	(*PMeta).ARR[3].Type = "char";
	(*PMeta).ARR[3].ScreenName = "����������������";
	(*PMeta).ARR[4].Name = "GosNomer";
	(*PMeta).ARR[4].Type = "char";
	(*PMeta).ARR[4].ScreenName = "���. �����";
	(*PMeta).N = 5;
	return PMeta;
}

char* TAuto::GetProperty(char* PropertyName)
{
	if (strcmp(PropertyName,"Color")==0)
		return Color;
	if (strcmp(PropertyName,"LoadCapacity")==0)
		return LoadCapacity;
	if (strcmp(PropertyName,"GosNomer")==0)
		return GosNomer;	
	return Dvigatel.GetProperty(PropertyName);
}

void TAuto::SetProperty(char* PropertyName,char* PropertyValue)
{
	if (strcmp(PropertyName,"Color")==0)
	{
		Color = PropertyValue;
		return;
	}

	if (strcmp(PropertyName,"LoadCapacity")==0)
	{
		LoadCapacity = PropertyValue;
		return;
	}

	if (strcmp(PropertyName,"GosNomer")==0)
	{
		GosNomer = PropertyValue;
		return;
	}
	
	Dvigatel.SetProperty(PropertyName,PropertyValue);
}


MetaInfo* TBortovoy::Meta()
{
	MetaInfo* PMeta = TAuto::Meta();
	(*PMeta).ARR[5].Name = "PolnayaMassa";
	(*PMeta).ARR[5].Type = "char";
	(*PMeta).ARR[5].ScreenName = "������ �����";
	(*PMeta).N++;
	return PMeta;
}

char* TBortovoy::GetProperty(char* PropertyName)
{
	if (strcmp(PropertyName,"PolnayaMassa")==0)
		return PolnayaMassa;

	return TAuto::GetProperty(PropertyName);
}

void TBortovoy::SetProperty(char* PropertyName,char* PropertyValue)
{
	if (strcmp(PropertyName,"PolnayaMassa")==0)
	{
		PolnayaMassa = PropertyValue;
		return;
	}
	
	TAuto::SetProperty(PropertyName,PropertyValue);
}


TTiagach::TTiagach()
{
	NagruzkaNaSSU= "228 �.";
}

void TTiagach::ShowInfo()
	{
		TAuto::ShowInfo();
		//printf("�������� �� ���: %s\n",NagruzkaNaSSU);
	}
MetaInfo* TTiagach::Meta()
{
	MetaInfo* PMeta = TAuto::Meta();
	(*PMeta).ARR[5].Name = "NagruzkaNaSSU";
	(*PMeta).ARR[5].Type = "char";
	(*PMeta).ARR[5].ScreenName = "�������� �� ���";
	(*PMeta).N++;
	return PMeta;
}

char* TTiagach::GetProperty(char* PropertyName)
{
	if (strcmp(PropertyName,"NagruzkaNaSSU")==0)
		return NagruzkaNaSSU;

	return TAuto::GetProperty(PropertyName);
}

void TTiagach::SetProperty(char* PropertyName,char* PropertyValue)
{
	if (strcmp(PropertyName,"NagruzkaNaSSU")==0)
	{
		NagruzkaNaSSU = PropertyValue;
		return;
	}
	
	TAuto::SetProperty(PropertyName,PropertyValue);
}


TSamosval::TSamosval()
{
	BodyVolume = "300 �^3";
}

void TSamosval::ShowInfo()
	{
		TAuto::ShowInfo();
		//printf("����� ������: %s\n",BodyVolume);
	}

MetaInfo* TSamosval::Meta()
{
	MetaInfo* PMeta = TAuto::Meta();
	(*PMeta).ARR[5].Name = "BodyVolume";
	(*PMeta).ARR[5].Type = "char";
	(*PMeta).ARR[5].ScreenName = "����� ������";
	(*PMeta).N++;
	return PMeta;
}

char* TSamosval::GetProperty(char* PropertyName)
{
	if (strcmp(PropertyName,"BodyVolume")==0)
		return BodyVolume;

	return TAuto::GetProperty(PropertyName);
}

void TSamosval::SetProperty(char* PropertyName,char* PropertyValue)
{
	if (strcmp(PropertyName,"BodyVolume")==0)
	{
		BodyVolume = PropertyValue;
		return;
	}
	
	TAuto::SetProperty(PropertyName, PropertyValue);
}


TSamosval2Osi::TSamosval2Osi()
{
	Shini = "1";
}


void TSamosval2Osi::ShowInfo()
	{
		TSamosval::ShowInfo();
		//printf("��� ����: %s\n",Shini);
	}

MetaInfo* TSamosval2Osi::Meta()
{
	MetaInfo* PMeta = TSamosval::Meta();
	(*PMeta).ARR[6].Name = "Shini";
	(*PMeta).ARR[6].Type = "char";
	(*PMeta).ARR[6].ScreenName = "����";
	(*PMeta).N++;
	return PMeta;
}

char* TSamosval2Osi::GetProperty(char* PropertyName)
{
	if (strcmp(PropertyName,"Shini")==0)
		return Shini;

	return TSamosval::GetProperty(PropertyName);
}

void TSamosval2Osi::SetProperty(char* PropertyName, char*PropertyValue)
{
	if (strcmp(PropertyName,"Shini")==0)
	{
		Shini = PropertyValue;
		return;
	}
	
	TSamosval::SetProperty(PropertyName,PropertyValue);
}


TSamosval3Osi::TSamosval3Osi()
{
	Shini = "3";
}

void TSamosval3Osi::ShowInfo()
	{
		TSamosval::ShowInfo();
		//printf("��� ����: %s\n",Shini);
	}

MetaInfo* TSamosval3Osi::Meta()
{
	MetaInfo* PMeta = TSamosval::Meta();
	(*PMeta).ARR[6].Name = "Shini";
	(*PMeta).ARR[6].Type = "char";
	(*PMeta).ARR[6].ScreenName = "����";
	(*PMeta).N++;
	return PMeta;
}

char* TSamosval3Osi::GetProperty(char* PropertyName)
{
	if (strcmp(PropertyName,"Shini")==0)
		return Shini;

	return TSamosval::GetProperty(PropertyName);
}

void TSamosval3Osi::SetProperty(char* PropertyName,char* PropertyValue)
{
	if (strcmp(PropertyName,"Shini")==0)
	{
		Shini = PropertyValue;
		return;
	}
	
	TSamosval::SetProperty(PropertyName,PropertyValue);
}


