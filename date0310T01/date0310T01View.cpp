
// date0310T01View.cpp: Cdate0310T01View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "date0310T01.h"
#endif

#include "date0310T01Doc.h"
#include "date0310T01View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdate0310T01View

IMPLEMENT_DYNCREATE(Cdate0310T01View, CView)

BEGIN_MESSAGE_MAP(Cdate0310T01View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_SIZE()
END_MESSAGE_MAP()

// Cdate0310T01View 构造/析构

Cdate0310T01View::Cdate0310T01View() noexcept
{
	// TODO: 在此处添加构造代码

}

Cdate0310T01View::~Cdate0310T01View()
{
}

BOOL Cdate0310T01View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cdate0310T01View 绘图

void Cdate0310T01View::OnDraw(CDC* pDC)
{
	Cdate0310T01Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	

	CClientDC dc(this);
	CBrush brush, *oldbrush;
	brush.CreateSolidBrush(RGB(0xD1, 0xFB, 0xED));
	oldbrush = dc.SelectObject(&brush);
	dc.Ellipse(0, 0, 2*r, 2*r);
	dc.SelectObject(oldbrush);
	

	// TODO: 在此处为本机数据添加绘制代码
}


// Cdate0310T01View 诊断

#ifdef _DEBUG
void Cdate0310T01View::AssertValid() const
{
	CView::AssertValid();
}

void Cdate0310T01View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdate0310T01Doc* Cdate0310T01View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdate0310T01Doc)));
	return (Cdate0310T01Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdate0310T01View 消息处理程序


void Cdate0310T01View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	RECT rect;
	GetClientRect(&rect);
	 // 获得客户区宽度
	if (x> y)
		r = y/2;
	else r = x/2;
	


	CView::OnLButtonDown(nFlags, point);
}


void Cdate0310T01View::OnSize(UINT nType, int cx, int cy)
{
	CView::OnSize(nType, cx, cy);
	x = (double)cx;
	y = (double)cy;

	// TODO: 在此处添加消息处理程序代码
}
