// stdafx.h: включаемый файл дл€ стандартных системных включаемых файлов
// или включаемых файлов дл€ конкретного проекта, которые часто используютс€, но
// не часто измен€ютс€
#pragma once


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
public:
	char* Power;
	char* KPD;
public:
	TDvigatel();
	void ShowInfo();
	MetaInfo* Meta();
	char* GetProperty(char* PropertyName);
	void SetProperty(char* PropertyName,char* PropertyValue);
};

class TAuto
{
public:
	char* Color;
	char* LoadCapacity;
	char* GosNomer;
	TDvigatel Dvigatel;
public:
	TAuto();
	void ShowInfo();
	void ShowInfoDvigatel();
	virtual MetaInfo* Meta();
	virtual char* GetProperty(char* PropertyName);
	virtual void SetProperty(char* PropertyName,char* PropertyValue);
};

class TBortovoy : public TAuto
{
private:
	char* PolnayaMassa;
public:
	TBortovoy();
	void ShowInfo();
	MetaInfo* Meta();
    char* GetProperty(char* PropertyName);
	void SetProperty(char* PropertyName,char* PropertyValue);
};

class TTiagach : public TAuto
{
private:
	char* NagruzkaNaSSU;
public:
	TTiagach();
	void ShowInfo();
	MetaInfo* Meta();
	char* GetProperty(char* PropertyName);
	void SetProperty(char* PropertyName,char* PropertyValue);
};

class TSamosval : public TAuto
{
protected:
	char* BodyVolume;
public:
	TSamosval();
	void ShowInfo();
	MetaInfo* Meta();
	char* GetProperty(char* PropertyName);
	void SetProperty(char* PropertyName,char* PropertyValue);
};

class TSamosval2Osi : public TSamosval
{
private:
	char* Shini;
public:
	TSamosval2Osi();
	void ShowInfo();
	MetaInfo* Meta();
	char* GetProperty(char* PropertyName);
	void SetProperty(char* PropertyName,char* PropertyValue);
};

class TSamosval3Osi : public TSamosval
{
private:
	char* Shini;	
public:
	TSamosval3Osi();
	void ShowInfo();
	MetaInfo* Meta();
	char* GetProperty(char* PropertyName);
	void SetProperty(char* PropertyName,char*PropertyValue);
};
