// Object Oriented Programming Final Project
// Group: Sergio Pina, Patrick Yepmo, Rafael Barbosa
#include "stdafx.h"
#include "Final_Project.h"
#include "FacultyInput.h"

IMPLEMENT_DYNAMIC(FacultyInput, CDialogEx)

FacultyInput::FacultyInput(CWnd* pParent)
	: CDialogEx(IDD_DIALOG_FACULTY, pParent)
	, Fname(_T(""))
	, Faddress(_T(""))
	, FWnum(_T(""))
	, FSalary(_T(""))
{}

FacultyInput::~FacultyInput(){}

void FacultyInput::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, Fname);
	DDX_Text(pDX, IDC_EDIT2, Faddress);
	DDX_Text(pDX, IDC_EDIT4, FWnum);
	DDX_Text(pDX, IDC_EDIT5, FSalary);
}

BEGIN_MESSAGE_MAP(FacultyInput, CDialogEx)
END_MESSAGE_MAP()