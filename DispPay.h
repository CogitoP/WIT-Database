#pragma once


// DispPay dialog

class DispPay : public CDialogEx
{
	DECLARE_DYNAMIC(DispPay)

public:
	DispPay(CWnd* pParent = nullptr);   // standard constructor
	virtual ~DispPay();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_PAY };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CString text_pay;
};
