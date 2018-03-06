#include "Password.h"
#include "Sygnalization.h"
#include "Door.h"
#include "Lamp.h"
#pragma once

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		
	private: System::Windows::Forms::Button^  SendTwo;
	private: System::Windows::Forms::ComboBox^  OnLightComboBox;
	private: System::Windows::Forms::ComboBox^  OffLightComboBox;
	private: System::Windows::Forms::Button^  SendSygnal;
	public:
		
		Form1(void)
		{
			InitializeComponent();
		
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}
		Int32 UserPassword;
		Boolean BoolForPassword = false;
		Password Pass;
		Door^ YourDoor=gcnew Door;
		Lamp LampKitchen, LampBedRoom, LampBathRoom, LampLivingRoom;

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  ChangePassword;
	private: System::Windows::Forms::Button^  StopSignalization;
	private: System::Windows::Forms::Button^  OpeningDoor;
	private: System::Windows::Forms::Button^  TurnOnLight;
	private: System::Windows::Forms::Button^  TurnOffLight;
	private: System::Windows::Forms::TextBox^  TypeTextBox;
	private: System::Windows::Forms::TextBox^  ScreenText;
	private: System::Windows::Forms::Button^  Send;

	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		
		void InitializeComponent(void)
		{
			this->ChangePassword = (gcnew System::Windows::Forms::Button());
			this->StopSignalization = (gcnew System::Windows::Forms::Button());
			this->OpeningDoor = (gcnew System::Windows::Forms::Button());
			this->TurnOnLight = (gcnew System::Windows::Forms::Button());
			this->TurnOffLight = (gcnew System::Windows::Forms::Button());
			this->TypeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ScreenText = (gcnew System::Windows::Forms::TextBox());
			this->Send = (gcnew System::Windows::Forms::Button());
			this->SendTwo = (gcnew System::Windows::Forms::Button());
			this->SendSygnal = (gcnew System::Windows::Forms::Button());
			this->OnLightComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->OffLightComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// ChangePassword
			// 
			this->ChangePassword->Location = System::Drawing::Point(290, 30);
			this->ChangePassword->Name = L"ChangePassword";
			this->ChangePassword->Size = System::Drawing::Size(94, 41);
			this->ChangePassword->TabIndex = 0;
			this->ChangePassword->Text = L"Изменить пароль";
			this->ChangePassword->UseVisualStyleBackColor = true;
			this->ChangePassword->Click += gcnew System::EventHandler(this, &Form1::ChangePassword_Click);
			// 
			// StopSignalization
			// 
			this->StopSignalization->Location = System::Drawing::Point(51, 30);
			this->StopSignalization->Name = L"StopSignalization";
			this->StopSignalization->Size = System::Drawing::Size(94, 41);
			this->StopSignalization->TabIndex = 1;
			this->StopSignalization->Text = L"Отключить сигнализацию";
			this->StopSignalization->UseVisualStyleBackColor = true;
			this->StopSignalization->Click += gcnew System::EventHandler(this, &Form1::StopSignalization_Click);
			// 
			// OpeningDoor
			// 
			this->OpeningDoor->Location = System::Drawing::Point(168, 30);
			this->OpeningDoor->Name = L"OpeningDoor";
			this->OpeningDoor->Size = System::Drawing::Size(94, 41);
			this->OpeningDoor->TabIndex = 2;
			this->OpeningDoor->Text = L"Открыть дверь";
			this->OpeningDoor->UseVisualStyleBackColor = true;
			this->OpeningDoor->Click += gcnew System::EventHandler(this, &Form1::OpeningDoor_Click);
			// 
			// TurnOnLight
			// 
			this->TurnOnLight->Location = System::Drawing::Point(51, 104);
			this->TurnOnLight->Name = L"TurnOnLight";
			this->TurnOnLight->Size = System::Drawing::Size(94, 40);
			this->TurnOnLight->TabIndex = 3;
			this->TurnOnLight->Text = L"Включить свет";
			this->TurnOnLight->UseVisualStyleBackColor = true;
			this->TurnOnLight->Click += gcnew System::EventHandler(this, &Form1::OnLight_Click);
			// 
			// TurnOffLight
			// 
			this->TurnOffLight->Location = System::Drawing::Point(168, 104);
			this->TurnOffLight->Name = L"TurnOffLight";
			this->TurnOffLight->Size = System::Drawing::Size(94, 40);
			this->TurnOffLight->TabIndex = 4;
			this->TurnOffLight->Text = L"Выключить свет";
			this->TurnOffLight->UseVisualStyleBackColor = true;
			this->TurnOffLight->Click += gcnew System::EventHandler(this, &Form1::OffLight_Click);
			// 
			// TypeTextBox
			// 
			this->TypeTextBox->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->TypeTextBox->Location = System::Drawing::Point(444, 183);
			this->TypeTextBox->Name = L"TypeTextBox";
			this->TypeTextBox->Size = System::Drawing::Size(326, 20);
			this->TypeTextBox->TabIndex = 5;
			this->TypeTextBox->TextChanged += gcnew System::EventHandler(this, &Form1::TypeTextBox_TextChanged);
			// 
			// ScreenText
			// 
			this->ScreenText->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->ScreenText->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ScreenText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ScreenText->Location = System::Drawing::Point(444, 30);
			this->ScreenText->Multiline = true;
			this->ScreenText->Name = L"ScreenText";
			this->ScreenText->ReadOnly = true;
			this->ScreenText->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->ScreenText->Size = System::Drawing::Size(326, 136);
			this->ScreenText->TabIndex = 6;
			this->ScreenText->Text = L"Добро пожаловать в пульт управления Вашим коттеджем!";
			this->ScreenText->TextChanged += gcnew System::EventHandler(this, &Form1::ScreenText_TextChanged);
			// 
			// Send
			// 
			this->Send->Location = System::Drawing::Point(444, 209);
			this->Send->Name = L"Send";
			this->Send->Size = System::Drawing::Size(94, 40);
			this->Send->TabIndex = 7;
			this->Send->Text = L"Отправить";
			this->Send->UseVisualStyleBackColor = true;
			this->Send->Visible = false;
			this->Send->Click += gcnew System::EventHandler(this, &Form1::Send_ClickOne);
			// 
			// SendTwo
			// 
			this->SendTwo->Location = System::Drawing::Point(444, 209);
			this->SendTwo->Name = L"SendTwo";
			this->SendTwo->Size = System::Drawing::Size(94, 40);
			this->SendTwo->TabIndex = 8;
			this->SendTwo->Text = L"Отправить";
			this->SendTwo->UseVisualStyleBackColor = true;
			this->SendTwo->Visible = false;
			this->SendTwo->Click += gcnew System::EventHandler(this, &Form1::Send_ClickTwo);
			// 
			// SendSygnal
			// 
			this->SendSygnal->Location = System::Drawing::Point(444, 209);
			this->SendSygnal->Name = L"SendSygnal";
			this->SendSygnal->Size = System::Drawing::Size(94, 40);
			this->SendSygnal->TabIndex = 9;
			this->SendSygnal->Text = L"Отправить";
			this->SendSygnal->UseVisualStyleBackColor = true;
			this->SendSygnal->Visible = false;
			this->SendSygnal->Click += gcnew System::EventHandler(this, &Form1::Send_ClickSygnal);
			// 
			// OnLightComboBox
			// 
			this->OnLightComboBox->CausesValidation = false;
			this->OnLightComboBox->FormattingEnabled = true;
			this->OnLightComboBox->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->OnLightComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Гостиная", L"Кухня", L"Спальня", L"Ванная" });
			this->OnLightComboBox->Location = System::Drawing::Point(290, 104);
			this->OnLightComboBox->Name = L"OnLightComboBox";
			this->OnLightComboBox->Size = System::Drawing::Size(133, 21);
			this->OnLightComboBox->TabIndex = 10;
			this->OnLightComboBox->Text = L"Выберите комнату";
			this->OnLightComboBox->Visible = false;
			this->OnLightComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::OnLightComboBox_SelectedIndexChanged);
			// 
			// OffLightComboBox
			// 
			this->OffLightComboBox->FormattingEnabled = true;
			this->OffLightComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Гостиная", L"Кухня", L"Спальня", L"Ванная" });
			this->OffLightComboBox->Location = System::Drawing::Point(290, 123);
			this->OffLightComboBox->Name = L"OffLightComboBox";
			this->OffLightComboBox->Size = System::Drawing::Size(133, 21);
			this->OffLightComboBox->TabIndex = 11;
			this->OffLightComboBox->Text = L"Выберите комнату";
			this->OffLightComboBox->Visible = false;
			this->OffLightComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::OffLightComboBox_SelectedIndexChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::HighlightText;
			this->ClientSize = System::Drawing::Size(783, 257);
			this->Controls->Add(this->OffLightComboBox);
			this->Controls->Add(this->OnLightComboBox);
			this->Controls->Add(this->SendSygnal);
			this->Controls->Add(this->SendTwo);
			this->Controls->Add(this->Send);
			this->Controls->Add(this->ScreenText);
			this->Controls->Add(this->TypeTextBox);
			this->Controls->Add(this->TurnOffLight);
			this->Controls->Add(this->TurnOnLight);
			this->Controls->Add(this->OpeningDoor);
			this->Controls->Add(this->StopSignalization);
			this->Controls->Add(this->ChangePassword);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ваш коттедж";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ChangePassword_Click(System::Object^  sender, System::EventArgs^  e) {
		Send->Visible = true;
		ScreenText->Text = ScreenText->Text + "	Введите старый пароль (Для справки: пароль по умолчанию - 56789):";
	}
	private: System::Void OnLight_Click(System::Object^  sender, System::EventArgs^  e) {
		OnLightComboBox->Visible = true;
		ScreenText->Text = ScreenText->Text + "	Выберите комнату, где хотите включить свет.";
	}
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void StopSignalization_Click(System::Object^  sender, System::EventArgs^  e) {
		SendSygnal->Visible = true;
		ScreenText->Text = ScreenText->Text + "	Введите пароль:";
	}
	private: System::Void ScreenText_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void TypeTextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void OpeningDoor_Click(System::Object^  sender, System::EventArgs^  e) {
		YourDoor->OpenDoor(YourDoor->CheckSygnal());
		if (Convert::ToBoolean(YourDoor->GetDoorClose()) == false) {
			ScreenText->Text = ScreenText->Text + "	Дверь открыта.";
		}
		else {
			ScreenText->Text = ScreenText->Text + "	Дверь не открыта. Сигнализация не отключена.";
		}
	}
	private: System::Void Send_ClickOne(System::Object^  sender, System::EventArgs^  e) {
		UserPassword = Convert::ToInt32(TypeTextBox->Text);
		TypeTextBox->Text = "";
		BoolForPassword = Pass.CheckPassword(UserPassword);
		if (BoolForPassword == true) { 

		    ScreenText->Text=ScreenText->Text+"	Пароль введен верно. Введите новый пароль. ";
			SendTwo->Visible = true;
		}
		else {
			ScreenText->Text = ScreenText->Text + "	Старый пароль был введен неверно. Пароль не был изменен. ";
		}
		Send->Visible = false;
	}
	private: System::Void Send_ClickTwo(System::Object^  sender, System::EventArgs^  e) {
		UserPassword = Convert::ToInt32(TypeTextBox->Text);
		Pass.ChangePassword(UserPassword);
		YourDoor->Sygnal.ChangePassword(UserPassword);
		TypeTextBox->Text = "";
		ScreenText->Text = ScreenText->Text + "	Пароль был успешно изменен. ";
		SendTwo->Visible = false;
	}
