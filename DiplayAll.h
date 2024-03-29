// Object Oriented Programming Final Project
// Group: Sergio Pina, Patrick Yepmo, Rafael Barbosa
#ifndef DISPLAYALL_H
#define DISPLAYALL_H
using namespace std;
#include<vector>
#include "witPerson.h"

class DiplayAll : public CDialogEx
{
	DECLARE_DYNAMIC(DiplayAll)

public:
	DiplayAll(CWnd* pParent = nullptr); 
	virtual ~DiplayAll();

#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_DISPLAY };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX); 

	DECLARE_MESSAGE_MAP()
public:
	int entry;
	CString dispName;
	CString dispAdd;
	CString dispWnum;
	CString dispRole;
	afx_msg void payButton();
	afx_msg void Click_Done();
	afx_msg void Click_Next();
	vector<WITPerson*>dispPersons;
};
#endif