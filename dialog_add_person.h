// Object Oriented Programming Final Project
// Group: Sergio Pina, Patrick Yepmo, Rafael Barbosa
class dialog_add_person : public CDialogEx
{
	DECLARE_DYNAMIC(dialog_add_person)
public:
	dialog_add_person(CWnd* pParent = nullptr); 
	virtual ~dialog_add_person();

#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_ADD_PERSON };
#endif
protected:
	virtual void Change_Data(CDataExchange* pDX); 

	DECLARE_MESSAGE_MAP()
public:
	int addPerson_option;
};