// Object Oriented Programming Final Project
// Group: Sergio Pina, Patrick Yepmo, Rafael Barbosa
#ifndef CFINALPROJECTDLG_H
#define CFINALPROJECTDLG_H
#include <vector>
using namespace std;
#include "witPerson.h"

class CFinalProjectDlg : public CDialogEx
{
public:
	CFinalProjectDlg(CWnd* pParent = nullptr);

#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FINAL_PROJECT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);

protected:
	HICON m_hIcon;
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	vector<WITPerson*>persons;
	afx_msg void OnBnClickedButtonAddPerson();
	afx_msg void OnBnClickedButtonDisplay();
	CString text_disp;
};
#endif