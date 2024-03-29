// Object Oriented Programming Final Project
// Group: Sergio Pina, Patrick Yepmo, Rafael Barbosa
#include "stdafx.h"
#include "Final_Project.h"
#include "dialog_add_person.h"
#include "afxdialogex.h"

IMPLEMENT_DYNAMIC(dialog_add_person, CDialogEx)

dialog_add_person::dialog_add_person(CWnd* pParent)
	: CDialogEx(IDD_DIALOG_ADD_PERSON, pParent)
	, addPerson_option(0)
{}

dialog_add_person::~dialog_add_person(){}

void dialog_add_person::Change_Data(CDataExchange* Point)
{
	CDialogEx::DoDataExchange(Point);
	DDX_Radio(Point, IDC_RADIO_ADD_FACULTY, addPerson_option);
}
BEGIN_MESSAGE_MAP(dialog_add_person, CDialogEx)
END_MESSAGE_MAP()