
// date0303View.h: Cdate0303View 类的接口
//

#pragma once


class Cdate0303View : public CView
{
protected: // 仅从序列化创建
	Cdate0303View() noexcept;
	DECLARE_DYNCREATE(Cdate0303View)

// 特性
public:
	Cdate0303Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cdate0303View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // date0303View.cpp 中的调试版本
inline Cdate0303Doc* Cdate0303View::GetDocument() const
   { return reinterpret_cast<Cdate0303Doc*>(m_pDocument); }
#endif

