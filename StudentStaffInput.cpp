// Object Oriented Programming Final Project
// Group: Sergio Pina, Patrick Yepmo, Rafael Barbosa
#include "stdafx.h"
#include "Final_Project.h"
#include "StudentStaffInput.h"
#include "afxdialogex.h"

IMPLEMENT_DYNAMIC(Student_Staff, CDialogEx)

Student_Staff::Student_Staff(CWnd* pParent)
	: CDialogEx(IDD_DIALOG_STUDENT_STAFF, pParent)
	, inName(_T(""))
	, inADD(_T(""))
	, inWnum(_T(""))
	, inHourWorked(_T(""))
	, inSalary(_T(""))
{}

Student_Staff::~Student_Staff(){}

void Student_Staff::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, inName );
	DDX_Text(pDX, IDC_EDIT2, inADD);
	DDX_Text(pDX, IDC_EDIT4, inWnum);
	DDX_Text(pDX, IDC_EDIT3, inHourWorked);
	DDX_Text(pDX, IDC_EDIT5, inSalary);
}

BEGIN_MESSAGE_MAP(Student_Staff, CDialogEx)
END_MESSAGE_MAP()