// Object Oriented Programming Final Project
// Group: Sergio Pina, Patrick Yepmo, Rafael Barbosa
#ifndef STUDENTSTAFFINPUT_H
#define STUDENTSTAFFINPUT_H
#include "stdafx.h"
#include <string>
using namespace std;

class Student_Staff : public CDialogEx
{
	DECLARE_DYNAMIC(Student_Staff)

public:
	Student_Staff(CWnd* pParent = nullptr);
	virtual ~Student_Staff();

#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_STUDENT_STAFF };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	DECLARE_MESSAGE_MAP()
public:
	CString inName;
	CString inADD;
	CString inWnum;
	CString inHourWorked;
	CString inSalary;
};
#endif