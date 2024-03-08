
// MixralDemoOnWindowsDlg.h : header file
//

#pragma once
#include "CMixtralEngine.h"

// CMixralDemoOnWindowsDlg dialog
class CMixralDemoOnWindowsDlg : public CDialogEx
{
// Construction
public:
	CMixralDemoOnWindowsDlg(CWnd* pParent = nullptr);	// standard constructor
	CMixtralEngine* pMixtralEngine;
// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MIXRALDEMOONWINDOWS_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	CString m_csText;
	CString m_csSentiment;
};
