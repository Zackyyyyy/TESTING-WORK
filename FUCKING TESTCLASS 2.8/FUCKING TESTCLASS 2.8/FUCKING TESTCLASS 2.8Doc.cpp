
// FUCKING TESTCLASS 2.8Doc.cpp : CFUCKINGTESTCLASS28Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "FUCKING TESTCLASS 2.8.h"
#endif

#include "FUCKING TESTCLASS 2.8Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CFUCKINGTESTCLASS28Doc

IMPLEMENT_DYNCREATE(CFUCKINGTESTCLASS28Doc, CDocument)

BEGIN_MESSAGE_MAP(CFUCKINGTESTCLASS28Doc, CDocument)
END_MESSAGE_MAP()


// CFUCKINGTESTCLASS28Doc ����/����

CFUCKINGTESTCLASS28Doc::CFUCKINGTESTCLASS28Doc()
	: a(0)
	, b(0)
	, c(0)
{
	// TODO: �ڴ����һ���Թ������

}

CFUCKINGTESTCLASS28Doc::~CFUCKINGTESTCLASS28Doc()
{
}

BOOL CFUCKINGTESTCLASS28Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CFUCKINGTESTCLASS28Doc ���л�

void CFUCKINGTESTCLASS28Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}

#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void CFUCKINGTESTCLASS28Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// �޸Ĵ˴����Ի����ĵ�����
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// ������������֧��
void CFUCKINGTESTCLASS28Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CFUCKINGTESTCLASS28Doc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// CFUCKINGTESTCLASS28Doc ���

#ifdef _DEBUG
void CFUCKINGTESTCLASS28Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CFUCKINGTESTCLASS28Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CFUCKINGTESTCLASS28Doc ����
