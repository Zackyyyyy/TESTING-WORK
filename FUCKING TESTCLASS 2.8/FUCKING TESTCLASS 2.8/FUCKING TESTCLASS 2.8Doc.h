
// FUCKING TESTCLASS 2.8Doc.h : CFUCKINGTESTCLASS28Doc ��Ľӿ�
//


#pragma once


class CFUCKINGTESTCLASS28Doc : public CDocument
{
protected: // �������л�����
	CFUCKINGTESTCLASS28Doc();
	DECLARE_DYNCREATE(CFUCKINGTESTCLASS28Doc)

// ����
public:

// ����
public:

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
	virtual ~CFUCKINGTESTCLASS28Doc();
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
public:
	int a;
	int b;
	int c;
};
