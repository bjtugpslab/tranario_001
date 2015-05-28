// Network.cpp : implementation file
//

#include "stdafx.h"
#include "tranario.h"
#include "Network.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CNetwork dialog

IMPLEMENT_DYNCREATE(CNetwork,CDialog)
CNetwork::CNetwork(CWnd* pParent /*=NULL*/)
	: CDialog(CNetwork::IDD, pParent)
{
	//{{AFX_DATA_INIT(CNetwork)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CNetwork::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CNetwork)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CNetwork, CDialog)
	//{{AFX_MSG_MAP(CNetwork)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CNetwork message handlers
