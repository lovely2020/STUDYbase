
// date0310T3View.cpp: Cdate0310T3View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "date0310T3.h"
#endif

#include "date0310T3Doc.h"
#include "date0310T3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdate0310T3View

IMPLEMENT_DYNCREATE(Cdate0310T3View, CView)

BEGIN_MESSAGE_MAP(Cdate0310T3View, CView)
	ON_WM_LBUTTONUP()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cdate0310T3View 构造/析构

Cdate0310T3View::Cdate0310T3View() noexcept
{
	// TODO: 在此处添加构造代码

}

Cdate0310T3View::~Cdate0310T3View()
{
}

BOOL Cdate0310T3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cdate0310T3View 绘图

void Cdate0310T3View::OnDraw(CDC* pDC)
{
	Cdate0310T3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	
	CRect r1(10, 20, 100, 200);
	CRect r2(200, 300, 350, 400);
	CRect r3(400, 400, 500, 450);
	pDC->Rectangle(&r1);
	pDC->Rectangle(&r2);
	pDC->Rectangle(&r3);
	
	
	

	// TODO: 在此处为本机数据添加绘制代码
}


// Cdate0310T3View 诊断

#ifdef _DEBUG
void Cdate0310T3View::AssertValid() const
{
	CView::AssertValid();
}

void Cdate0310T3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdate0310T3Doc* Cdate0310T3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdate0310T3Doc)));
	return (Cdate0310T3Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdate0310T3View 消息处理程序


void Cdate0310T3View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	


	CView::OnLButtonUp(nFlags, point);
}


void Cdate0310T3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CString s;
	CString t;
	CString r;

	Cdate0310T3Doc *pDoc = GetDocument();
	if ((point.x > pDoc->r1.TopLeft().x)&&(point.x< pDoc->r1.BottomRight().x)&&(point.y>pDoc->r1.TopLeft().y)&&(point.y < pDoc->r1.BottomRight().y))
	{
		s.Format(_T("%d"), pDoc->a);
		dc.TextOutW(point.x, point.y, s);

	}
	else if (point.x > pDoc->r2.TopLeft().x&&point.x< pDoc->r2.BottomRight().x&&point.y>pDoc->r2.TopLeft().y&&point.y < pDoc->r2.BottomRight().y)
	{
		t.Format(_T("%d"), pDoc->b);
		dc.TextOutW(point.x, point.y, t);
	}
	else if (point.x > pDoc->r3.TopLeft().x&&point.x< pDoc->r3.BottomRight().x&&point.y>pDoc->r3.TopLeft().y&&point.y < pDoc->r3.BottomRight().y)
	{
		int c = pDoc->a + pDoc->b;
		r.Format(_T("%d"), c);
		dc.TextOutW(point.x, point.y, r);
	}
	else dc.TextOutW(point.x, point.y, _T("点击无效"));

	CView::OnLButtonDown(nFlags, point);
}
