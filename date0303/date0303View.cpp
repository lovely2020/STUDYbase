
// date0303View.cpp: Cdate0303View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "date0303.h"
#endif

#include "date0303Doc.h"
#include "date0303View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdate0303View

IMPLEMENT_DYNCREATE(Cdate0303View, CView)

BEGIN_MESSAGE_MAP(Cdate0303View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// Cdate0303View 构造/析构

Cdate0303View::Cdate0303View() noexcept
{
	// TODO: 在此处添加构造代码

}

Cdate0303View::~Cdate0303View()
{
}

BOOL Cdate0303View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cdate0303View 绘图

void Cdate0303View::OnDraw(CDC* pDC)
{
	Cdate0303Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	//第一题
	//CString s=_T("我是卢奕帆");
	//pDC->TextOutW(200,200,s);
	//CString b;
	//int A=0;
	//b.Format(_T("%d"),A);
	//pDC->TextOutW(300,300,b);

	//第二题
	//pDoc->TextOutW(200,200,s);
	//pDoc->TextOutW(300,300,b);


	// TODO: 在此处为本机数据添加绘制代码
	

}


// Cdate0303View 诊断

#ifdef _DEBUG
void Cdate0303View::AssertValid() const
{
	CView::AssertValid();
}

void Cdate0303View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdate0303Doc* Cdate0303View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdate0303Doc)));
	return (Cdate0303Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdate0303View 消息处理程序


void Cdate0303View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CDC* dc = GetDC();
	CView::OnLButtonDown(nFlags, point);
	dc->TextOutW(point.x, point.y, _T(""));
	Cdate0303Doc* pDoc = GetDocument();
	pDoc->count++;
}


void Cdate0303View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cdate0303Doc* pDoc = GetDocument();
	CString s;
	s.Format(_T("%d"), pDoc->count);
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);


	CView::OnRButtonDown(nFlags, point);
}
