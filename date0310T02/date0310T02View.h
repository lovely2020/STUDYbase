
// date0310T02View.h: Cdate0310T02View 类的接口
//

#pragma once


class Cdate0310T02View : public CView
{
protected: // 仅从序列化创建
	Cdate0310T02View() noexcept;
	DECLARE_DYNCREATE(Cdate0310T02View)

// 特性
public:
	Cdate0310T02Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cdate0310T02View();
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
private:
	CPoint m_pointOri;
};

#ifndef _DEBUG  // date0310T02View.cpp 中的调试版本
inline Cdate0310T02Doc* Cdate0310T02View::GetDocument() const
   { return reinterpret_cast<Cdate0310T02Doc*>(m_pDocument); }
#endif

