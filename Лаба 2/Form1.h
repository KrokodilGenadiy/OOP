#pragma once
#include "stdafx.h"
#include <string>

namespace CRUD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;


	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			Autos = (TAuto**)malloc(sizeof(TAuto*)*100);
			for(int i = 0;i<100;i++)
				Autos[i] = NULL;
	
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			for(int i = 0;i<100;i++)
			{
				if (Autos[i] != NULL)
					delete Autos[i];
			}
			free(Autos);
			if (components)
			{
				delete components;
			}
		}

	protected: 
	
	private: MetaInfo* TekMeta;
	private: TAuto** Autos;
	private: TAuto* TekAuto;
	private: System::Windows::Forms::DataGridViewRow^ TekRow;

	private: int AutosCounter;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::DataGridView^  dataGridView1;






	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;



	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(554, 33);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 46);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Редактировать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(428, 33);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 46);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Удалить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"Samosval", L"Tiagach", L"Bortovoy", L"Samosval2Osi", 
				L"Samosval3Osi"});
			this->comboBox1->Location = System::Drawing::Point(198, 43);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(195, 28);
			this->comboBox1->TabIndex = 18;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(72, 33);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(94, 46);
			this->button4->TabIndex = 19;
			this->button4->Text = L"Создать";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {this->Column1, 
				this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7});
			this->dataGridView1->Location = System::Drawing::Point(12, 95);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(815, 337);
			this->dataGridView1->TabIndex = 20;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Тип Авто.";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Цвет кузова";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Гос. номер";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Грузподъёмность";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"КПД";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Мощность двиг.";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"TAuto*";
			this->Column7->Name = L"Column7";
			this->Column7->Visible = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(960, 33);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 46);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Обновить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1221, 525);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion 



	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			ClearTekMeta();

			if (TekMeta != NULL)
				return;

			System::Windows::Forms::DataGridViewCell^ Cell = (System::Windows::Forms::DataGridViewCell^)(dataGridView1)->CurrentCell;
			if (!Cell)
			   return;
			int i = Cell->RowIndex;
			int j = (int)dataGridView1->Rows[i]->Cells[6]->Value;
			TekRow = dataGridView1->Rows[i];

			MetaInfo* p = (*Autos[j]).Meta();

			for (int i=0;i<(*p).N;i++)
			{
			System::Windows::Forms::TextBox^  TB = (gcnew System::Windows::Forms::TextBox());
			System::Windows::Forms::Label^ LB = (gcnew System::Windows::Forms::Label());
			LB->Text = gcnew String((*p).ARR[i].ScreenName);
			TB->Name = gcnew String((*p).ARR[i].Name);
			
			LB->Name = gcnew String(i.ToString());
			TB->Location = System::Drawing::Point(660, 100+i*30);
			LB->Location = System::Drawing::Point(560, 100+i*30);
			this->Controls->Add(TB);
			this->Controls->Add(LB);
			}
			for (i = 0;i<(*p).N;i++)
			{
			  
			  System::Windows::Forms::TextBox^ F = safe_cast<System::Windows::Forms::TextBox^>(this->Controls[gcnew String((*p).ARR[i].Name)]);
			  F->Text = gcnew String((*Autos[j]).GetProperty((*p).ARR[i].Name));
			}
			TekMeta = p;
			TekAuto = Autos[j];
			
			 }

	void ClearTekMeta()
	{
		if (TekMeta == NULL)
			return;
		MetaInfo* p = TekMeta;
		
			for (int i=0;i<(*p).N;i++)
			{
              System::Windows::Forms::Label^ k = safe_cast<System::Windows::Forms::Label^>(this->Controls[i.ToString()]);
			  this->Controls->Remove(k);
			  System::Windows::Forms::TextBox^ n = safe_cast<System::Windows::Forms::TextBox^>(this->Controls[gcnew String((*p).ARR[i].Name)]);
			  this->Controls->Remove(n);
			}
			TekMeta = NULL;
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {			   
			
			 }

private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				
				TAuto* Automobile;
				using namespace System;
				array<Byte> ^chars = System::Text::Encoding::ASCII->GetBytes(this->comboBox1->Text);
				pin_ptr<Byte> charsPointer = &(chars[0]);
				char *Typ = reinterpret_cast<char *>(static_cast<unsigned char *>(charsPointer));
				std::string native(Typ, chars->Length);
								
				if (strcmp(Typ,"Samosval")==0)
					 Automobile = new TSamosval;		
				 else if (strcmp(Typ,"Tiagach")==0) 
					 Automobile = new TTiagach;
				 else if (strcmp(Typ,"Bortovoy")==0) 
					 Automobile = new TBortovoy;
				 else if (strcmp(Typ,"Samosval3Osi")==0) 
					 Automobile = new TSamosval3Osi;
				 else if (strcmp(Typ,"Samosval2Osi")==0) 
					 Automobile = new TSamosval2Osi;
				 else 
					 return;
				 
				 int i;
				 for (i=0;i<100;i++)
					if (Autos[i] == NULL)
					{
						Autos[i] = Automobile;
						break;
					}
				if (AutosCounter == 0)
					 AutosCounter = i;
				dataGridView1->Rows->Add();
				dataGridView1->Rows[AutosCounter]->Cells[0]->Value = gcnew String(Typ);
				dataGridView1->Rows[AutosCounter]->Cells[1]->Value = gcnew String((*Automobile).Color);
				dataGridView1->Rows[AutosCounter]->Cells[2]->Value = gcnew String((*Automobile).GosNomer);
				dataGridView1->Rows[AutosCounter]->Cells[3]->Value = gcnew String((*Automobile).LoadCapacity);
				dataGridView1->Rows[AutosCounter]->Cells[4]->Value = gcnew String((*Automobile).Dvigatel.KPD);
				dataGridView1->Rows[AutosCounter]->Cells[5]->Value = gcnew String((*Automobile).Dvigatel.Power);
				int radix = 10;  
				char stroka[20]; 
				char *str;  
				str = itoa(i,stroka,radix);
				dataGridView1->Rows[AutosCounter]->Cells[6]->Value = i;
				AutosCounter++;
		 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
           System::Windows::Forms::DataGridViewCell^ Cell = (System::Windows::Forms::DataGridViewCell^)(dataGridView1)->CurrentCell;
		   if (!Cell)
			   return;
		 
		   int i = Cell->RowIndex;

		   if (TekAuto != NULL)		    
			   if (TekRow->Index == i)
			   return;

		   Autos[i] = NULL;
		   (((System::Windows::Forms::DataGridViewRowCollection^)((dataGridView1)->Rows)))->RemoveAt(i);
		   AutosCounter--;
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 MetaInfo* p = TekMeta;

			for (int i = 0;i<(*p).N;i++)
			{ 
			 System::Windows::Forms::TextBox^ F = safe_cast<System::Windows::Forms::TextBox^>(this->Controls[gcnew String((*p).ARR[i].Name)]);
			char* str2 = (char*)(void*)Marshal::StringToHGlobalAnsi(F->Text);
			(*TekAuto).SetProperty((*p).ARR[i].Name,str2);
			}
			TekRow->Cells[1]->Value = gcnew String((*TekAuto).Color);
			TekRow->Cells[2]->Value = gcnew String((*TekAuto).GosNomer);
			TekRow->Cells[3]->Value = gcnew String((*TekAuto).LoadCapacity);
			TekRow->Cells[4]->Value = gcnew String((*TekAuto).Dvigatel.KPD);
			TekRow->Cells[5]->Value = gcnew String((*TekAuto).Dvigatel.Power);
			
			for (int i=0;i<(*p).N;i++)
			{
              System::Windows::Forms::Label^ k = safe_cast<System::Windows::Forms::Label^>(this->Controls[i.ToString()]);
			  this->Controls->Remove(k);
			  System::Windows::Forms::TextBox^ n = safe_cast<System::Windows::Forms::TextBox^>(this->Controls[gcnew String((*p).ARR[i].Name)]);
			  this->Controls->Remove(n);
			}
			TekAuto = NULL;
		 }
};
}

