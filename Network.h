#if !defined(AFX_NETWORK_H__F4F5CAA3_FB05_437A_813D_E1D6D460FDB2__INCLUDED_)
#define AFX_NETWORK_H__F4F5CAA3_FB05_437A_813D_E1D6D460FDB2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Network.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CNetwork dialog

class CNetwork : public CDialog
{
// Construction
public:
	CNetwork(CWnd* pParent = NULL);   // standard constructor
	DECLARE_DYNCREATE(CNetwork)
// Dialog Data
	//{{AFX_DATA(CNetwork)
	enum { IDD = IDD_TRANARIO_NETWORK };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNetwork)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CNetwork)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NETWORK_H__F4F5CAA3_FB05_437A_813D_E1D6D460FDB2__INCLUDED_)
