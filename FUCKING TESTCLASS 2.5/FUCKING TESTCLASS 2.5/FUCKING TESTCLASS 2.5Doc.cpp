
// FUCKING TESTCLASS 2.5Doc.cpp : CFUCKINGTESTCLASS25Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "FUCKING TESTCLASS 2.5.h"
#endif

#include "FUCKING TESTCLASS 2.5Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CFUCKINGTESTCLASS25Doc

IMPLEMENT_DYNCREATE(CFUCKINGTESTCLASS25Doc, CDocument)

BEGIN_MESSAGE_MAP(CFUCKINGTESTCLASS25Doc, CDocument)
END_MESSAGE_MAP()


// CFUCKINGTESTCLASS25Doc ����/����

CFUCKINGTESTCLASS25Doc::CFUCKINGTESTCLASS25Doc()
	: A(1)
	, B(2)
{
	// TODO: �ڴ����һ���Թ������

}

CFUCKINGTESTCLASS25Doc::~CFUCKINGTESTCLASS25Doc()
{
}

BOOL CFUCKINGTESTCLASS25Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CFUCKINGTESTCLASS25Doc ���л�

void CFUCKINGTESTCLASS25Doc::Serialize(CArchive& ar)
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
void CFUCKINGTESTCLASS25Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void CFUCKINGTESTCLASS25Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CFUCKINGTESTCLASS25Doc::SetSearchContent(const CString& value)
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

// CFUCKINGTESTCLASS25Doc ���

#ifdef _DEBUG
void CFUCKINGTESTCLASS25Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CFUCKINGTESTCLASS25Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CFUCKINGTESTCLASS25Doc ����
