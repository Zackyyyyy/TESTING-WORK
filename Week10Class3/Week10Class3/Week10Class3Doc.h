
// Week10Class3Doc.h : CWeek10Class3Doc ��Ľӿ�
//


#pragma once


class CWeek10Class3Doc : public CDocument
{
protected: // �������л�����
	CWeek10Class3Doc();
	DECLARE_DYNCREATE(CWeek10Class3Doc)

// ����
public:

// ����
public:
	CArray <CRect, CRect> cr;
	int a[10] = { 0 };
// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CWeek10Class3Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
