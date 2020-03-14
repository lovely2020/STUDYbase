
// date0310T2View.cpp: Cdate0310T2View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "date0310T2.h"
#endif

#include "date0310T2Doc.h"
#include "date0310T2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdate0310T2View

IMPLEMENT_DYNCREATE(Cdate0310T2View, CView)

BEGIN_MESSAGE_MAP(Cdate0310T2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cdate0310T2View 构造/析构

Cdate0310T2View::Cdate0310T2View() noexcept
{
	// TODO: 在此处添加构造代码

}

Cdate0310T2View::~Cdate0310T2View()
{
}

BOOL Cdate0310T2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cdate0310T2View 绘图

void Cdate0310T2View::OnDraw(CDC* /*pDC*/)
{
	Cdate0310T2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cdate0310T2View 诊断

#ifdef _DEBUG
void Cdate0310T2View::AssertValid() const
{
	CView::AssertValid();
}

void Cdate0310T2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdate0310T2Doc* Cdate0310T2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdate0310T2Doc)));
	return (Cdate0310T2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdate0310T2View 消息处理程序


void Cdate0310T2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int C;
	
	Cdate0310T2Doc* pDoc = GetDocument();
	C = pDoc->A + pDoc->B;
	CString s;
	s.Format(_T("A+B=%d"), C);
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);

	

	CView::OnLButtonDown(nFlags, point);
}
