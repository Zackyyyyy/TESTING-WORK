
// FUCKING TESTCLASS 2.5Doc.h : CFUCKINGTESTCLASS25Doc ��Ľӿ�
//


#pragma once


class CFUCKINGTESTCLASS25Doc : public CDocument
{
protected: // �������л�����
	CFUCKINGTESTCLASS25Doc();
	DECLARE_DYNCREATE(CFUCKINGTESTCLASS25Doc)

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
	virtual ~CFUCKINGTESTCLASS25Doc();
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
	int A;
	int B;
};
