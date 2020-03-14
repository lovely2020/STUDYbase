

static CDC* PASCAL FromHandle(HDC hDC);
// date0310T3View.h: Cdate0310T3View 类的接口
//

#pragma once


class Cdate0310T3View : public CView
{
protected: // 仅从序列化创建
	Cdate0310T3View() noexcept;
	DECLARE_DYNCREATE(Cdate0310T3View)

// 特性
public:
	Cdate0310T3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cdate0310T3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	CPoint p;
private:
	CPoint m_ptOrigin;
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // date0310T3View.cpp 中的调试版本
inline Cdate0310T3Doc* Cdate0310T3View::GetDocument() const
   { return reinterpret_cast<Cdate0310T3Doc*>(m_pDocument); }
#endif

