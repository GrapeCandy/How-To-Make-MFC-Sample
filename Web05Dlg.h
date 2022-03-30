// Web05Dlg.h : header file
//

#pragma once
#include "explorer1.h"
#include "afxwin.h"


// CWeb05Dlg dialog
class CWeb05Dlg : public CDialog
{
// Construction
public:
	CWeb05Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_WEB05_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	CExplorer1 m_ctrlIE;
	CEdit m_ctrlURL;
	DECLARE_EVENTSINK_MAP()
	void TitleChangeExplorer1(LPCTSTR Text);
};