private: System::Void Send_ClickSygnal(System::Object^  sender, System::EventArgs^  e) {
	UserPassword = Convert::ToInt32(TypeTextBox->Text);
	TypeTextBox->Text = "";
	SendSygnal->Visible = false;
	BoolForPassword = Pass.CheckPassword(UserPassword);
	if (BoolForPassword == true) {

		ScreenText->Text = ScreenText->Text + "	Пароль введен верно. Сигнализация отключена. ";
		YourDoor->Sygnal.ChangeState(BoolForPassword);
	}
	else {
		YourDoor->Sygnal.ChangeState(BoolForPassword);
		ScreenText->Text = ScreenText->Text + "	Пароль был введен неверно. Сигнализация не отключена. ";
	}
}
private: System::Void OffLight_Click(System::Object^  sender, System::EventArgs^  e) {
	OffLightComboBox->Visible = true;
	ScreenText->Text = ScreenText->Text + "	Выберите комнату, где хотите выключить свет. ";
}
private: System::Void OnLightComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (OnLightComboBox->Text=="Гостиная") {
		LampLivingRoom.LampOn(YourDoor);
		if (LampLivingRoom.GetLampState()==true)
		ScreenText->Text = ScreenText->Text + "	Свет в гостиной включен. ";
		else ScreenText->Text = ScreenText->Text + "	Свет в гостиной не включен. Вы не открыли дверь. Доступ запрещен.";
	}
	else {
		if (OnLightComboBox->Text=="Ванная") {
			LampBathRoom.LampOn(YourDoor);
			if (LampBathRoom.GetLampState() == true)
			ScreenText->Text = ScreenText->Text + "	Свет в ванной комнате включен. ";
			else ScreenText->Text = ScreenText->Text + "	Свет в ванной комнате не включен. Вы не открыли дверь. Доступ запрещен.";
		}
		else {
			if (OnLightComboBox->Text=="Кухня") {
				LampKitchen.LampOn(YourDoor);
				if (LampKitchen.GetLampState() == true)
				ScreenText->Text = ScreenText->Text + "	Свет в кухне включен. ";
				else ScreenText->Text = ScreenText->Text + "	Свет в кухне не включен. Вы не открыли дверь. Доступ запрещен.";
			}
			else {
				LampBedRoom.LampOn(YourDoor);
				if (LampBedRoom.GetLampState() == true)
				ScreenText->Text = ScreenText->Text + "	Свет в спальне включен. ";
				else ScreenText->Text = ScreenText->Text + "	Свет в спальне не включен. Вы не открыли дверь. Доступ запрещен.";;
			}
		}
	}
	OnLightComboBox->Visible = false;
}
private: System::Void OffLightComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (OffLightComboBox->Text == "Гостиная") {
		LampLivingRoom.LampOff(YourDoor);
		if (LampLivingRoom.GetLampState() == false)
			ScreenText->Text = ScreenText->Text + "	Свет в гостиной выключен. ";
		else ScreenText->Text = ScreenText->Text + "	Свет в гостиной не выключен.";
	}
	else {
		if (OffLightComboBox->Text == "Ванная") {
			LampBathRoom.LampOff(YourDoor);
			if (LampBathRoom.GetLampState() == false)
				ScreenText->Text = ScreenText->Text + "	Свет в ванной комнате выключен. ";
			else ScreenText->Text = ScreenText->Text + "	Свет в ванной комнате не выключен.";
		}
		else {
			if (OffLightComboBox->Text == "Кухня") {
				LampKitchen.LampOff(YourDoor);
				if (LampKitchen.GetLampState() == false)
					ScreenText->Text = ScreenText->Text + "	Свет в кухне выключен. ";
				else ScreenText->Text = ScreenText->Text + "	Свет в кухне не выключен.";
			}
			else {
				LampBedRoom.LampOff(YourDoor);
				if (LampBedRoom.GetLampState() == false)
					ScreenText->Text = ScreenText->Text + "	Свет в спальне выключен. ";
				else ScreenText->Text = ScreenText->Text + "	Свет в спальне не выключен. ";;
			}
		}
	}
	OffLightComboBox->Visible = false;
}
};
}