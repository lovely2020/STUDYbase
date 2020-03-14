
// date0310T1View.cpp: Cdate0310T1View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "date0310T1.h"
#endif

#include "date0310T1Doc.h"
#include "date0310T1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdate0310T1View

IMPLEMENT_DYNCREATE(Cdate0310T1View, CView)

BEGIN_MESSAGE_MAP(Cdate0310T1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cdate0310T1View 构造/析构

Cdate0310T1View::Cdate0310T1View() noexcept
{
	// TODO: 在此处添加构造代码

}

Cdate0310T1View::~Cdate0310T1View()
{
}

BOOL Cdate0310T1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cdate0310T1View 绘图

void Cdate0310T1View::OnDraw(CDC* /*pDC*/)
{
	Cdate0310T1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cdate0310T1View 诊断

#ifdef _DEBUG
void Cdate0310T1View::AssertValid() const
{
	CView::AssertValid();
}

void Cdate0310T1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdate0310T1Doc* Cdate0310T1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdate0310T1Doc)));
	return (Cdate0310T1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdate0310T1View 消息处理程序


void Cdate0310T1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s=_T("左键正被按下");
	CClientDC d(this);
	d.TextOutW(200, 200, s);
	

	CView::OnLButtonDown(nFlags, point);
}


void Cdate0310T1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s = _T("左键正在抬起");
	CClientDC d(this);
	d.TextOutW(200, 200, s);


	CView::OnLButtonUp(nFlags, point);
}
